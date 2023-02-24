/**
 * @file 1_4.c
 * @author Ahmed Elsayed (Ahmedelsayed215@gmail.com)
 * @brief  celsius to fahrenheit
 * @version 0.1
 * @date 2023-02-24
 * 
 */
#include <stdio.h>

#define MAX_TEMP    148.9f
#define LOWER_TEMP  -17.8f
#define STEP        11.1

int main(void)
{
    printf("|\t\t\t|\n");
    printf("| celsius to fahrenheit |\n");
    printf("|\t\t\t|\n");
    for(int i=LOWER_TEMP;i<=MAX_TEMP;i+=STEP)
    {
        printf("%3d\t%6.1f\n",i, (9.0/5.0)*i+32 );
    }

    return 0;
}