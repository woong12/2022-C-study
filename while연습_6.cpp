#include <stdio.h>

	

	
	
	
	
	

 
void func1(){
	printf("1�� �Լ��Դϴ�.\n");
	
		int i = 0, sum = 0;
	
	while(1){
		i++;
		if(i > 10)
			break;
		if(i % 5 == 0)
			continue;
		sum+=i;			
		

	}
	printf("sum = %d\n", sum);
}

void func2(){
	printf("2�� �Լ��Դϴ�.\n");
	
		int n, count = 0, sum = 0;
	do{
		scanf("%d", &n);
		if(n < 1){
			continue;
		}
		sum += n;
		count ++;
	}while(count <=4);
	printf("�հ� : %d\n", sum);
}




main(){
	
	int no;
	while (1){
		printf("�Լ���ȣ : ");
		scanf("%d", &no);
		
		switch(no){
			case 1:
				func1();
				break;
			case 2:
				func2();
				break;
			case 0:
				return 0;
			default:
				printf("�߸��� �Լ� ��ȣ�Դϴ�.");
		}
	}
}






