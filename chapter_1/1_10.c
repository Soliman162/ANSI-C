/**
 * @file 1_10.c
 * @author Ahmed Elsayed (Ahmedelsayed215@gmail.com)
 * @brief replace tab with \t back slash wiyh \\ 
 * @version 0.1
 * @date 2023-02-24
 * 
 */
#include <stdio.h>

int main(void)
{
    char c ;
    int s_count=0;

    while( (c=getchar()) != EOF )
    {
        if ( c=='\t' )
        {
            putchar('\\');
            putchar('t');
        }else if ( c=='\\' )
        {
            putchar('\\');
            putchar('\\'); 
        }else if( c=='\b' )
        {
            putchar('\\');
            putchar('b');
        }
        else
        {
            putchar(c);
        }
    }

    return 0;
}