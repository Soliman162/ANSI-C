/**
 * @file 1_13.c
 * @author Ahmed Elsayed (Ahmedelsayed215@gmail.com)
 * @brief print histogram for word length
 * @version 0.1
 * @date 2023-02-24
 * 
 */
#include <stdio.h>

int main(void)
{
    char c ;
    int i=0,j=0,w_length=0,scount=0;
    

    while( (c=getchar()) != EOF  )
    {
        if ( c=='\t' || c==' ' )
        {
            if(scount==0)
            {
                scount++;
                printf("\n[%d]",i++);
                for(j=0;j<w_length;j++)
                {
                    printf("*");
                }
                w_length=0;
            }

        }else
        {
            scount=0;
            w_length++;   
        }
    }
    return 0;
}