#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long int abs(long int a) {
	if(a < 0) return a * -1;
	else return a;
}

int main() {
	//�ڵ� �ۼ� ����
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


//�߸ŷ� 100�� �±� �ڵ�
#include <stdio.h>

int main() {
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