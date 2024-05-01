/*
	대각선으로 별을 출력하는 프로그램을 작성하시오. (별의 모양 : >, 중간 포인트 : 6개 시점에서 꺾기)
	작성 일자: 2024.04.20 
*/
#include <stdio.h>
void main() {

	for (int i = 0; i < 11; i++) { // 행의 수
		for (int j = 0; j < 6; j++) { // 열의 수
			// 대각선인 곳은 별 출력
			if (i == j)
				printf("%c", '*');
			else if (i > 5 && (i + j == 10))
				printf("%c", '*');
			// 대각선이 아닌 곳은 공백 출력
			else
				printf(" ");
			// 6번째 열에서 줄바꿈
			if (j == 5)
				printf("\n");
		}
	}

}