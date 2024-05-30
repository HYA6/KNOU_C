/*
	포인터를 이용한 오름차순/내림차순 데이터 정렬 프로그램
	작성 일자 : 2024.05.30
*/

/*
	[실행결과]

	오름차순 정렬은 1, 내림차순 정렬은 2를 입력하세요 : 1

	 원래 데이터
	   2   6   4   8  10  12  89  68  45  37
	 오름차순으로 정렬된 데이터
	   2   4   6   8  10  12  37  45  68  89


	오름차순 정렬은 1, 내림차순 정렬은 2를 입력하세요 : 2

	 원래 데이터
	   2   6   4   8  10  12  89  68  45  37
	 내림차순으로 정렬된 데이터
	  89  68  45  37  12  10   8   6   4   2
*/

#include <stdio.h>
#pragma warning(disable:4996)
#define SIZE 10
// 함수 원형 선언
void bubble(int*, const int, int (*)(int, int));
int ascending(const int, const int);
int descending(const int, const int);

void main() {
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int counter, order;
	
	// 정렬 방식 선택
	printf("오름차순 정렬은 1, 내림차순 정렬은 2를 입력하세요 : ");
	scanf("%d", &order);

	// 원래 데이터 출력
	printf("\n 원래 데이터 \n");
	for (counter = 0; counter <= SIZE - 1; counter++)
		printf("%4d", a[counter]);

	// 정렬 방식 표시
	if (order == 1) {
		bubble(a, SIZE, ascending);
		printf("\n 오름차순으로 정렬된 데이터 \n");
	} 
	else {
		bubble(a, SIZE, descending);
		printf("\n 내림차순으로 정렬된 데이터 \n");
	}

	// 선택된 정렬 방식에 따라 정렬된 데이터 출력
	for (counter = 0; counter <= SIZE - 1; counter++)
		printf("%4d", a[counter]);
	printf("\n");
}

void bubble(int* work, const int size, int(*compare)(int, int)) {
	int pass, count;
	void swap(int*, int*);
	for (pass = 1; pass <= size - 1; pass++)
		for (count = 0; count <= size - 2; count++)
			if ((*compare)(work[count], work[count + 1]))
				swap(&work[count], &work[count + 1]);
}

// 데이터 정렬 함수
void swap(int* element1ptr, int* element2ptr) {
	int temp;
	temp = *element1ptr;
	*element1ptr = *element2ptr;
	*element2ptr = temp;
}

int ascending(const int a, const int b) {
	return b < a;
}

int descending(const int a, const int b) {
	return b > a;
}