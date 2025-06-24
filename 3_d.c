#include<stdio.h>

int main(){
	float a = 10.0;

	while(a >= -5.0){
		printf("%.1f\n", a);
		a -= 0.1;
	}
	return 0;
}
