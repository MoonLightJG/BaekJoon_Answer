#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//코드 작성 시작
	int n1, n2, k1, k2;

	scanf("%d %d %d %d", &n1, &k1, &n2, &k2);
	printf("%d", n1 * k1 + n2 * k2);
	return 0;
}