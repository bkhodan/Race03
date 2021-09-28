#include "header.h"

int main (int argc, char *argv[]) {
    initscr();
	const char* s = "usage: ./matrix_rain [-s]\n";

	if (argc == 2)
		if (mx_strlen(argv[1]) == 2 && (argv[1])[0] == '-' && (argv[1])[1] == 's')
			mx_rain();
		else
			write(2, s, mx_strlen(s));
	else if (argc == 1) {
		mx_introduction();
		mx_rain();
	}
	else {
		write(2, s, mx_strlen(s));
	}

  	endwin();
	return 0;
}
