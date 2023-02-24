/**
 * @file 1_8.c
 * @author Ahmed Elsayed (Ahmedelsayed215@gmail.com)
 * @brief count blank tab new line
 * @version 0.1
 * @date 2023-02-24
 * 
 */
#include <stdio.h>

int main(void)
{
    char c ;

    int nline=0,blank=0,tab=0;

    while( (c=getchar()) != EOF )
    {
        if ( c == '\n' )
        {
            nline++;
        }else if( c=='\t' )
        {
            tab++;
        }else if( c==' ' )
        {
            blank++;
        }
    }
    printf("tab     blank   newline\n");
    printf("%d       %d       %d\n",tab,blank,nline);

    return 0;
}