#include <stdio.h>

exam1(){
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 2; j <=5; j++) {
			printf("%2d * %2d = %2d\t", i, j, i*j);
		}
			printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 9; i++) {
		for (j = 6; j <=9; j++) {
			printf("%2d * %2d = %2d\t", i, j, i*j);
		}
			printf("\n");
	}
} 

exam2(){
	//31 q3
	int i = 30;
	while(i >= 10) {
		printf("%d ", i);
		i -= 2;
	}
} 

exam3(){
	//32 q5
	int i=1, n, sum=0;
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d", &n);
	
	while(i <= n)
	{
		sum += i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�\n", n,
	sum);
	} 

exam4(){
	//35 q1
	int i = 0, sum = 0;
	while(1)
	{

	i++;
	if(i > 10) break;
			if(i % 5 == 0) continue;
	sum += i;

	}
	printf("sum = %d\n", sum);
} 

exam5(){
	int i, su, cnt = 0;
	printf("���� �Է� : ");
	scanf("%d", &su);
	
	i = 1;
	while(i <= su) {
		if(su % i == 0)
		cnt ++;
		i++;
	}
	if(cnt == 2) {
		printf("%d��(��) �Ҽ�\n ", su);
	} else {
		printf("%d��(��) �Ҽ��� �ƴ�\n ", su);
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
