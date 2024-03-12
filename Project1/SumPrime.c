#include <stdio.h>

int main() {
	int sum = 0;
	int i, k;

	for (i = 2; i <= 100; i++) {
		for (k = 2; k < i; k++) {
			if (i % k == 0)
				break;
		}
		if (k == i)
			sum = sum + k;
	}
	printf("0부터 100까지 소수들의 합은 %d입니다.\n", sum);

	return 0;
}