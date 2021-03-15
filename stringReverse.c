//문자열 거꾸로 출력 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 100

int main() {
	char s[N] = { "null" };
	int i, j, cnt = 0;
	char ans;

	printf("================================================\n");
	printf("=        무엇이든 거꾸로 말하는 프로그램       =\n");
	printf("================================================\n");
	
	while (1) {
		s[0] = '\0';
		i = 0;

		printf("문자열을 입력하시오...\n");
		gets(s);

		while (1) {
			if (s[i] == 0) {
				break;
			}
			cnt++;
			i++;
		}

		printf("~ 프로그램 결과 ~\n");

		for (j = cnt; j >= 0; j--) {
			printf("%c", s[j]);
		}

		printf("\n\n다른 문장 넣어보기 (y/n)\n");
		scanf(" %c", &ans);
		if (ans == 'n') {
			printf("\n\n프로그램을 종료합니다.\n");
			printf("================================================\n");
			break;
		}
		else {
			printf("================================================\n\n");
		}
	}

	return 0;
}
