#include <stdio.h>
#include <string.h>

void exam1(){
	int a[4][2];
	int i, j;
	int tot;
	double avg;
	
	for (i = 0; i < 4; i++) {
		printf("%d�� �л��� ����, C��� ���� �Է� : ", i + 1);
		for (j = 0; j< 2; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	for (i = 0; i< 4; i++) {
		tot = 0;
		for (j = 0; j< 2; j++) {
			tot += a[i][j];
		}
		avg = tot / 2.0;
		printf("%d�� �л��� ", i + 1);
		printf("����: %3d, ���: %.2f\n", tot, avg);
		
	}
}

void exam2(){
	int arr[5];
	int max, min, i;
	for (i = 0; i <5; i++) {
		printf("�Է�: ");
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (i = 0; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	
	printf("�ִ밪: %d\n", max);
	printf("�ּҰ�: %d\n", min);
	
}

void exam3(){
	int a[5], sum = 0, i;
	float avg;
	for (i = 0; i< 5; i++)  {
		printf("%d���� ����: ", i + 1);
		scanf("%d", &a[i]);
		sum += a[i];
	}
	
	avg = sum / 5.0;
	printf("\n������ %d�̸�, ����� %.2f�� �Դϴ�", sum, avg);
}

void exam4(){
	int i, su, cnt = 0;
	int b[10] = {25, 7, 25, 7, 3, 25, 3, 7, 25, 1};
	
	printf("������: ");
	scanf("%d", &su);
	for (i = 0; i < 10; i++) {
		if(b[i] == su) {
			cnt++;
		}
	}
	printf("%d��(��) %d�� �ֽ��ϴ�.\n", su, cnt);
	
}

void exam5(){
	int arr[4][5];
	int i, j, cnt = 1;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			arr[i][j] = cnt++;
		}
	}
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	
}

void exam6(){
	char mark[5][5] = {'\0'};
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == j) {
				mark[i][j] = 'X';
			}
		}
	}
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%c", mark[i][j]);
		}
		printf("\n");
	}
	
}

void exam7(){
	char mark[5][5] = {'\0'};
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == j || i + j == 4) {
				mark[i][j] = 'X';
			}
		}
	}
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%c", mark[i][j]);
		}
		printf("\n");
	}
}

void exam8(){
	int length = 0;
	char str[50];
	gets(str);
	
	int i = 0;
	for (i = 0;str[i];i++) {
		length += 1;
	}
	printf("%d", length);

}

void exam9(){
	int a[5] = {1,2,3,4,5};
	int temp;
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
	temp = a[0];
	for (i = 0; i < 4; i++) {
		a [i] = a[i+1];
	}
	a[i+1] = temp;
	for (i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
}

void exam10(){
	int data[6], i;
	
	for (i = 0; i < 6; i++) {
		printf("������ �Է� : ");
		scanf("%d", &data[i]);
	}
	
	for (i = 5; i >= 0; i--) {
		printf("%d ", data[i]);
	}
}

void exam11(){
	char voca[50];
	int len = 0;
	printf("���ܾ� �Է�: ");
	scanf( "%s", voca );
	while (voca[len] != '\0') {
		len++;
	}
	printf("�Է��� ���ܾ��� ���̴� %d\n", len);
}

void exam12(){
	char str[100];
	fflush(stdin);
	int i;
	gets(str);
	printf("str�� ���ڱ��� : %d\n", strlen(str));
	for (i = strlen(str) - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
}

void exam13(){

}

void exam14(){

}

void exam15(){

}

void exam16(){

}

void exam17(){

}




main(){
	int num;
	while(1){
    	printf("\n������ȣ : ");
		scanf("%d", &num);
		printf("%d�� ����===========================\n", num);
		switch(num){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
			case 6: exam6(); break;
			case 7: exam7(); break;
			case 8: exam8(); break;
			case 9: exam9(); break;
			case 10: exam10(); break;
			case 11: exam11(); break;
			case 12: exam12(); break;
			case 13: exam13(); break;
			case 14: exam14(); break;
			case 15: exam15(); break;
			case 16: exam16(); break;
			case 17: exam17(); break;
            default: return 0 ;
		}
	}
}
