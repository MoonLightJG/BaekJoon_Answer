#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int testNum;
    scanf("%d", &testNum);

    for (int i = 0; i < testNum; i++) {
        int data;
        scanf("%d", &data);

        printf("Pairs for %d:", data);

        int first = 1;  // 첫 번째 출력 여부 체크
        for (int j = 1; j < data / 2 + 1; j++) {
            int a = j;
            int b = data - j;

            if (a < b) {
                if (!first) {
                    printf(",");  // 첫 쌍 이후에만 쉼표 출력
                }
                printf(" %d %d", a, b);
                first = 0;
            }
        }
        printf("\n");  // 각 테스트 케이스마다 줄 바꿈
    }

    return 0;
}