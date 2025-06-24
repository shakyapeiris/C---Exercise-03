#include<stdio.h>

int main(){
	for (int i = 10; i< 100; i++){
		printf("%d", i);

		int initiated = 0;

		if (i % 2 == 0){
			printf("\t");
			if (!initiated){
				printf("-");
				initiated = 1;
			}
			printf("multiple of 2");
		}

		if (i % 3 == 0){
			printf("\t");
			if (!initiated){
                                printf("-");
                                initiated = 1;
                        }
			printf("multiple of 3");
		}

		if (i % 5 == 0){
			printf("\t");
			if (!initiated){
                                printf("-");
                                initiated = 1;
                        }

			printf("multiple of 5");
		}
		printf("\n");
	}
	return 0;
}
