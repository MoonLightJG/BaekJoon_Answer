#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ڵ� �ۼ� ����
	
	int lenth;
	scanf("%d", &lenth);
	for (int i = 0; i < lenth; i++) {
		int a;
		int sum = 0;
		scanf("%d", &a);
		
		for (int j = 1; j <= a; j+=2) {
			sum += j;
		}
		printf("%d\n", sum);
	}


	return 0;
}