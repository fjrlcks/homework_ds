#include<stdio.h>

void main(void) {

	printf("���ĺ� ���ڸ� �Է��ϼ��� :\n");

	char n;

	scanf_s("%c", &n);

	switch (n) {

	case 'A':
		printf(".-");
		break;

	case 'B':
		printf("-...");
		break;
	
	case 'C':
		printf("-.-.");
		break;

	case 'D':
		printf("-..");
		break;

	case 'E':
		printf(".");
		break;

	case 'F':
		printf("..-.");
		break;

	case 'G':
		printf("--.");
		break;

	case 'H':
		printf("....");
		break;

	case 'I':
		printf("..");
		break;

	case 'J':
		printf(".---");
		break;

	case 'K':
		printf("-.-");
		break;

	case 'L':
		printf(".-..");
		break;
	
	case 'M':
		printf("--");
		break;

	case 'N':
		printf("-.");
		break;

	case 'O':
		printf("---");
		break;

	case 'P':
		printf(".--.");
		break;

	case 'Q':
		printf("--.-");
		break;

	case 'R':
		printf(".-.");
		break;

	case 'S':
		printf("...");
		break;

	case 'T':
		printf("-");
		break;

	case 'U':
		printf("..-");
		break;

	case 'V':
		printf("...-");
		break;

	case 'W':
		printf(".--");
		break;

	case 'X':
		printf("-..-");
		break;

	case 'Y':
		printf("-.--");
		break;

	case 'Z':
		printf("--..");
		break;

	default :
		printf("�߸��� �Է�");
	}
}