#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//코드 작성 시작
	int score = 0;
	for (int i = 0; i < 5; i++) {
		int temp;
		scanf("%d", &temp);
		score += temp;
	}

	printf("%d", score);

	return 0;
}