#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//코드 작성 시작
	int eye, antenna;

	scanf("%d", &antenna);
	scanf("%d", &eye);

	if (antenna >= 3 && eye <= 4) {
		printf("TroyMartian\n");
	}
	if (antenna <= 6 && eye >= 2) {
		printf("VladSaturnian\n");
	}
	if (antenna <= 2 && eye <= 3) {
		printf("GraemeMercurian\n");
	}

	return 0;
}