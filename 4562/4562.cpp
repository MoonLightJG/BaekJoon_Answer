#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int T, X, Y;

    scanf("%d", &T); // �׽�Ʈ ���̽� ��

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &X, &Y);
        if (X >= Y)
            printf("MMM BRAINS\n");
        else
            printf("NO BRAINS\n");
    }

    return 0;
}