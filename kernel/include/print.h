#pragma once
#include <stdint.h>
#include <stddef.h>

enum
{
    BLACK = 0,
    BLUE = 1,
    GREEN = 2,
    CYAN = 3,
    RED = 4,
    MAGENTA = 5,
    BROWN = 6,
    LIGHT_GRAY = 7,
    DARK_GRAY = 8,
    LIGHT_BLUE = 9,
    LIGHT_GREEN = 10,
    LIGHT_CYAN = 11,
    LIGHT_RED = 12,
    PINK = 13,
    YELLOW = 14,
    WHITE = 15,
};

void clear();
void clear_row(size_t row);
void set_color(uint8_t fgColor, uint8_t bgColor);
void print_newline();
void print_str(char *str);
void print_char(char c);