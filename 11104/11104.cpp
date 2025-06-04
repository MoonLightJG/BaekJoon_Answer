#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//코드 작성 시작

	int lenth;
	int data;

	scanf("%d", &lenth);	
	for (int i = 0; i < lenth; i++) {
		scanf("%d", &data);
		printf("%d", data);
	}

	return 0;
}