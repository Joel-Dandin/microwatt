#include <stdint.h>
#include <stdbool.h>
#include <time.h>

#include "console.h"
//#include "joel_lib.h"

int atoi(char* str){
    int ret = 0;

    for(int i=0;str[i]!='\0';++i)
	ret = ret * 10 + str[i] - '0';

    return ret;
}

int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}

void main()
{
    console_init();

    puts("Input to get Fibonacci till\n");

    char a[5];
    int ch,i = 0;
    do{
    	ch = getchar();
    	a[i] = ch;
    	i++;
    }while(ch != '\n');
    int c = atoi(a);
    //clock_t t;
    //t = clock();
    puts("The Fibonacci value is ");
    putchar(fib(c) + '0');
    //t = clock() - t;
    //double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    puts("fun() took ");
    //putchar(time_taken + '0');
    puts(" seconds to execute \n");

    puts("\nJoel");
}