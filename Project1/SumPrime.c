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
	printf("0���� 100���� �Ҽ����� ���� %d�Դϴ�.\n", sum);

	return 0;
}