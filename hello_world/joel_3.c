#include <stdint.h>
#include <stdbool.h>
#include "console.h"
//#include "joel_lib.h"

int atoi(char* str){
    int ret = 0;
	
    for(int i=0;str[i]!='\0';++i)
	ret = ret * 10 + str[i] - '0';
		
    return ret;
}

int main(void)
{
    console_init();
    
    puts("Input First value to add ");
    char a[5],b[5];
    int ch,i = 0;
    do{
    	ch = getchar();
    	a[i] = ch;
    	i++;
    }while(ch != '\t');
    
    puts("The fisrt value is ");
    puts(a);
    puts("\nInput second value is  ");
    i=0;
    do{
    	ch = getchar();
    	b[i] = ch;
    	i++;
    }while(ch != '\t');
    
    puts("The Second value is ");
    puts(b);
    int c = atoi(a);
    c = c + atoi(b);
    puts("\nThe Result is ");
    putchar(c + '0');
    //char* g = gets(3);
    puts("\nJoel");
}
