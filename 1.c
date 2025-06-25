#include<stdio.h>

int main(){

	// a, b: check whether a give is an integer
	int i = 7;

	if (i % 2 == 0){
		printf("Number is even\n");
	} else {
		printf("Number is odd\n");
	}

	// c, d, e: handle character value

	char a = ';';
	char other_characters_output[] = "Other Characters";
	char numbers_output[] = "numbers";

	if (a < 48) {
		printf("%s", other_characters_output);
	} else if (a < 58) {
		printf("%s", numbers_output);
	} else if (a < 65) {
		printf("%s", other_characters_output);
	} else if (a < 91) {
		printf("%c", a + 32);
	} else if (a < 97) {
		printf("%s", other_characters_output);
	} else if (a < 123) {
		printf("%c", a - 32);
	} else {
		printf("%s", other_characters_output);
	}

	printf("\n");

	return 0;
}
