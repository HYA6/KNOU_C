/*
	���� ���� �ڷ� ���� ����� ������ ���� �ڷ� ���� ����� ������
	�ۼ� ���� : 2024.04.24
*/
#include <stdio.h>
void by_value(int a, int b, int c); // ���� ���� �ڷ� ���� ���
void by_ref(int* a, int* b, int* c); // ������ ������ �̿�, ������ ���� �ڷ� ���� ���
void main() {
	int x = 2, y = 4, z = 6;
	// ���� ��
	printf("Before calling by_value() \t: ");
	printf("x = %d, y = %d, z = %d \n", x, y, z);

	// ���� ���� �ڷ� ����
	by_value(x, y, z);
	printf("After calling by_value() \t: ");
	printf("x = %d, y = %d, z = %d \n", x, y, z);

	// ������ ���� �ڷ� ����
	by_ref(&x, &y, &z);
	printf("After calling by_ref() \t\t: ");
	printf("x = %d, y = %d, z = %d \n", x, y, z);
}

// ���� ���� �ڷ� ���� �Լ�
void by_value(int a, int b, int c) {
	a = 0;
	b = 0;
	c = 0;
}

// ������ ���� �ڷ� ���� �Լ�
void by_ref(int *a, int *b, int *c) {
	*a = 0;
	*b = 0;
	*c = 0;
}