#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//가위바위보 게임 
//가위:1, 바위:2, 보:3	종료:0 

int main() {
	int user, com;
	int win = 0, count = 0;
	
	while(1)  {
			printf("가위바위보를 입력하세요\n");
		printf("가위: 1		바위: 2		보: 3		종료: 0\n");
		printf("입력: ");
		scanf("%d", &user);
		
		if(user == 0) {
			printf("승률: %d회 중에 %d회 이김 %f%%", count, win, (float)win / count * 100);
			break;
		}
		
		count++;
		
		srand(time(NULL));
		com = rand()%3+1;
		printf("com:%d\n" , com);
		
		if ((user == 1 && com == 3) || (user == 2 && com == 1) || (user == 3 && com == 2)) { 
			printf("승리\n\n");
			win++;
		} else if (user == com) {
			printf("무승부\n\n");
		} else {
			printf("패배\n\n");
		} 
	}
	
}

