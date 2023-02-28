/**
 * @file 1_9.c
 * @author Ahmed Elsayed (Ahmedelsayed215@gmail.com)
 * @brief replace several blank with one balnk
 * @version 0.1
 * @date 2023-02-24
 * 
 */
#include <stdio.h>

int main(void)
{
    char c ;
    int s_count=0;

    while( (c=getchar()) != EOF  )
    {
        if ( c=='\t' || c==' ' )
        {
            if(s_count==0)
            {
                s_count++;
                putchar(' ');
            }
        }else
        {
            s_count=0;
            putchar(c);
        }
    }
    return 0;
}