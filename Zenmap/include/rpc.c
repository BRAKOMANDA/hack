#include <stdio.h>
#include <screen.h>

void _NonAppStop()
{
    uint16_t row, col;
    
    GetScreenSize(&row, &col);
    gotorowcol(row-1, 0);
    /* pressanykey(); */
    printf("<Press any key to close screen> ");
    getcharacter();
}
