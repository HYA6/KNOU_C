/* 입력받은 두 수의 곱을 출력하는 프로그램 */

#include<stdio.h> // printf()와 scanf를 사용하기 위한 표준입출력 헤더 파일 포함
#pragma warning(disable:4996) // 권장하지 않는 함수(scanf) 사용에 대한 경고 메시지 무시

int a, b, c; // 정수를 저장하는 전역변수 선언
int product(int x, int y); // 사용자 함수(product 함수) 원형

/* main() 함수 */
void main() {
	printf("Enter a number between 1 and 100 : "); // 첫 번째 수를 입력받는다. 
	scanf("%d", &a); // scanf 함수를 통해 첫 번째로 입력받은 정수를 변수 a에 저장

	printf("Enter another number between 1 and 100 : "); // 두 번째 수를 입력받는다.
	scanf("%d", &b); // scanf 함수를 통해 두 번째로 입력받은 정수를 변수 b에 저장

	/* 함수를 호출하여 두 수를 곱하고 결과 출력 */
	c = product(a, b); // 변수 a, b를 product 함수에 전달 후 그 결과를 c에 저장
	printf("%d * %d = %d \n", a, b, c); // 결과 출력
}

/* 두 수의 곱을 계산하여 돌려주는 사용자 함수 */
int product(int x, int y) {
	return (x * y); // 받은 변수 2개(x, y)를 곱한 후 그 결과를 반환한다.
}