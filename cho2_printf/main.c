#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;		 //declare variables. ���� ����
	int result;
	char k;

	//	a = 100;
	//	b = 50;
	printf("ù��° ����� ��:");
	scanf("%d", &a);

	printf("���� ��ȣ�� �Է��Ͻÿ�(+ - * / %) :");
	scanf(" %c", &k);

	printf("�ι�° ����� ��:");
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
			printf("0���� ������ �ȵ˴ϴ�. \n");
	}
	if (k == '%') {
		if (b != 0) {
			result = a % b;
			printf("%d %% %d = %d \n", a, b, result);
		}
		else
			printf("0���� ������ ���������� �ȵ˴ϴ� \n");
	}
}