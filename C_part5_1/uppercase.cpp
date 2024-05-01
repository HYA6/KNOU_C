/*
	대문자를 소문자로, 소문자를 대문자로 바꾸는 프로그램을 작성하시오.
	작성 일자 : 2024.04.24
*/
#include <stdio.h>
#pragma warning(disable:4996)
char upper(char ch);
char lower(char ch);
void main()
{
	char in_s[50], out_s[50]; // in_s: 입력받을 문자열, out_s: 출력할 문자열
	char ch; // 비교할 문자
	int i = 0; // 문자열 인덱스

	// 문자 입력받기
	printf("문자열을 입력하시오. (50자 이내) : ");
	scanf("%s", in_s);

	// 해당 인덱스의 문자를 변수 ch에 대입
	ch = in_s[i];

	while (ch != '\0') {
		// 대문자이면 소문자로 변환
		if (ch >= 'A' && ch <= 'Z')
			out_s[i] = lower(ch);
		// 소문자이면 대문자로 변환
		else if (ch >= 'a' && ch <= 'z')
			out_s[i] = upper(ch);
		// 문자가 아니면 그대로 출력
		else
			out_s[i] = ch;
		i++;
		// lower() 이나 upper()에 의해 값이 바뀐 변수 ch에 다음 인덱스의 문자 대입
		ch = in_s[i];
	}
	/*
		[문자열 종료 문자 '\0'가 필요한 이유]
		C언어는 문자열을 문자의 배열로 저장된다. 그러므로 문자열의 끝을 알려주는 '\0'이 필요하고
		이를 통해 컴퓨터는 문자열이 어디서 끝나는 지 알 수 있다.
	*/
	out_s[i] = '\0'; // 마지막에 문자열 종료 문자 대입
	printf("변환된 결과 ==> %s \n", out_s);
}

// 소문자를 대문자로 변환시키는 함수
char upper(char ch) {
	return ch - 32;
}

// 대문자를 소문자로 변환시키는 함수
char lower(char ch) {
	return ch + 32;
}