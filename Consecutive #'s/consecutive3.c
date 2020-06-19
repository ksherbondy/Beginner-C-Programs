#include <stdio.h>
#include <time.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
	
	clock_t t;
	t = clock();
    for (i = 1; i <= n; ++i) {
        sum += i;
    }
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	
	
    printf("Sum = %d", sum);
	printf("Execution time: %f\n", time_taken);
    return 0;
}
