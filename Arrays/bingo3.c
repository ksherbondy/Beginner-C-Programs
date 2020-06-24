#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int bingo[3][2][5][5];
    int x, y, z, a;

    srand((unsigned)time(NULL));
    for(x = 0; x < 3; x++){
        for(y = 0; y < 2; y++){
            for(z = 0; z < 5; z++) {
                for(a = 0; a < 5; a++) {
                    bingo[x][y][z][a] = rand() % 80;
                }
            }
        }
    }

    bingo[0][0][2][2] = 0;
    bingo[1][0][2][2] = 0;
    bingo[2][0][2][2] = 0;

    bingo[0][1][2][2] = 0;
    bingo[1][1][2][2] = 0;
    bingo[2][1][2][2] = 0;

    for(x = 0; x < 3; x++) {
        printf("\n\t\tGrandma %d\n", x + 1);
        for (y = 0; y < 2; y++) {
            printf("\n\tB\tI\tN\tG\tO\n");
            for (z = 0; z < 5; z++) {
                for (a = 0; a < 5; a++) {
                    printf("\t%02d", bingo[x][y][z][a]);
                }
                putchar('\n');
            }

        }
    }

    return 0;
}