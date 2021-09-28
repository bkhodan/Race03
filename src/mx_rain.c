#include "header.h"

void mx_rain() {
    mx_color();

    int maxy = 0, maxx = 0;
    getmaxyx(stdscr, maxy, maxx);
    int start[maxx];
    int length[maxx];
    int arr[maxx];

    for (int i = 0; i < maxx; i++) {
        start[i] = -1 * (rand() % 80);
        arr[i] = start[i];
        length[i] = rand() % 50  - 1;
    }

    int sp = 100;
    int color = 1;

    while (1) {
        for (int i = 0 ; i < maxx ; i++) {
            wchar_t random_char = (rand() % 93 + 33);

            if (i % 2 == 0) {
                random_char = ' ';
            }
            mvaddch(arr[i] + 1, i, random_char | COLOR_PAIR(2));
            mvaddch(arr[i], i, random_char | COLOR_PAIR(color));
            mvaddch(arr[i] - length[i], i, ' ' | COLOR_PAIR(color));
            if (arr[i] - length[i] > maxy) {
                arr[i] = start[i];
            }
            arr[i]++;
        }

        usleep(1000 * sp);
        nodelay(stdscr,TRUE);
        noecho();
        char ch = getch();

        if (ch == 'q') {
			clear();
			break;
		}
        switch (ch) {
            case '+':
                if (sp > 1) {
                    if (sp <= 11)
                        sp--;
                    else
                        sp -= 10;
                }
                break;
            case '-':
                if (sp < 300) {
                    if (sp <= 10)
                            sp++;
                        else
                            sp += 10;
                }
                break;
            case '0': color = 1; break;
            case '1': color = 2; break;
            case '2': color = 3; break;
            case '3': color = 4; break;
            case '4': color = 5; break;
            case '5': color = 6; break;
            case '6': color = 7; break;
            case '7': color = 8; break;
        }
        refresh();
    }
}
