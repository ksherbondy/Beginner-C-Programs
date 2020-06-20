#include <stdio.h>

int main(){
	
	int i, j, k = 0, l;
	
	for(i = 0; i <= 5; i++){
		for(j = 5; j >= i; j--){
			printf("O ");
		}
		if(k == 0){
			printf(" ");
		}
		if(k == 1){
			k += 1;
			printf("     ");
		}
		if(k == 3){
			k += 1;
			printf("         ");
		}
		if(k == 5){
			k += 1;
			printf("             ");
		}
		if(k == 7){
			k += 1;
			printf("                 ");
		}
		if(k == 9){
			k += 1;
			printf("                     ");
		}
		k += 1;
		for(l = 4; l >= j; l--){

			printf(" O");
		}
		printf("\n");
	}
	printf("\n");
	k = 9;
	for(i = 5; i >= 0; i--){
		for(j = 5; j >= i; j--){
			printf("O ");
		}
		if(k == 9){
			k -= 1;
			printf("                     ");
		}
		if(k == 7){
			k -= 1;
			printf("                 ");
		}
		if(k == 5){
			k -= 1;
			printf("             ");
		}
		if(k == 3){
			k -= 1;
			printf("         ");
		}
		if(k == 1){
			printf("     ");
		}
		if( k == 0){
			printf(" ");
		}
		k -= 1;
		for(l = 4; l >= j; l--){
			
			printf(" O");
		}
		printf("\n");
	}
}