/*
	값에 의한 자료 전달 방법과 참조에 의한 자료 전달 방법의 차이점
	작성 일자 : 2024.04.24 
*/
#include <stdio.h>
void by_value(int a, int b, int c); // 값에 의한 자료 전달 방법
void by_ref(int* a, int* b, int* c); // 포인터 변수를 이용, 참조에 의한 자료 전달 방법
void main() {
	int x = 2, y = 4, z = 6;
	// 원래 값
	printf("Before calling by_value() \t: ");
	printf("x = %d, y = %d, z = %d \n", x, y, z);

	// 값에 의한 자료 전달
	by_value(x, y, z);
	printf("After calling by_value() \t: ");
	printf("x = %d, y = %d, z = %d \n", x, y, z);

	// 참조에 의한 자료 전달
	by_ref(&x, &y, &z);
	printf("After calling by_ref() \t\t: ");
	printf("x = %d, y = %d, z = %d \n", x, y, z);
}

// 값에 의한 자료 전달 함수
void by_value(int a, int b, int c) {
	a = 0;
	b = 0;
	c = 0;
}

// 참조에 의한 자료 전달 함수
void by_ref(int* a, int* b, int* c) {
	*a = 0;
	*b = 0;
	*c = 0;
}