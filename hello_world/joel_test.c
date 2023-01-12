#include <stdint.h>
#include <stdbool.h>
#include "console.h"

void iprint(int n)
  { 
    if (n/10)
        iprint(n/10);
    putchar(n%10 + '0');
  }

int main(void)
{
    console_init();

    int i = 0, sum=0;

    for(i;i<=10;i++)
    {
        sum += i*i;
        iprint(sum);
        putchar(10);
    }

    puts("Shivam");
}