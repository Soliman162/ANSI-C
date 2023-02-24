/**
 * @file 1_3.c
 * @author Ahmed Elsayed (Ahmedelsayed215@gmail.com)
 * @brief fahrenheit to celsius
 * @version 0.1
 * @date 2023-02-24
 * 
 */
#include <stdio.h>

#define MAX_TEMP    300
#define LOWER_TEMP  0
#define STEP        20

int main(void)
{
    printf("|\t\t\t|\n");
    printf("|fahrenheit to celsius  |\n");
    printf("|\t\t\t|\n");
    for(int i=LOWER_TEMP;i<=MAX_TEMP;i+=STEP)
    {
        printf("%3d\t%6.1f\n",i, (5.0/9.0)*(i-32) );
    }

    return 0;
}