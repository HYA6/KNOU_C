/*
	2차원 배열을 이용하여 모래시계 모양으로 숫자 출력하는 프로그램
	작성 일자 : 2024.05.30
*/

/*
	실행결과
	1 2 3 4 5
	0 6 7 8 0
	0 0 9 0 0
	0 101112 0
	1314151617
*/

#include <stdio.h>
#define SIZE 5

int main() {
	int row, col; // 행, 열
	static int hg[SIZE][SIZE] = {0}; // 2차원 배열
	int i = SIZE / 2;
	int num = 1; // 숫자

	// 행 출력
	for (row = 0; row < SIZE; row++) {
		// 열 출력
		for (col = 0; col < SIZE; col++) {
			if (row > col && row < SIZE - i)
				printf("%2d", hg[row][col]);
			else if (col + row >= SIZE && row < SIZE - i)
				printf("%2d", hg[row][col]);
			else if (row == i && row != col)
				printf("%2d", hg[row][col]);
			else if (col + row < SIZE - 1 && row > i)
				printf("%2d", hg[row][col]);
			else if (row < col && row > 1)
				printf("%2d", hg[row][col]);
			else {
				hg[row][col] = num;
				printf("%2d", hg[row][col]);
				num++;
			}
		}
		// 줄 바꿔주기
		printf("\n");
	}
}