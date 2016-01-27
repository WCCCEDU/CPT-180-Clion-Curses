//
// Created by Paul Scarrone on 27-01-2016.
// This draws a box and shows how to build a simple table in a new window within.
//
#include <iostream>
#include "ncurses.h"

using namespace std;

void print(WINDOW *win, int x0, int y0, const char *str);

int main() {
    WINDOW *my_win;
    initscr();
    refresh();
    my_win = newwin(50, 100, 3, 3);
    box(my_win, 0 , 0);
    wrefresh(my_win);
    print(my_win, 1, 1, "First Name");
    print(my_win, 2, 1, "Last Name");
    print(my_win, 1, 15, "Paul");
    print(my_win, 2, 15, "Scarrone");
    wrefresh(my_win);
    getch();
    delwin(my_win);
    endwin();
    return 0;
}

void print(WINDOW *win, int x0, int y0, const char *str){
    wmove(win, x0, y0);
    waddstr(win, str);
    wrefresh(win);
}
