#include <stdio.h>
#include <stdlib.h>
#include <time.h>

exam1(){
	int n, a;
	printf("4�ڸ��� �Է� : ");
	scanf("%d", &n);
	
	do {
		a = n % 10;
		printf("%d", a);
		n = n / 10;
		
	} while (n > 0);
} 

exam2(){
	int n, a1 = 0, a2 = 1, a3 , i;
	printf("�� ��° �ױ��� ���ұ��?");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("%d ", a1);
		a3 = a1 + a2;
		
		a1 = a2;
		a2 = a3;
	}
} 

exam3(){
	int answer, cnt, guess;
	srand(time(NULL));
	answer = rand() % 100 + 1;
	
	do {
		printf("1���� 100���� ���ڸ� ���纸����>> ");
		scanf("%d", &guess);
		cnt ++;
		
		if(guess < answer) {
			printf("UP\n");
		} else if (guess > answer) {
			printf("DOWN\n");
		}
		
	} while(guess != answer);
		printf("�����մϴ�! ������ %d�̰�, �õ�Ƚ�� = %d\n", answer, cnt);
} 

exam4(){
	int a, b, temp, i;
	printf("*** �� �� ������ ���� ����ϱ� ***\n");
	printf("�� �� �Է� : ");
	scanf("%d %d", &a, &b);
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	for (i = a; i <= b; i ++) {
		printf("%d ", i);
	}
} 

exam5(){
//	int i, j;
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < i; j++ ) {
//			printf("0");
//		}
//		printf("*\n");
//	}
//	
//	i = j = 1;
//	while (i <= 5) {
//		j = 1;
//		while (j < i) {
//			printf("0");
//			j++;
//		}
//		printf("*\n");
//		i++;
//	}

	int i, j;
	for(i=3; i>=0; i--) {
		for(j=0; j<i; j++) {
			printf("*");
		}
		printf("0\n");
	}
} 


main(){
	int no;
	
	while(1){
		printf("\n������ȣ:");
		scanf("%d" , &no);
		printf("%d�� ����==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
		}
	}
}
