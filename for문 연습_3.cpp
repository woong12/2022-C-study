#include <stdio.h>

exam11(){
	int num1, num2, i;
	
	printf("������� ���� �� ���� �Է� : ") ;
	scanf("%d %d", &num1, &num2);
	for(i = 1; i <= 100; i++) {
		if(i % num1 == 0 && i % num2 == 0){
			printf("%d ", i);
		}
	}
}

exam12(){
	int num =1, sum = 0;
	for( ;; ) {
		sum += num;
		printf("%d������ ��: %d\n", num, sum);
		num++;
		if(num == 6){
			break;
		}
		
	}
}	

exam13(){
	
}

exam14(){
	
}

exam15(){
	
}




main() {
	int no;
	
	while(1) {
		printf("\n������ȣ:");
		scanf("%d", &no);
		printf("%d�� ����============================\n", no);
		switch(no) {
			case 11: exam11(); break;
			case 12: exam12(); break;
			case 13: exam13(); break;
			case 14: exam14(); break;
			case 15: exam15(); break;
		}
	}
}
