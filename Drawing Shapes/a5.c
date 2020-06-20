#include <stdio.h>
int main()
{
  int row, c, n = 6;



  for (row = 1; row <= n; row++)  // Loop to print rows
  {
    for (c = 1; c <= n-row; c++)  // Loop to print spaces in a row
      printf("     ");

    for (c = 1; c <= row; c++) // Loop to print stars in a row
      printf("*       ");

    printf("\n");
  }
  
  printf("\n");
  
  for (row = 1; row <= n; row++)  // Loop to print rows
  {
    for (c = 6; c >= n-row; c--){  // Loop to print spaces in a row
		if(c == 5){
			printf("\r");
		} else {
     		printf("     ");
		}
	}

    for (c = 6; c >= row; c--) // Loop to print stars in a row
      printf("*       ");

    printf("\n");
  }

  return 0;
}