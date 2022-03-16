/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "prog1.h"
#include <string.h>


int main()
{
    int szam = 1;
    for(int i = 0; i<100; ++i){
        
        if(szam %3 == 0){
            printf("Fizz");
            if(szam %5 == 0){
                printf("Buzz\n");   
            }
            else {
                printf("\n");
            }
        }
        else if(szam %5 == 0){
        printf("Buzz\n");   
        }
        else{
            printf("%d\n",szam);
        }
   ++szam;
}
    return 0;
}
