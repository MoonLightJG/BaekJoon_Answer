#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//코드 작성 시작
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
		printf("Hello World, Judge %d!\n", i);

	return 0;
}