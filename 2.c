#include <stdio.h>

int main(){

	// part a
	int a = 10, b = 5;
	char operation = '+';

	switch (operation){
	case '+':
		printf("%d", a + b);
		break;
	case '-':
		printf("%d", a - b);
		break;
	case '/':
		if (b == 0) {
			printf("b cannot be zero for division");
		} else {
			printf("%d", a / b);
		}
		break;
	case '*':
		printf("%d", a * b);
		break;
	default:
		printf("Enter a valid operation");
	}
	printf("\n");

	// part b
	int c = 0;

	int hp = c / 100, tp = (c % 100) / 10, op = c % 10;
	if (hp == 0 && tp == 0 && op == 0){
		printf("zero");
	}
	switch (hp){
		case 1:
			printf("One Hundred and ");
			break;
		case 2:
			printf("Two Hundred and ");
			break;
		case 3:
			printf("Three Hundred and ");
			break;
		case 4:
			printf("Four Hundred and ");
			break;
		case 5:
			printf("Five Hundred and ");
			break;
		case 6:
			printf("Six Hundred and ");
			break;
		case 7:
			printf("Seven Hundred and ");
			break;
		case 8:
			printf("Eight Hundred and ");
			break;
		case 9:
			printf("Nine Hundred and ");
			break;
	}

	switch (tp) {
		case 1:
                        switch (op){
			case 1:
                        	printf("Eleven");
                        	break;
                	case 2:
                        	printf("Twelve");
                        	break;
                	case 3:
                       		printf("Thirteen");
                        	break;
                	case 4:
                        	printf("Fourteen");
                        	break;
                	case 5:
                        	printf("Fifteen");
                        	break;
               		case 6:
                       		printf("Sixteen");
                       		break;
               		case 7:
                	        printf("Seventeen");
                	        break;
        	        case 8:
	                        printf("Eighteen");
                        	break;
                	case 9:
	                        printf("Nineteen");
        	                break;

			}
			break;
                case 2:
                        printf("Twenty ");
                        break;
                case 3:
                        printf("Thirty ");
                        break;
                case 4:
                        printf("Forty ");
                        break;
                case 5:
                        printf("Fifty ");
                        break;
                case 6:
                        printf("Sixty ");
                        break;
                case 7:
                        printf("Seventy ");
                        break;
                case 8:
                        printf("Eighty ");
                        break;
                case 9:
                        printf("Ninety ");
                        break;
	}

	switch(op){
                case 2:
                        printf("Two");
                        break;
                case 3:
                        printf("Three");
                        break;
                case 4:
                        printf("Four");
                        break;
                case 5:
                        printf("Five");
                        break;
                case 6:
                        printf("Six");
                        break;
                case 7:
                        printf("Seven");
                        break;
                case 8:
                        printf("Eight");
                        break;
                case 9:
                        printf("Nine");
                        break;

	}

	printf("\n");
	return 0;
}
