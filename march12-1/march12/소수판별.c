//�Ҽ� �Ǻ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int flag, i, n = 0;
	char ans;

	printf("===========================================\n");
	printf("=             �Ҽ� �Ǻ� ���α׷�          =\n");
	printf("===========================================\n\n\n");

	while (1) {
		flag = 0;
		printf("���� n�� �Է��Ͻÿ�.\n\n");
		scanf_s("%d", &n);

		for (i = 2; i < n; i++) {
			if (n % i == 0) {
				printf("%d�� %d�� ����������.\n", n, i);
				flag++;
			}
		}

		if (flag == 0) {
			printf("���� %d�� �Ҽ��Դϴ�.\n\n", n);
		}
		else {
			printf("���� %d�� �Ҽ��� �ƴմϴ�.\n\n", n);
		}

		printf("�ٸ� ���ڸ� ���� ���Դϱ�? (y/n)\n\n");
		scanf_s(" %c", &ans,1);
		if (ans == 'n') {
			printf("\n\n���α׷��� �����մϴ�.\n\n");
			printf("===========================================");
			break;
		}
		else {
			printf("===========================================\n\n");
		}
	}

	return 0;
}