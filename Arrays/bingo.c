#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int bingonumbers[75];
    int x;

    srand((unsigned)time(NULL));

    for(x = 0; x < 75; x++){
        bingonumbers[x] = rand() % 75;
    }
    printf("75 Randomly Selected Bingo Numbers:\n");
    for(x = 0; x < 75; x++){

        printf("%d\n", bingonumbers[x]);
    }
    putchar('\n');

    return 0;
}