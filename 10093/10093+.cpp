#include <stdio.h>

int _main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    // a가 b보다 크면 swap
    if (a > b) {
        long long temp = a;
        a = b;
        b = temp;
    }

    // 두 수 사이에 있는 정수 개수
    long long count = (b - a > 1) ? (b - a - 1) : 0;
    printf("%lld\n", count);

    // 사이의 정수 출력
    for (long long i = a + 1; i < b; i++) {
        printf("%lld ", i);
    }

    printf("\n");
    return 0;
}