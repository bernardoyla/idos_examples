#include <stdio.h>
//#include "main.h"

int main(int argc, char const *argv[])
{
    printf("hello world ");
    
    printf("argc: %d\n", argc);

    for (int i = 1; i < argc; i++){
        /* printf("%lu", sizeof(argv[i])); */
        printf("\n");
        for(int j = 1; j < sizeof(argv[i]); j++){
            printf("%c", argv[i][j]);
        } 
    }

    return 0;
}