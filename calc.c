#include <stdio.h>
//���� ���� : 
//ip 2+3 
//op 2+3=5
// �����߻��� �������� -999 ���� ó�� 
int divide(int x, int y) {
	if (y == 0) {
		printf("0���� ���� �� �����ϴ�.\n");
		return -999; 
	} else {
		return x / y;
	}
}

int calc(int x, int y, char op) {
	
	int ret = 0; //����� ����� ���� 
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
			printf("�߸��� ������ �Դϴ�.\n");
			ret = -999;
	}
	
	return ret;	
}

int main(){
	int a, b;
	char op;
	
	printf("������� �Է�: ex) 2 + 3");
	scanf("%d %c %d", &a, &op, &b);
	
	if (calc(a, b, op) != -999) {
		printf("%d %c %d = %d", a, op, b, calc(a, b, op));
	}
}























