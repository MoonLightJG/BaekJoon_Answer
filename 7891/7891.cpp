#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ڵ� �ۼ� ����
	int lenth;
	int A, B;
	scanf("%d", &lenth);
	for (int i = 0; i < lenth; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}