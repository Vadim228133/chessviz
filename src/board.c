#include "board.h"

#include <stdio.h>

void print_chess(char chess[8][8])
{
    for (short int i = 0; i < 8; i++) {
        printf("%d ",i);
        for (short int j = 0; j < 8; j++) {
            printf("{ %c }",chess[i][j]);
        }
        printf("\n");
    }
    printf("    a    b    c    d    e    f    g    h");
}