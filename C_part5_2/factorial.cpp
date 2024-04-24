/*
	����Լ�(�ڱ� �ڽ��� ȣ���ϴ� �Լ�)�� �̿��Ͽ� factorial�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ� ���� : 2024.04.24
*/
#include <stdio.h>
#pragma warning(disable:4996)
unsigned int f, x; // f : ���丮���� ���� ��, x : �Էµ� ��
unsigned int factorial(unsigned int a);
void main() {
	puts("Enter an integer value between 1 and 8 : ");
	scanf("%d", &x);
	// 1 ~ 8 ������ ���ڰ� �ƴϸ� ���� �޽����� ����.
	if (x > 8 || x < 1) {
		printf("Only values from 1 to 8 are accoptalbe!");
	}
	// ���ڰ� ���������� �Էµ����� factorial() �Լ��� �����Ѵ�.
	else {
		f = factorial(x);
		printf("%u factorial equals %u \n", x, f);
	}
}

// ���丮�� ����
unsigned int factorial(unsigned int a) {
	// �Էµ� ���ڰ� 1�� ��� 1�� ��ȯ�Ѵ�.
	if (a == 1)
		return 1;
	// �Էµ� ���ڰ� 1�� �ƴ� ��� ���丮�� ����� �Ѵ�.
	else {
		a *= factorial(a - 1); // ����Լ� �̿�
		return a;
	}
}