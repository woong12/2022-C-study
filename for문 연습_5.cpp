#include <stdio.h>

exam19(){
//	int i, j;
//	for (i = 2; i <= 9; i++) {
//		printf("*** %d단 *** \n", i);
//		for (j = 1; j <= 9; j++) {
//			printf("%d * %d = %d\n", i, j, i * j)	;
//		}
//		printf("\n");
//	}
	
	int i, j, k;
	printf("\n");
	for (i = 2; i <= 9; i++) {
		printf("*** %d단 *** \t", i);
		if(i == 9) {
			printf("\n\n");
		}
	}
	for (k = 1; k <= 9; k++){
			for (j = 2; j <= 9; j++) {
			printf("%d * %d = %3d\t", j, k, k*j)	;
		}
		printf("\n");
	}
}

exam20(){
	int num = 0;
	while(1) {
		num++;
		printf("%d \n", num) ;
		if(num == 5) {
			break;
		}
	}
} 

exam22(){
	int i;
	for (i = 0; i < 10; i++) {
		if( i % 3== 0) 
			continue;
			printf("%d", i);
	}
} 

exam23(){
	int i = 0;
	while(i <= 20) {
		i++;
		if(i % 2 != 0)
		continue;
		printf("%d\n", i);
	}
} 

exam24(){
	
} 


main(){
	int no;
	
	while(1){
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
		switch(no){
			case 19: exam19(); break;
			case 20: exam20(); break;
			case 22: exam22(); break;
			case 23: exam23(); break;
			case 24: exam24(); break;
		}
	}
}
