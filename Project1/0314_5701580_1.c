#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	clock_t start, stop;
	double duration;
	start = clock(); //���� ����
	
	int sum = 0;
	int i, k;

	for (i = 2; i <= 100; i++) { //2���� 100���� �Ҽ� ã�� ����
		for (k = 2; k < i; k++) { 
			if (i % k == 0) //i���� ���� ���� ������ �������� 0�� ������ �Ҽ��� �ƴϹǷ� �ٽ� �ݺ�
				break;
		}
		if (k == i) //k�� i�� ������ sum�� ���ؼ� �ٽ� ����
			sum = sum + k;
	}
	printf("0���� 100���� �Ҽ����� ���� %d�Դϴ�.\n", sum);
	
	stop = clock(); //��������
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("����ð��� %f�Դϴ�.\n", duration);

	return 0;
}