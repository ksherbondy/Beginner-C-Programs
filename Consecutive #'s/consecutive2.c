#include <stdio.h>
#include <time.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    i = 1;


	clock_t t;
	t = clock();
    while (i <= n) {
        sum += i;
        ++i;
    }
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	
	
    printf("Sum = %d", sum);
	printf("Execution time: %f\n", time_taken);

    return 0;
}
