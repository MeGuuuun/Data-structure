//�� ���� �Է¹޾� �ٲ� ����ϴ� ���α׷�
#include<stdio.h>

void swap(int* a, int* b);

int main() {
	
	printf("\n\n=========================================================\n");
	printf("=          �� ���ڸ� ������(swaping)�ϴ� ���α׷�       =\n");
	printf("=========================================================\n");

	while (1) {
		int a, b = 0;
		char ans;

		printf("\n���ڸ� �Է��Ͻÿ� ...\n");
		scanf_s("%d %d", &a, &b);

		printf("\n�����ϱ� �� : %d %d\n", a, b);

		swap(&a, &b);

		printf("\n������ �� : %d %d\n", a, b);
		
		printf("=========================================================\n");

		printf("�ٸ� ���ڸ� �ٲ㺸�� (y/n)");
		scanf_s(" %c", &ans);
		if (ans == 'n') {
			printf("���α׷��� �����մϴ�.");
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

