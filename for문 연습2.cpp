#include <stdio.h>

exam6(){
	int i, count = 0, sum = 0;
	for (i = 3; i <= 50; i+=3){
		printf("%4d",i);
		sum += i;
		++count;
		if(count % 5 == 0){
			printf("\n");
		}
		
	}
}

exam7(){
	char ch;
	for(ch = 'F'; ch >='A'; ch--) {
		printf("%c ", ch);
	}
}	

exam8(){
	int i, n, fact = 1;
	scanf("%d", &n);
	
	for(i = 1; i <=n; i++) {
		fact = fact * i;
	}
	printf("%d! = %d\n", n, fact);
}

exam9(){
	int i, dan;
	printf("원하는 단은 ? ");
	scanf("%d", &dan);
	printf("\n*** %d단 ***\n", dan);
	for (i = 1; i <=9; i++) {
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
}

exam10(){
	int n1, n2, i;
	printf("두 수 입력 : ");
	scanf("%d %d", &n1, &n2) ;
	if(n1 < n2) 
	{
		for(i = n1; i <= n2; i++) 
			printf("%d ", i);
			
		}else 
		{
			for(i = n2; i <= n1; i++)
				printf("%d ", i);
		}
	}




main() {
	int no;
	
	while(1) {
		printf("\n문제번호:");
		scanf("%d", &no);
		printf("%d번 문제============================\n", no);
		switch(no) {
			case 6: exam6(); break;
			case 7: exam7(); break;
			case 8: exam8(); break;
			case 9: exam9(); break;
			case 10: exam10(); break;
		}
	}
}
