#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ڵ� �ۼ� ����
	int num;
	int sum = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		sum += i;
	}
	printf("%d", sum);

	return 0;
}