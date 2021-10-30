#include <stdio.h>

int main(void)
{
	// 1번 문제
	/*char name[10];
	int eng, math, com;
	double avg, gpa;


	printf("이름 : \n");
	scanf_s("%s", name, sizeof(name));

	printf("영어  수학  컴퓨터 점수 : \n");
	scanf_s("%d %d %d", &eng, &math, &com);

	printf("======================");

	printf("이름 : %s \n", name);
	
	printf("-----------------\n");

	printf("영어  : %3d 점 \n", eng);
	printf("%-6s   : %3d 점","영어", eng);

	printf("수학  : %3d 점 \n", math);
	printf("%-6s   : %3d 점", "수학", math);

	printf("컴퓨터  : %3d 점 \n", com);
	printf("%-6s   : %3d 점", "컴푸터", com);

	printf("-----------------\n");

	
	avg = (eng + math + com) / 3.0;
	gpa = (avg * 4.5) / 100; 

	

	printf("평균 (평점)  : %.1lf점(%.1lf) \n", avg, gpa);
	

	printf("======================");
	printf("32210932 김유진");
	*/

	/*
	int g;
	char size;

	printf("가슴둘레 입력(80~120까지 입력할 수 있습니다.) : \n");
	scanf_s("%d", &g);

	if (g >= 80 && g < 90)
		size = 'S';
	

	else if(g>=90 && g<100)
		size = 'M';
	

	else if (g >= 100 && g < 110)
		size = 'L';

	else
	{
		printf("범위를 벗어났습니다.\n");
		printf("프로그램을 종료하고 다시 시작하세요.\n");
		return 0;
	}

	printf("입력한 가슴둘레 : %d \n", g);
	printf("당신의 사이즈는 %c 입니다. \n", size);
*/

	/*int g;
	char size;

	printf("가슴둘레 입력(80~120까지 입력할 수 있습니다.) : \n");
	scanf_s("%d", &g);

	mok = g / 10;

	switch (m)
	{
	case 8:

		size = 'S';
		break;

	case 9:
		size = 'M';
		break;

	case 10:
		size = 'L';
		break;

	default:
		printf("범위를 벗어났습니다.\n");
		printf("프로그램을 종료하고 다시 시작하세요.\n");
		return 0;
	}

	printf("입력한 가슴둘레 : %d \n", g);
	printf("당신의 사이즈는 %c 입니다. \n", size);
*/
	return 0;
}