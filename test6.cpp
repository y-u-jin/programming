#include <stdio.h>

int main(void) 
{
	/*  //���ĺ��� �빮������ �ҹ������� �Ǻ��ϱ�
	char alp;

	printf("���ĺ��� �Է����ּ���. : ");
	scanf_s("%c", &alp, sizeof(alp)); //���ڿ��� �迭�� ���� ������ & �Ƚᵵ ������ �������� & ��� ��.

	if (alp >= 'A' && alp <= 'Z') //����ǥ �Ⱦ��� A�� 65�� ���ڰ� ������ 'A'�� ���ĺ� A��.
	{
		printf("�Է��� ���ĺ� %c�� \'�빮��\'�̰� \n", alp); //\'�빮��\' ������ �� ���
		printf("�ƽ�Ű�ڵ尪�� %d�Դϴ�.\n", alp);
	}
	else
	{
		printf("�Է��� ���ĺ� %c�� \'�ҹ���\'�̰� \n", alp);
		printf("�ƽ�Ű�ڵ尪�� %d�Դϴ�.\n", alp);
	}
*/
 

/*
	//������ ���ϱ�
	char blood;

	printf("A�� : A �Ǵ� a\n");
	printf("B�� : B �Ǵ� b\n");
	printf("O�� : O �Ǵ� o\n");
	printf("AB�� : AB �Ǵ� ab\n");
	printf("�������� �Է����ּ���. : ");
	scanf_s("%c", &blood, sizeof(blood));

	if (blood == 'A' || blood == 'a')
	{
		printf("A��\n");
		printf("�ε巴�� ������ ����\n");
	}

	else if (blood == 'B' || blood == 'b')
	{
		printf("B��\n");
		printf("���� ��ȭ�� �ΰ��� ����\n");
	}

	else if (blood == 'O' || blood == 'o')
	{
		printf("O��\n");
		printf("Ȱ���ϰ� ��Ȱ�� ����\n");
	}

	else if (blood == 'AB' || blood == 'ab')
	{
		printf("AB��\n");
		printf("�������� ������ ���� ����\n");
	}

	else
	{
		printf("������� �ʴ� �����Դϴ�.\n");
		printf("��ҹ��� ���� ���� A, B, O, AB�� �Է����ּ���.\n");
		printf("���α׷��� �ٽ� �������ּ���.\n");
		return 0;
	}
*/
/*
	//��� ���� �˾ƺ���

	int year, month, day;

	printf("������ ���� �Է����ּ���(��:2021,10) : ");
	scanf_s("%d,%d", &year, &month);

	if (month > 12 || month < 1)
	{
		printf("%d ���� ������ �ʽ��ϴ�.\n", month);
		printf("���α׷��� �ٽ� �����ϼ���.\n");
	}
	else
	{
		switch (month)
		{
		case 2:
			if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
			{
				printf("����");
				day = 29;
			}
			else
			{
				printf("���");
				day = 28;
			}
			break;
		case 4: case 6: case 9: case 11:
			printf("���");
			day = 30;
			break;

		default:
			printf("���");
			day = 31;
		}
		printf(": %d�� %d���� %d�ϱ��� �ֽ��ϴ�.\n", year, month, day);
	}
*/
/*
	// ������ ���� ���� ����ϱ�
	int score;
	char grade;

	printf("������ �Է��ϼ��� : ");
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

	printf("�e���� %c �Դϴ�. \n", grade);
*/

	//���� ��� switch������ �ٲٱ�

	int score;
	char grade;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score); // ������� �Ȱ���.

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
	printf("�e���� %c �Դϴ�. \n", grade);
	return 0;
}