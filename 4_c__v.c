#include<stdio.h>

int main(){
	int a = 9;
	int b = a / 2;

	for (int i=0; i < b; i++){
		int k = (a - ((i * 2) + 1))/2;
		for (int j=0; j<k; j++){
			printf(" ");
		}
		for (int j=0; j<i * 2 +1; j++){
			printf("*");
		}
		for (int j=0; j<k; j++){
			printf(" ");
		}
		printf("\n");
	}

	for (int i=0; i<a; i++){
		printf("*");
	}
	printf("\n");

	for (int i=b; i > 0; i--){
		int k = (a - (i * 2 - 1))/2;
		for (int j=0; j<k; j++){
                        printf(" ");
                }
		for (int j=0; j < i * 2 - 1; j++){
			printf("*");
		}
		for (int j=0; j<k; j++){
                        printf(" ");
                }
		printf("\n");
	}
	return 0;
}
