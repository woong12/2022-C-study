#include <stdio.h>

	

	
	
	
	
	

 
void func1(){
	printf("1번 함수입니다.\n");
	
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
	printf("2번 함수입니다.\n");
	
		int n, count = 0, sum = 0;
	do{
		scanf("%d", &n);
		if(n < 1){
			continue;
		}
		sum += n;
		count ++;
	}while(count <=4);
	printf("합계 : %d\n", sum);
}




main(){
	
	int no;
	while (1){
		printf("함수번호 : ");
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
				printf("잘못된 함수 번호입니다.");
		}
	}
}






