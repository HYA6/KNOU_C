#include "exam2-3.h" // 사용자 헤더 파일(exam2-3.h) 추가
// 사용자 헤더 파일 exam2-3.h에 표준입출력 헤더 파일, 매크로 함수 ADD, SUB 포함

/* main() 함수 */
void main() { 
	int add_result, sub_result; // 변수를 선언했으나 사용하지 않음
	printf("10과 5를 더하면 %d이다. \n", ADD(10, 5)); // 매크로 함수 ADD를 이용하여 두 수의 합을 출력
	printf("10에서 5를 빼면 %d이다. \n", SUB(10, 5)); // 매크로 함수 SUB를 이용하여 두 수의 차이를 출력
}