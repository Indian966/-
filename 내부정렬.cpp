#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void PrintRun(int num) {
	int n = 0;//Run�� ���� � ������ �ִ���
	char Run[n];
	while ()//���⼭ n���� ���ڰ� 0�̸� �������
}

void SortRun(){
	int temp = 0;
	for (i = 0; i < 4; i++) {
		if (Run[i] >= Run[i + 1]) {
			temp = Run[i];
			Run[i+1] = Run[i];
			Run[i] = temp;
		}
	}
}

int main(void) {
	int startnum;//�����ʹ� ������, �� ���ڿ��� ����

	printf("������ ����:");//�����
	scanf("%d", startnum);//�Է�

	PrintRun(startnum);//���

	system("pause");
	return 0;
}