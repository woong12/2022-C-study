#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//���������� ���� 
//����:1, ����:2, ��:3	����:0 

int main() {
	int user, com;
	int win = 0, count = 0;
	
	while(1)  {
			printf("������������ �Է��ϼ���\n");
		printf("����: 1		����: 2		��: 3		����: 0\n");
		printf("�Է�: ");
		scanf("%d", &user);
		
		if(user == 0) {
			printf("�·�: %dȸ �߿� %dȸ �̱� %f%%", count, win, (float)win / count * 100);
			break;
		}
		
		count++;
		
		srand(time(NULL));
		com = rand()%3+1;
		printf("com:%d\n" , com);
		
		if ((user == 1 && com == 3) || (user == 2 && com == 1) || (user == 3 && com == 2)) { 
			printf("�¸�\n\n");
			win++;
		} else if (user == com) {
			printf("���º�\n\n");
		} else {
			printf("�й�\n\n");
		} 
	}
	
}

