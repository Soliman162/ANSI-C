/**
 * @file 1_12.c
 * @author Ahmed Elsayed (Ahmedelsayed215@gmail.com)
 * @brief print one word per line 
 * @version 0.1
 * @date 2023-02-24
 * 
 */
#include <stdio.h>

int main(void)
{
    char c ;
    int scount=0;

    while( (c=getchar()) != EOF  )
    {
        if ( c=='\t' || c==' ' )
        {
            if(scount==0)
            {
                scount++;
                putchar('\n');
            }

        }else
        {
            scount=0;
            putchar(c);
        }
    }
    return 0;
}