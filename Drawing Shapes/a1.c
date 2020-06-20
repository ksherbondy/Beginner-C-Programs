#include <stdio.h>

int main(){
	
	int i, j, k = 0, l;
	
	for(i = 0; i <= 5; i++){
		for(j = 5; j >= i; j--){
			printf("O ");
		}
		if(k == 1){
			k += 1;
			printf("    ");
		}
		if(k == 3){
			k += 1;
			printf("        ");
		}
		if(k == 5){
			k += 1;
			printf("            ");
		}
		if(k == 7){
			k += 1;
			printf("                ");
		}
		if(k == 9){
			k += 1;
			printf("                    ");
		}
		k += 1;
		for(l = 4; l >= j; l--){
			if(l ==4){
				printf("\b\b\b O");
			} else {
				printf(" O");
			}
		}
		printf("\n");
	}
	k = 9;
	for(i = 5; i >= 0; i--){
		for(j = 5; j >= i; j--){
			printf("O ");
		}
		if(k == 9){
			printf("                 ");
		}
		if(k == 7){
			k -= 1;
			printf("             ");
		}
		if(k == 5){
			k -= 1;
			printf("         ");
		}
		if(k == 3){
			k -= 1;
			printf("     ");
		}
		if(k == 1){
			k -= 1;
			printf(" ");
		}
		k -= 1;
		for(l = 5; l > j; l--){
			if(l == 0){
				printf("\rO O O O O O O O O O O   ");
			} else {
				printf(" O");
			}
		}
		if(k == 8){
			k -= 1;
			printf("\r");
		} else {
			printf("\n");
		}
	}
}