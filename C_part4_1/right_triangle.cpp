/*
	정수 n을 입력받아 n보다 작은 정수변을 갖는 직각삼각형을 모두 구하는 프로그램을 작성하시오.
	직각삼각형의 성립 조건은 피타고라스의 정리에 의해 a² = b² + c² (단, a는 빗변)
	작성 일시: 2024.04.20
*/
#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
void main() {
	int a, b, c, n;
	printf("정수 n을 입력하시오 : ");
	scanf("%d", &n);
	printf("----------------------- \n");
	printf("빗변	밑변	높이 \n");
	printf("----------------------- \n");
	for (a = n; a > 0; a--) {
		for (b = n; b > 0; b--) {
			for (c = n; c > 0; c--) {
				if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
					printf("%d	%d	%d \n", a, b, c);
				}
			}
		}
	}
}