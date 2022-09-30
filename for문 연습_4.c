#include <stdio.h>

exam14(){
	int i, j;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 3; j++) {
			printf("*");
		}
		printf("\n");
	}
} 

exam15(){
	int i, j;
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 5; j++) {
			printf("%d", i);
		}
		printf("\n");
	}
} 

exam16(){
	int i, j;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
} 

exam17(){
	int i, j, n;
	printf("출력할 행 입력 : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
} 

exam18(){
	int i, j;
	for (i = 1; i <= 5; ++i) {
		for(j = 1; j <= i; ++j) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 4; i >= 1; --i) {
		for(j = i; j >= 1; --j) {
			printf("*");
		}
		printf("\n");
	}
} 


main(){
	int no;
	
	while(1){
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
		switch(no){
			case 14: exam14(); break;
			case 15: exam15(); break;
			case 16: exam16(); break;
			case 17: exam17(); break;
			case 18: exam18(); break;
		}
	}
}
