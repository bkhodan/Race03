#include "header.h"

void mx_introduction() {
    initscr();
    mx_color();
    char *mass1 = "Wake up , Neo..";
    char *mass2 = "The Matrix has you..";
    char *mass3 = "Follow the white rabbit";
    char *mass4 = "Knock, knock, Neo";

    for (unsigned int i = 0; i < mx_strlen(mass1); i++) {
        mvaddch(5, i + 4, mass1[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();

    for (unsigned int i = 0; i < mx_strlen(mass2); i++) {
        mvaddch(5, i + 4, mass2[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();

    for (unsigned int i = 0; i < mx_strlen(mass3); i++) {
        mvaddch(5, i + 4, mass3[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();

    for (unsigned int i = 0; i < mx_strlen(mass4); i++) {
        mvaddch(5, i + 4, mass4[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();
}
