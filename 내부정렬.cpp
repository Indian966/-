#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void PrintRun(int num) {
	int n = 0;//Run이 방을 몇개 가지고 있는지
	char Run[n];
	while ()//여기서 n방의 숫자가 0이면 출력중지
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
	int startnum;//데이터는 정수로, 이 숫자에서 시작

	printf("시작할 숫자:");//물어보고
	scanf("%d", startnum);//입력

	PrintRun(startnum);//출력

	system("pause");
	return 0;
}