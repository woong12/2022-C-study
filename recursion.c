#include <stdio.h>

int fact(int num) {
	
	printf("%d", num);
	if (num > 1) {
		printf("%d", num);
		return num * fact(num - 1);
	} else {
		printf("%d=", num);
		return 1;
	}
//	printf(". ", num);
}

int main() {
	
	//재귀함수 recursion
	
	//ip : 5
	//op : 5*4*3*2*1
	
	printf("팩토리얼 값을 구해봅시다.\n");
	printf("숫자:");
	int num;
	scanf("%d", &num);
	
	printf("%d!=%d", num, fact(num));
}
