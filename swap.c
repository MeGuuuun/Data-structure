//두 수를 입력받아 바꿔 출력하는 프로그램
#include<stdio.h>

void swap(int* a, int* b);

int main() {
	
	printf("\n\n=========================================================\n");
	printf("=          두 숫자를 스와핑(swaping)하는 프로그램       =\n");
	printf("=========================================================\n");

	while (1) {
		int a, b = 0;
		char ans;

		printf("\n숫자를 입력하시오 ...\n");
		scanf_s("%d %d", &a, &b);

		printf("\n스왑하기 전 : %d %d\n", a, b);

		swap(&a, &b);

		printf("\n스왑한 후 : %d %d\n", a, b);
		
		printf("=========================================================\n");

		printf("다른 숫자를 바꿔보기 (y/n)");
		scanf_s(" %c", &ans);
		if (ans == 'n') {
			printf("프로그램을 종료합니다.");
			break;
		}
	}

	return 0;
}

void swap(int* a, int* b) {
	int tmp = 0;
	tmp= *a;
	*a = *b;
	*b = tmp;
}

