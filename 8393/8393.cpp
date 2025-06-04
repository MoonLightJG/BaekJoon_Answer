#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//코드 작성 시작
	int num;
	int sum = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		sum += i;
	}
	printf("%d", sum);

	return 0;
}