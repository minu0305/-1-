#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;		 //declare variables. 변수 선언
	int result;
	char k;

	//	a = 100;
	//	b = 50;
	printf("첫번째 계산할 값:");
	scanf("%d", &a);

	printf("연산 기호를 입력하시오(+ - * / %) :");
	scanf(" %c", &k);

	printf("두번째 계산할 값:");
	scanf("%d", &b);


	if (k == '+') {
		result = a + b;
		printf("%d + %d = %d \n", a, b, result);
	}

	if (k == '-') {
		result = a - b;
		printf("%d - %d = %d \n", a, b, result);
	}

	if (k == '*') {
		result = a * b;
		printf("%d * %d = %d \n", a, b, result);
	}

	if (k == '/') {
		if (b != 0) {
			result = a / b;
			printf("%d / %d = %d \n", a, b, result);
		}
		else
			printf("0으로 나누면 안됩니다. \n");
	}
	if (k == '%') {
		if (b != 0) {
			result = a % b;
			printf("%d %% %d = %d \n", a, b, result);
		}
		else
			printf("0으로 나누면 나머지값이 안됩니다 \n");
	}
}