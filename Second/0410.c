//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main()
//{
//	/// 6주차 1차시 - 제5장 조건문
//
//	// 중간은 다다음 주, 6/24 1시 반부터 50분 시험.
//	// 프로그램을 짜시오, 결과값 출력하시오, 빈칸 채우시오 등. 필기 시험.
//	// 기말은 실기 또는 필기 고민 중.
//
//	// 조건문, 반복문, 포인트가 c언어의 중요한 개념.
//	// 컴파일 속도를 높이려면 효율적인 코드를 짜기 위해서 조건문이 필요.
//	// 객체지향 언어(자바, C++) 하나, 프로시져 언어(C 추천, 파스칼(데이터분석)은 현재 대세) 하나씩은 필수.
//
//
//	// if문
//	// 학점 계산 코드 예제
//	int a;
//
//	printf("점수를 입력하세요. : ");
//	scanf("%d", &a);
//
//	if (a >= 80) {
//		if (a >= 90)
//			printf("A 학점입니다. \n");
//		else
//			printf("B 학점입니다. \n");
//	}
//	printf("내년에 다시 듣자."); // else 없이도 돌아갈 수 있음.
//
//
//	// 중첩 if문, nested if. 둘러싸인 if.
//	// 계단식으로 들여쓰기 잘 활용하기. 어느 단락에 적용되는지 오류 없도록.
//
//	// 학점 계산 코드 예제 02
//	int a;
//	printf("점수를 입력하세요. : ");
//	scanf("%d", &a);
//
//	if (a >= 90) 
//		printf("A 학점입니다.\n");
//	else if (a >= 80) 
//		printf("B 학점입니다.\n");
//	else if (a >= 70)
//		printf("C 학점입니다.\n");
//	else if (a >= 60)
//		printf("D 학점입니다.\n");
//	else
//		printf("내년에 다시 듣자. \n");
//
//
//	// switch ~ case문: 조건이 아니라 특정값(정숫값)일 경우에만 실행.
//	// 여러개 중 하나 선택. 다중 분기.
//	// 각 실행문 마지막에 반드시 break; 입력해야 함.
//	// 입력 안 하면 해당하는 값부터 아래 모든 실행문을 실행함.
//	// default 맨 마지막에 넣으면 특이값 넣었을 때 기본값으로 지정됨.
//
//
//	// 띠 입력 예제
//	int year;
//
//	printf("출생연도를 입력하세요. : ");
//	scanf("%d", &year);
//
//	switch (year % 12) {
//	case 0: 
//		printf("원숭이띠\n");
//		break;
//	case 1:
//		printf("닭띠\n");
//		break;
//	case 2:
//		printf("개띠\n");
//		break;
//	case 3:
//		printf("돼지띠\n");
//		break;
//	case 4:
//		printf("쥐띠\n");
//		break;
//	case 5:
//		printf("소띠\n");
//		break;
//	case 6:
//		printf("호랑이띠\n");
//		break;
//	case 7:
//		printf("토끼띠\n");
//		break;
//	case 8:
//		printf("용띠\n");
//		break;
//	case 9:
//		printf("뱀띠\n");
//		break;
//	case 10:
//		printf("말띠\n");
//		break;
//	case 11:
//		printf("양띠\n");
//		break;
//	}
//
//
//	// 예제모음 11 > switch로 바꿔서.사칙연산 전자계산기.
//	char re = 'Y';
//		while (re == 'Y')
//		{
//			int a, b;
//			char c;
//
//			printf("첫 번째 값을 넣으세요. : ");
//			scanf("%d", &a);
//			printf("두 번째 값을 넣으세요. : ");
//			scanf("%d", &b);
//			printf("오칙연산을 선택하세요. : ");
//			scanf(" %c", &c);
//
//			switch (c) {
//			case '+':
//				printf("결과 값: %d\n", a + b);
//				break;
//			case '-':
//				printf("결과 값: %d\n", a - b);
//				break;
//			case '*':
//				printf("결과 값: %d\n", a * b);
//				break;
//			case '/':
//				printf("결과 값: %f\n", a / (float)b);
//				break;
//			case '%':
//				printf("결과 값: %d\n", a % b);
//				break;
//			default:
//				printf("오칙연산 오류입니다.\n");
//				break;
//			}
//
//			char re;
//			printf("\n다시 실행하시겠습니까? (Y/N) : ");
//			scanf(" %c", &re);
//			printf("\n");
//		
//			if (re == 'N') {
//				printf("N을 입력하셨습니다. 프로그램을 종료합니다. \n");
//				exit();
//			}
//		}
//	
//
//
//	/// 6주차 2차시 - 제6장 [반복문 for문], while문, do while문.
//	// for문
//	//int i;
//	//for (i = 0; i < 5; i++) // (초기값 ; 조건식 ; 증감식), 초기값은 한 번만 수행. 조건 -> 증감 -> 조건 -> 증감 반복함.
//	//	printf("반복 x %d\n", i+1);
//
//	// for문에 실행 문장 여러갠데 중괄호 없으면 또 첫 번째 실행문만 반복됨.
//	
//	// 응용 6-11.
//	/*int i, num;
//	int hap = 0;
//
//	printf("숫자를 입력하세요. : ");
//	scanf("%d", &num);;
//
//	for (i = 1; i <= num; i++) {
//		if (i % 2 != 0)
//			hap = hap + i;
//	}
//	printf("1부터 %d까지 홀수의 합은 %d입니다.\n", num, hap);*/
//
//
//	int i, j, answer, hap = 0;
//
//	printf("첫 번째 숫자를 입력하세요. : ");
//	scanf("%d", &i);
//	printf("두 번째 숫자를 입력하세요. : ");
//	scanf("%d", &j);
//	printf("조건을 입력하세요. (홀수: 1, 짝수: 2) : ");
//	scanf("%d", &answer);
//
//	if (answer == 1) {
//		for (i; i <= j; i++) {
//			if (i % 2 != 0)
//				hap = hap + i;
//		}
//		printf("%d부터 %d까지 홀수의 합은 %d입니다.\n", i, j, hap);
//	}
//	else if (answer == 2) {
//		for (i; i <= j; i++) {
//			if (i % 2 == 0)
//				hap = hap + i;
//		}
//		printf("%d부터 %d까지 짝수의 합은 %d입니다.\n", i, j, hap);
//	}
//	else {
//		printf("조건 오류입니다.\n");
//	}
//
//	
//	// 중첩 for문
//	// 구구단 옆으로 만들어 보기
//
//
//	// 다양한 for문의 형태
//	// 초기, 조건, 증감값 두 개씩 가능함.
//	// 초기값, 증감식은 위에 선언, 아래 선언 가능. 단, 조건식이 없는 건 무한반복. ctrl+c는 강제 종료.
//
//
//	// 예제모음 14)
//	int i, j, k, dan;
//
//	printf("원하는 단을 입력하세요. : ");
//	scanf("%d", &dan);
//	for (j = 2; j <= dan; j++) {
//		printf(" # %2d단 #  ", j);
//	}
//	printf("\n\n");
//	for (i = 1; i <= 9; i++) {
//		for (k = 2; k <= dan; k++) {
//			printf("%2dx%2d=%2d   ", k, i, i * k);
//		}
//		printf("\n");
//	}
//
//	// 예제모음 16)
//	/*char word[100];
//
//	printf("한글 및 숫자를 입력 (100자 이하) : IT_")*/
//}