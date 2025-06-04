#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//코드 작성 시작
	char string[2][5] = { "even", "odd" };
	int n0, n1, n2, n3, n4;
	int testNum = 1;
	while (1) {
		scanf("%d", &n0);

		if (n0 == 0) break;

		n1 = 3 * n0;
		if (n1 % 2) n2 = (n1+1) / 2 ; // 홀수 
		else n2 = n1 / 2; // 짝수=
		n3 = 3 * n2;
		n4 = n3 / 9;

		printf("%d. %s %d\n", testNum++, string[n1 % 2], n4);
		
	}
	return 0;
}