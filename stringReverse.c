//���ڿ� �Ųٷ� ��� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 100

int main() {
	char s[N] = { "null" };
	int i, j, cnt = 0;
	char ans;

	printf("================================================\n");
	printf("=        �����̵� �Ųٷ� ���ϴ� ���α׷�       =\n");
	printf("================================================\n");
	
	while (1) {
		s[0] = '\0';
		i = 0;

		printf("���ڿ��� �Է��Ͻÿ�...\n");
		gets(s);

		while (1) {
			if (s[i] == 0) {
				break;
			}
			cnt++;
			i++;
		}

		printf("~ ���α׷� ��� ~\n");

		for (j = cnt; j >= 0; j--) {
			printf("%c", s[j]);
		}

		printf("\n\n�ٸ� ���� �־�� (y/n)\n");
		scanf(" %c", &ans);
		if (ans == 'n') {
			printf("\n\n���α׷��� �����մϴ�.\n");
			printf("================================================\n");
			break;
		}
		else {
			printf("================================================\n\n");
		}
	}

	return 0;
}
