#include <stdio.h>
#define  SIZE(x) (sizeof(x)) / (sizeof((x)[0]))

int main() {
    int bubble[] = {95, 60, 6, 86, 50, 24};
    int inner, outer, temp, x;

    /*Display original array*/
    puts("Original Array:");
    for (x = 0; x < SIZE(bubble); x++) {
       printf("%02d\t", bubble[x]);
    }
    putchar('\n');
    /*Bubble Sort*/
    for(outer = 0; outer < SIZE(bubble) - 1; outer++){
        for(inner = outer + 1; inner < SIZE(bubble); inner++){
            if(bubble[outer] > bubble[inner]){

                temp = bubble[outer];
                bubble[outer] = bubble[inner];
                bubble[inner] = temp;
            }
        }
    }
    /*Display sorted array*/
    puts("Sorted Array:");
    for(x = 0; x < SIZE(bubble); x++){
        printf("%02d\t", bubble[x]);
    }
    putchar('\n');
    return 0;
}
