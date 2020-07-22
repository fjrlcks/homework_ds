#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


typedef struct{
	char name[20];
	int age;
}person;

void main() {

	person p[5];

	int min;

	for (int i = 0; i < 5; i++) {
		printf("%d번째 사람 입력\n", i + 1);
		scanf("%s %d", p[i].name, &p[i].age);
	}

	min = p[0].age;
	for (int j = 0; j < 5; j++) {
	if (min > p[j].age) min = p[j].age;
	}

	for (int k = 0; k < 5; k++) {
		if (p[k].age == min) {
			printf("%s %d", p[k].name, p[k].age);
		}
	}
	getchar();
}
	