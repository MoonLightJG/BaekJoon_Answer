#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int testNum;
    scanf("%d", &testNum);

    for (int i = 0; i < testNum; i++) {
        int data;
        scanf("%d", &data);

        printf("Pairs for %d:", data);

        int first = 1;  // ù ��° ��� ���� üũ
        for (int j = 1; j < data / 2 + 1; j++) {
            int a = j;
            int b = data - j;

            if (a < b) {
                if (!first) {
                    printf(",");  // ù �� ���Ŀ��� ��ǥ ���
                }
                printf(" %d %d", a, b);
                first = 0;
            }
        }
        printf("\n");  // �� �׽�Ʈ ���̽����� �� �ٲ�
    }

    return 0;
}