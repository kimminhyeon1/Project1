#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	clock_t start, stop;
	double duration;
	start = clock(); //측정 시작
	
	int sum = 0;
	int i, k;

	for (i = 2; i <= 100; i++) { //2부터 100까지 소수 찾기 시작
		for (k = 2; k < i; k++) { 
			if (i % k == 0) //i보다 작은 수로 나눠서 나머지가 0이 나오면 소수가 아니므로 다시 반복
				break;
		}
		if (k == i) //k랑 i가 같으면 sum에 합해서 다시 대입
			sum = sum + k;
	}
	printf("0부터 100까지 소수들의 합은 %d입니다.\n", sum);
	
	stop = clock(); //측정종료
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("수행시간은 %f입니다.\n", duration);

	return 0;
}