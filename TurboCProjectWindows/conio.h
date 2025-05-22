#ifndef _CONIO_H
#define _CONIO_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void clrscr() {
    system("cls");
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

#endif
