#include <stdio.h>
//간단 계산기 : 
//ip 2+3 
//op 2+3=5
// 문제발생시 연산결과가 -999 으로 처리 
int divide(int x, int y) {
	if (y == 0) {
		printf("0으로 나눌 수 없습니다.\n");
		return -999; 
	} else {
		return x / y;
	}
}

int calc(int x, int y, char op) {
	
	int ret = 0; //결과가 저장될 변수 
	switch(op) {
		case '+':
			ret = x + y;
			break;
		case '-':
			ret = x + y;
			break;
		case '*':
			ret = x * y;
			break;
		case '/':
			ret = divide(x,y);
			break;
		default:
			printf("잘못된 연산자 입니다.\n");
			ret = -999;
	}
	
	return ret;	
}

int main(){
	int a, b;
	char op;
	
	printf("연산식을 입력: ex) 2 + 3");
	scanf("%d %c %d", &a, &op, &b);
	
	if (calc(a, b, op) != -999) {
		printf("%d %c %d = %d", a, op, b, calc(a, b, op));
	}
}























