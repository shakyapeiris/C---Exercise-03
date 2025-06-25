#include<stdio.h>

int main(){
	int a = 9;
	int b = a / 2;

	for (int i=0; i < b; i++){
		for (int j=0; j<i+1; j++){
			printf("*");
		}
		printf("\n");
	}

	for (int i=0; i < (a % 2 == 0 ? 2 : 1); i++){
		for (int j=0; j < b + (a % 2); j++){
			printf("*");
		}
		printf("\n");
	}

	for (int i=b; i > 0; i--){
		for (int j=0; j < i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
