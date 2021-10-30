#include <stdio.h>

int main(void)
{

	/*int kor, eng, math, sum = 0;
	float avg; //float는 실수 정의
	printf("1.국어 점수:");
	scanf_s("%d", &kor);

	printf("2.수학 점수:");
	scanf_s("%d", &math);

	printf("3.영어 점수:");
	scanf_s("%d", &eng);

	sum = kor + math + eng;
	avg = sum / 3.0;

	printf("총 점 : %d\n", sum);
	printf("평균 점수 : %.2f\n", avg); // 실수는 f로 받음
*/

	int a = 65;
	printf("%d\n", a);
	printf("%c", a+1); // c는 문자열받음, a자리는 ""안에 없기 때문에 식 가능


	/*char str[10];
	printf("문자 입력:");
	scanf_s("%s", str, sizeof(str));

	printf("문자열 출력:% -10s\n", str); // -는 왼쪽 정렬
	printf("문자열 출력:% 10s", str);
*/

	/*int num1, num2, num3 = 0;
	float division;

	printf("정수값 2개 입력:");
	scanf_s("%d %d", &num1, &num2);

	num3 = num1 * num1 * num1;
	division = (float)num1 / num2; 
	// num1, num2가 정수기 때문에 무조건 실수로 하나는 바꿔줘야 함 바꾸는 방법은 (float)해주기 !!

	printf("세제곱 연산: %d * %d * %d = %09d\n ", num1, num1, num1, num3);
	printf("나누기 연산: %d / %d = %06.2f\n", num1, num2, division);
*/

	return 0;
}