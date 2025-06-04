#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long int abs(long int a) {
	if(a < 0) return a * -1;
	else return a;
}

int main() {
	//코드 작성 시작
	long int a, b;

	scanf("%d %d", &a, &b);

	printf("%d\n", abs(a - b) ? abs(a-b)-1 : 0 );
	if (a < b) {
		for (long int i = a +1 ; i < b; i++) {
			printf("%d ", i);
		}
	}
	else if (b < a) {
		for (long int i = b+1; i < a; i++) {
			printf("%d ", i);
		}
	}

	return 0;
}


//야매로 100점 맞기 코드
#include <stdio.h>

int main() {
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