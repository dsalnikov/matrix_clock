#ifndef __SCREEN_H__
#define __SCREEN_H__


//#include "Time.h"
#include <TimeLib.h>

typedef unsigned char u8;

#define SCREEN_SIZE 3*16*8
#define GAMMA_WRITE_FUNC_CODE 1
#define SCREEN_WRITE_FUNC_CODE 2

class Screen {
public:
    Screen();

    void fill(u8);
    void draw_time(time_t, u8 *);
    void draw_pixel(u8 x, u8 y, u8 *color);
    void draw_digit(u8 x, u8 y, u8 n);
    void draw_frame(const uint32_t *frame);

    void send();

private:
    u8 screen[SCREEN_SIZE];

    static const u8 zero[];
    static const u8 one[];
    static const u8 two[];
    static const u8 three[];
    static const u8 four[];
    static const u8 five[];
    static const u8 six[];
    static const u8 seven[];
    static const u8 eight[];
    static const u8 nine[];

    static const u8 *digits[];
};

#endif //__SCREEN_H__