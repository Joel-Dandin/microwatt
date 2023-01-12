#include <stdint.h>
#include <stdbool.h>
#include "console.h"
//#include <stdio.h>

const char mw_logo[] =
"            ^ \n "
"          /^\\\n "
"          |-|\n  "
"         | |\n  "
"         |S|\n  "
"         |S|\n  "
"         |J|\n  "
"         |M|\n  "
"        /| |\\\n"
"         / | | \\\n "
"       |  | |  |\n "
"       WWWWWWWWWW\n "
"        WWWWWWWW \n "
"         WWWWWW  \n "
"          WWWW   \n ";
     

int main(void)
{
	console_init();

	puts(mw_logo);

	while (1) {
		unsigned char c = getchar();
		putchar(c);
		if (c == 13) // if CR send LF
			putchar(10);
	}
}
