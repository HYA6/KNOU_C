/* #define을 이용하여 원의 면적 구하는 프로그램 */
#include<stdio.h> // 표준입출력 헤더 파일 추가
#define IN "원의 반지름은 100입니다. \n" // 매크로 상수 IN 정의 (원의 반지름)
#define PI 3.1415926535 // 매크로 상수 PI 정의 (원주율)
#define AREA(X) (PI*(X)*(X)) // 매크로 함수 AREA 정의 (원의 면적)
#define OUT printf("원의 면적을 구하고 프로그램을 종료합니다. \n") // 매크로 상수 OUT 정의 (프로그램 종료 문구)
/* main() 함수 */
void main() {
	// 매크로 상수 IN을 이용해 원의 반지름을 알려주는 문구 출력
	printf("%s \n", IN);
	// 매크로 함수 AREA를 이용해 원의 면적 계산 후 문구 출력
	printf("원의 면적은 %10.5f입니다. \n\n", AREA(100));
	// 매크로 상수 OUT을 이용해 프로그램 종료 문구 출력
	OUT;
}