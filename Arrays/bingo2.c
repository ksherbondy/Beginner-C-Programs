#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){

    int bingo[2][5][5];
    int x, y, z;

    srand((unsigned)time(NULL));
    for(x = 0; x < 2; x++){
        for(y = 0; y < 5; y++){
            for(z = 0; z < 5; z++) {
                bingo[x][y][z] = rand() % 75;
            }
        }
    }
    bingo[0][2][2] = 0;
    bingo[1][2][2] = 0;

    for(x = 0; x < 2; x++){
        printf("\n\tB\tI\tN\tG\tO\n");
        for(y = 0 ; y < 5; y++){
            for(z = 0; z < 5; z++) {
                printf("\t%02d", bingo[x][y][z]);
            }
            putchar('\n');
        }

    }

    return 0;
}