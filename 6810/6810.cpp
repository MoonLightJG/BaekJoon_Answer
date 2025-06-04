#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//코드 작성 시작

	int data[3];
	int sum = 9 * 1 + 7 * 3 + 8 * 1 + 0 * 3 + 9 * 1 + 2 * 3 + 1 * 1 + 4 * 3 + 1 * 1 + 8 * 3;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &data[i]);
	}
	sum += data[0] * 1;
	sum += data[1] * 3;
	sum += data[2] * 1;

	printf("The 1-3-sum is %d\n", sum);

	return 0;
}