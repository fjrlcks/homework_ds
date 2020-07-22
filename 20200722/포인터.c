#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {

	float* num;
	float avg;
	float hap = 0;
	int n = 0;
	int i;

	scanf("%d", &n);
	num = (float*)malloc(n * sizeof(float));
	
	for (i = 0; i < n; i++) {
		scanf("%f", &num[i]);
		hap += num[i];
	}

	avg = hap / (float)i;

	for(i = 0; i < n; i++){
	printf("%.2f\t", num[i]);
	}

	printf("\nhap : %.2f\n", hap);
	printf("avg : %.2f", avg);

}