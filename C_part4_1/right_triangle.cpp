/*
	���� n�� �Է¹޾� n���� ���� �������� ���� �����ﰢ���� ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�����ﰢ���� ���� ������ ��Ÿ����� ������ ���� a�� = b�� + c�� (��, a�� ����)
	�ۼ� �Ͻ�: 2024.04.20
*/
#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
void main() {
	int a, b, c, n;
	printf("���� n�� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	printf("----------------------- \n");
	printf("����	�غ�	���� \n");
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