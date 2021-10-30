#include <stdio.h>

int main(void) 
{
	/*  //알파벳이 대문자인지 소문자인지 판별하기
	char alp;

	printf("알파벳을 입력해주세요. : ");
	scanf_s("%c", &alp, sizeof(alp)); //문자열은 배열로 쓰기 때문에 & 안써도 되지만 문자형은 & 써야 함.

	if (alp >= 'A' && alp <= 'Z') //따옴표 안쓰면 A는 65인 숫자가 되지만 'A'는 알파벳 A임.
	{
		printf("입력한 알파벳 %c는 \'대문자\'이고 \n", alp); //\'대문자\' 강조할 때 사용
		printf("아스키코드값은 %d입니다.\n", alp);
	}
	else
	{
		printf("입력한 알파벳 %c는 \'소문자\'이고 \n", alp);
		printf("아스키코드값은 %d입니다.\n", alp);
	}
*/
 

/*
	//혈액형 구하기
	char blood;

	printf("A형 : A 또는 a\n");
	printf("B형 : B 또는 b\n");
	printf("O형 : O 또는 o\n");
	printf("AB형 : AB 또는 ab\n");
	printf("혈액형을 입력해주세요. : ");
	scanf_s("%c", &blood, sizeof(blood));

	if (blood == 'A' || blood == 'a')
	{
		printf("A형\n");
		printf("부드럽고 섬세한 성향\n");
	}

	else if (blood == 'B' || blood == 'b')
	{
		printf("B형\n");
		printf("주위 변화에 민감한 성향\n");
	}

	else if (blood == 'O' || blood == 'o')
	{
		printf("O형\n");
		printf("활발하고 쾌활한 성향\n");
	}

	else if (blood == 'AB' || blood == 'ab')
	{
		printf("AB형\n");
		printf("예술적인 감각을 가진 성향\n");
	}

	else
	{
		printf("허용하지 않는 문자입니다.\n");
		printf("대소문자 구별 없이 A, B, O, AB만 입력해주세요.\n");
		printf("프로그램을 다시 시작해주세요.\n");
		return 0;
	}
*/
/*
	//평년 윤년 알아보기

	int year, month, day;

	printf("연도와 월을 입력해주세요(예:2021,10) : ");
	scanf_s("%d,%d", &year, &month);

	if (month > 12 || month < 1)
	{
		printf("%d 월은 허용되지 않습니다.\n", month);
		printf("프로그램을 다시 시작하세요.\n");
	}
	else
	{
		switch (month)
		{
		case 2:
			if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
			{
				printf("윤년");
				day = 29;
			}
			else
			{
				printf("평년");
				day = 28;
			}
			break;
		case 4: case 6: case 9: case 11:
			printf("평년");
			day = 30;
			break;

		default:
			printf("평년");
			day = 31;
		}
		printf(": %d년 %d월은 %d일까지 있습니다.\n", year, month, day);
	}
*/
/*
	// 점수에 대한 학점 출력하기
	int score;
	char grade;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("햑졈은 %c 입니다. \n", grade);
*/

	//학점 계산 switch문으로 바꾸기

	int score;
	char grade;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score); // 여기까진 똑같음.

	switch (score / 10)
	{
	case 10:
	case 9:
		grade = 'A';
		break;

	case 8:
		grade = 'B';
		break;

	case 7:
		grade = 'C';
		break;

	case 6:
		grade = 'D';
		break;

	default:
		grade = 'F';
		break;
	}
	printf("햑졈은 %c 입니다. \n", grade);
	return 0;
}