#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//코드 작성 시작
	int a, b;

	while (1) {

		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) break;
	
		if (a > b) {
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}

	}

	return 0;
}