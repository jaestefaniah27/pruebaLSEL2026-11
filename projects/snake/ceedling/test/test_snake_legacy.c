#include "unity.h"
#include "snake.h"

#define TEST_CASE(...)
#define TEST_RANGE(...)

#include <stdlib.h>

#include "snake_time.h"
#include "snake_random.h"
#include "snake_input.h"
#include "snake_display.h"

#define ROWS    8
#define COLS    16

snake_game_t game;

void setUp(void)
{
    game.limits.x = ROWS;
    game.limits.y = COLS;

    snake_set_head(&game, ROWS/2, COLS/2);

    game.apple.x = 0;
    game.apple.y = 0;
}

void tearDown(void)
{
}

/**
 * @brief  
 */
void test_check_apple_returns0WithOnlyHeadAndAppleIsDifferent(void)
{
    TEST_IGNORE ();
}
