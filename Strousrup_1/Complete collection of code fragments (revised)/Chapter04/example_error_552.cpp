#include "std_lib_facilities.h"

int area(int width, int height)

{
    if (width <= 0 || height <= 0)
    {
        error("not correct <=0");
    }
    return width * height;
}