//소수 판별 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int flag, i, n = 0;
	char ans;

	printf("===========================================\n");
	printf("=             소수 판별 프로그램          =\n");
	printf("===========================================\n\n\n");

	while (1) {
		flag = 0;
		printf("정수 n을 입력하시오.\n\n");
		scanf_s("%d", &n);

		for (i = 2; i < n; i++) {
			if (n % i == 0) {
				printf("%d는 %d로 나누어진다.\n", n, i);
				flag++;
			}
		}

		if (flag == 0) {
			printf("숫자 %d는 소수입니다.\n\n", n);
		}
		else {
			printf("숫자 %d는 소수가 아닙니다.\n\n", n);
		}

		printf("다른 숫자를 넣을 것입니까? (y/n)\n\n");
		scanf_s(" %c", &ans,1);
		if (ans == 'n') {
			printf("\n\n프로그램을 종료합니다.\n\n");
			printf("===========================================");
			break;
		}
		else {
			printf("===========================================\n\n");
		}
	}

	return 0;
}