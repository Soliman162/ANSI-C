/**
 * @file 1_9.c
 * @author Ahmed Elsayed (Ahmedelsayed215@gmail.com)
 * @brief replace several blank with one balnk
 * @version 0.1
 * @date 2023-02-24
 * 
 */
#include <stdio.h>

#define MAX_SIZE    1000

int main(void)
{
    char c ;
    int i=0,s_count=0;
    char string[MAX_SIZE];

    while( (c=getchar()) != EOF  && i<MAX_SIZE )
    {
        if ( c=='\t' || c==' ' )
        {
            s_count++;
            if(s_count>1)
                i--;
            string[i++] = ' ';
        }else
        {
            s_count = 0;
            string[i++] = c;
        }
    }
    string[i] = '\0';

    for(i=0;i<MAX_SIZE && string[i] != '\0';i++)
    {
        printf("%c",string[i]);
    }

    return 0;
}