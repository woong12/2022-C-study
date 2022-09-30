#include <stdio.h>

exam1(){
	int i;
	for (i = 0; i < 3; i++) {
		printf("**********\n");
	}
}

exam2(){
	int i;
	for (i = 1; i <= 6 ;i++){
		printf("i = %d\n",i);
	}
}	

exam3(){
	int i, sum = 0;
	for(i = 1; i <=10; i++){
		sum += i;
	}
	printf("1~10까지 합 : %d\n", sum);
}

exam4(){
	int i, even, odd;
	even = odd = 0;
	
	for(i = 1; i <= 100; i ++) {
		if(i %2 ==0){
			even+=i;
		} else {
			odd+=i;
		}
	}
	printf("짝수합 = %d, 홀수합 = %d\n", even, odd);
}

exam5(){
	int i;
	for(i = 1; i <= 9; i++){
		printf("2 * %d = %d\n", i, 2*i);
	}
}



main() {
	int no;
	
	while(1) {
		printf("\n문제번호:");
		scanf("%d", &no);
		printf("%d번 문제============================\n", no);
		switch(no) {
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
		}
	}
}
