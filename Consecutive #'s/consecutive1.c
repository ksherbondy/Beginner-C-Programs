/*This program is used to add consecutive numbers from (n) to 1. (n) being an unknown number.*/

#include <stdio.h>
#include <time.h>

int main(){

int number, total;

printf("Enter a value:\n");
scanf("%d", &number);



clock_t t;
t = clock();

if(number % 2 == 0){
total = (number + 1) * ((number + 1 ) / 2);
} else {
total = number * ((number + 1) / 2);
}
t = clock() - t;
double time_taken = ((double)t)/ CLOCKS_PER_SEC;

printf("The total is: %d\n", total);
printf("Execution time: %f\n", time_taken);
return 0;
}
