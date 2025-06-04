#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//코드 작성 시작
	int middle, Last;
	scanf("%d", &Last);
	scanf("%d", &middle);

	printf("%d", middle + (middle - Last));

	return 0;
}