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
