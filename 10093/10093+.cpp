#include <stdio.h>

int _main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    // a�� b���� ũ�� swap
    if (a > b) {
        long long temp = a;
        a = b;
        b = temp;
    }

    // �� �� ���̿� �ִ� ���� ����
    long long count = (b - a > 1) ? (b - a - 1) : 0;
    printf("%lld\n", count);

    // ������ ���� ���
    for (long long i = a + 1; i < b; i++) {
        printf("%lld ", i);
    }

    printf("\n");
    return 0;
}