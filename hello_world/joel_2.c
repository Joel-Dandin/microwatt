#include <stdint.h>
#include<stdbool.h>
#include"console.h"

int main()
{ 
        console_init();
        puts("start");
        char a;
        while(1)
        {
                a = getchar();
                puts("\nThe output is ");
                putchar(a);
        }
        puts("Jeol");
}

