/*
	n개의 실수를 입력받아 평균과 표준편차를 구하는 프로그램을 작성하시오.
	표준편차 : d = xi-avg (xi는 각 원소(실수), avg는 평균)
	작성 일자 : 2024.05.09
*/
#include <stdio.h>
#pragma warning(disable:4996)
void main() {
	int n, count; // n : 실수 개수, count : 반복문 순서
	float avg, d, sum = 0; // avg : 평균, d : 표준편차, sum : 합계
	float list[100]; // 실수 리스트

	// 데이터 개수 입력받기
	printf("평균을 내고자 하는 데이터의 개수는? : ");
	scanf("%d", &n);

	// n개만큼 실수 입력받기
	for (count = 0; count < n; ++count) {
		printf("%d번째 실수를 입력하세요 : ", count + 1);
		scanf("%f", &list[count]);
		sum += list[count];
	}

	// 평균
	avg = sum / n;
	printf("The average is %5.2f \n", avg);

	// 표준편차
	for (count = 0; count < n; ++count) {
		d = list[count] - avg;
		printf("%d번째 실수 %5.2f의 표준편차: %5.2f \n", count + 1, list[count], d);
	}
}