#if DEBUG

#include "global.h"
#include "item.h"
#include "list_menu.h"
#include "main.h"
#include "menu.h"
#include "overworld.h"
#include "pokemon.h"
#include "random.h"
#include "script.h"
#include "sound.h"
#include "strings.h"
#include "task.h"
#include "constants/items.h"
#include "constants/maps.h"
#include "constants/moves.h"
#include "constants/songs.h"
#include "constants/species.h"

#define DEBUG_MAIN_MENU_HEIGHT 3
#define DEBUG_MAIN_MENU_WIDTH 10

void Debug_ShowMainMenu(void);
static void Debug_DestroyMainMenu(u8);
static void DebugAction_Test(u8);
static void DebugAction_RandomPokemon(u8);
static void DebugAction_Cancel(u8);
static void DebugTask_HandleMainMenuInput(u8);

enum {
    DEBUG_MENU_ITEM_TEST,
    DEBUG_MENU_ITEM_RANDOM_POKEMON,
    DEBUG_MENU_ITEM_CANCEL,
};

static const u8 gDebugText_Test[] = _("Test");
static const u8 gDebugText_RandomPokemon[] = _("Random {PKMN}");
static const u8 gDebugText_Cancel[] = _("Cancel");

static const struct ListMenuItem sDebugMenuItems[] =
{
    [DEBUG_MENU_ITEM_TEST] = {gDebugText_Test, DEBUG_MENU_ITEM_TEST},
    [DEBUG_MENU_ITEM_RANDOM_POKEMON] = {gDebugText_RandomPokemon, DEBUG_MENU_ITEM_RANDOM_POKEMON},
    [DEBUG_MENU_ITEM_CANCEL] = {gDebugText_Cancel, DEBUG_MENU_ITEM_CANCEL}
};

static void (*const sDebugMenuActions[])(u8) =
{
    [DEBUG_MENU_ITEM_TEST] = DebugAction_Test,
    [DEBUG_MENU_ITEM_RANDOM_POKEMON] = DebugAction_RandomPokemon,
    [DEBUG_MENU_ITEM_CANCEL] = DebugAction_Cancel
};

static const struct WindowTemplate sDebugMenuWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = DEBUG_MAIN_MENU_WIDTH,
    .height = 2 * DEBUG_MAIN_MENU_HEIGHT,
    .paletteNum = 15,
    .baseBlock = 1,
};

static const struct ListMenuTemplate sDebugMenuListTemplate =
{
    .items = sDebugMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenuItems),
    .maxShowed = DEBUG_MAIN_MENU_HEIGHT,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 1,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = 1,
    .cursorKind = 0
};

void Debug_ShowMainMenu(void) {
    struct ListMenuTemplate menuTemplate;
    u8 windowId;
    u8 menuTaskId;
    u8 inputTaskId;

    // create window
    windowId = AddWindow(&sDebugMenuWindowTemplate);
    SetStandardWindowBorderStyle(windowId, 0);
    DrawStdWindowFrame(windowId, FALSE);

    // create list menu
    menuTemplate = sDebugMenuListTemplate;
    menuTemplate.windowId = windowId;
    menuTaskId = ListMenuInit(&menuTemplate, 0, 0);

    // draw everything
    CopyWindowToVram(windowId, 3);

    // create input handler task
    inputTaskId = CreateTask(DebugTask_HandleMainMenuInput, 3);
    gTasks[inputTaskId].data[0] = menuTaskId;
    gTasks[inputTaskId].data[1] = windowId;
}

static void Debug_DestroyMainMenu(u8 taskId)
{
    DestroyListMenuTask(gTasks[taskId].data[0], NULL, NULL);
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
    DestroyTask(taskId);
    EnableBothScriptContexts();
}

static void DebugTask_HandleMainMenuInput(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenuActions[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMainMenu(taskId);
    }
}

static void DebugAction_Cancel(u8 taskId)
{
    Debug_DestroyMainMenu(taskId);
}

static void DebugAction_Test(u8 taskId)
{
    AddBagItem(ITEM_RARE_CANDY, 99);
    Debug_DestroyMainMenu(taskId);
}

static void DebugAction_RandomPokemon(u8 taskId)
{
    struct Pokemon mon;
    u16 species = Random() % NUM_SPECIES + 1;
    u8 level = Random() % 100 + 1;
    // u16 itemId = ITEM_MENTAL_HERB;
    // u8 heldItem[2];

    PlaySE(MUS_RG_FAN5);
    // heldItem[0] = itemId;
    // heldItem[1] = itemId >> 8;
    // SetMonData(&mon, MON_DATA_HELD_ITEM, heldItem);
    CreateMon(&mon, species, level, 0x20, FALSE, 0, FALSE, 0);
    GiveMonToPlayer(&mon);
    Debug_DestroyMainMenu(taskId);
}
#endif
