#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int bingo[5][5];
    int x, y;

    srand((unsigned)time(NULL));
    for(x = 0; x < 5; x++){
        for(y = 0; y < 5; y++){
            bingo[x][y] = rand() % 80;
        }
        bingo[2][2] = 0;
    }

    printf("\n\tB\tI\tN\tG\tO\n");

    for(x = 0; x < 5; x++){

        for(y = 0 ; y < 5; y++){

            printf("\t%02d", bingo[x][y]);
        }
        putchar('\n');
    }


        /* code */
        return 0;
}