/*
	재귀함수(자기 자신을 호출하는 함수)를 이용하여 factorial을 계산하는 프로그램을 작성하시오.
	작성 일자 : 2024.04.24
*/
#include <stdio.h>
#pragma warning(disable:4996)
unsigned int f, x; // f : 팩토리얼이 계산된 값, x : 입력된 값
unsigned int factorial(unsigned int a);
void main() {
	puts("Enter an integer value between 1 and 8 : ");
	scanf("%d", &x);
	// 1 ~ 8 사이의 숫자가 아니면 오류 메시지를 띄운다.
	if (x > 8 || x < 1) {
		printf("Only values from 1 to 8 are accoptalbe!");
	}
	// 숫자가 정상적으로 입력됐으면 factorial() 함수를 실행한다.
	else {
		f = factorial(x);
		printf("%u factorial equals %u \n", x, f);
	}
}

// 팩토리얼 계산식
unsigned int factorial(unsigned int a) {
	// 입력된 숫자가 1일 경우 1을 반환한다.
	if (a == 1)
		return 1;
	// 입력된 숫자가 1이 아닐 경우 팩토리얼 계산을 한다.
	else {
		a *= factorial(a - 1); // 재귀함수 이용
		return a;
	}
}