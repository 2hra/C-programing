//// 230320 3주차 수업
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() // 파일이 여러개라도 메인은 무조건 하나만.
//{
//	// 3주차 1교시)
//	// printf() 함수 연습
//
//	int a, b;
//	int result; // 정수(4byte)인 변수 선언 세 개
//	// 컴퓨터 메모리에 변수, 프로그램, 윈도우 등이 저장됨. 
//	// 저장된 것들은 각각의 주소값이 있음. 주소를 가지고 오는 것을 포인트라고 함.
//
//	a = 100; // 변수 값 선언. 초기값 0으로 지정하는 경우도 있음.
//	b = 50;
//
//	result = a + b; // 사칙연산자 -> 대입연산자 순으로 진행. 우선순위 잘 알아야 함.
//	printf("%d + %d = %d \n", a, b, result); // 따옴표 내부의 값만 출력.
//	// %d == 10진수 값 입력
//	// \n == 개행문자. 줄 바꾸는 것.
//
//	result = a - b;
//	printf("%d - %d = %d \n", a, b, result);
//
//	result = a * b;
//	printf("%d * %d = %d \n", a, b, result);
//
//	result = a / b;
//	printf("%d / %d = %d \n", a, b, result);
//
//
//
//	// scanf() 함수: 값 입력받는 함수. scanf_s()가 보안에 좋지만 이식성은 낮음.
//	// scanf() 사용 시 #define _CRT_SECURE_NO_WARNINGS 추가 입력
//	int a, b;
//	int result;
//	
//	//scanf("%d", &a); // & == 주소연산자: &이 해당 변수 주소값을 찾아오는 것.
//	//scanf("%d", &b);
//
//	printf("1~100 사이의 값을 입력해 주세요 ==> ");
//	scanf("%d", &a); // 반환값 무시 경고 멘트는 무시해도 됨.
//	printf("1~10 사이의 값을 입력해 주세요 ==> ");
//	scanf("%d", &b);
//	
//	result = a + b;
//	printf("%d + %d = %d \n", a, b, result);
//
//	result = a - b;
//	printf("%d - %d = %d \n", a, b, result);
//
//	result = a * b;
//	printf("%d * %d = %d \n", a, b, result);
//
//	result = a / b;
//	printf("%d / %d = %d \n", a, b, result);
//
//	result = a % b;
//	printf("%d %% %d = %d \n", a, b, result); // %% == 문자로 인식.
//
//
//
//	// 예제 모음
//	// 01)
//	int num1, num2, num3, num4;
//	int result;
//
//	// 02) 사칙연산 계산기 만들기. if문 활용.
//	int a, b;
//	int result;
//	int k;
//
//	printf("첫 번째 계산할 값을 입력하세요 ==> ");
//	scanf("%d", &a);
//	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==> ");
//	scanf("%d", &k);
//	printf("두 번째 계산할 값을 입력하세요 ==> ");
//	scanf("%d", &b);
//
//	if (k == 1) {
//		result = a + b;
//		printf("%d + %d = %d \n", a, b, result);
//	}
//	if (k == 2) {
//		result = a - b;
//		printf("%d - %d = %d \n", a, b, result);
//	}
//	if (k == 3) {
//		result = a * b;
//		printf("%d * %d = %d \n", a, b, result);
//	}
//	if (k == 4) {
//		result = a / b;
//		printf("%d / %d = %d \n", a, b, result);
//	}
//
//	// 02-1) 오류 없는 계산기
//	int a, b;
//	int result;
//	char k;
//
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &a);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &k); // 값 입력하고 엔터 치면 %c에 개행문자로 인식함. 그래서 %c 앞에 띄어쓰기 하나 입력해야 함.
//	printf("두 번째 계산할 값 ==> ");
//	scanf("%d", &b);
//
//	if (k == '+') { // '' == 문자 하나, "" == 문자열.
//		result = a + b;
//		printf("덧셈값은 %d입니다. \n", result);
//	}
//
//	if (k == '-') {
//		result = a - b;
//		printf("뺄셈값은 %d입니다. \n", result);
//	}
//
//	if (k == '*') {
//		result = a * b;
//		printf("곱셈값은 %d입니다. \n", result);
//	}
//
//	if (k == '/') { 
//		if (b != 0) {
//			result = a / b;
//			printf("나눗셈값은 %d입니다. \n", result);
//		} 
//		else {
//			printf("0으로 나누면 안 됩니다. \n다시 입력해 주세요 ==> ");
//			scanf("%d", &b);
//			result = a / b;
//			printf("나눗셈값은 %d입니다. \n", result);
//		}
//	}
//
//	if (k == '%') {
//		if (b != 0) {
//			result = a % b;
//			printf("나머지값은 %d입니다. \n", result);
//		}
//		else {
//			printf("0으로 나누면 나머지값이 안 됩니다. \n다시 입력해 주세요 ==> ");
//			scanf("%d", &b);
//			result = a % b;
//			printf("나머지값은 %d입니다. \n", result);
//		}
//	}
//
//	
//	
//	// 한이음, 마에스트로 등과 비슷한 프로젝트 팀.
//	// 여학생 제한해서 6개월간 팀으로 4인 1팀 팀 프로젝트.
//	// SCI 논문 만들기가 최종 목표. 빅데이터, 블록체인 한 팀씩. (AI는 김태완 교수님)
//	// 12명 정도 세 개 과제 제안서 교수님이 작성할 것. 최종 4개 팀만 뽑아서 매우 치열할 예정.
//	// 이력서 작성해서 교수님께 제출하면 교수님께서 엄선해서 팀 꾸릴 예정.
//
//
//
//	// 3주차 2교시)
//	// printf("") 내무에 %d가 아닌 그냥 숫자 바로 입력은 문자인 것.
//	// printf("%d %d", 100) >> 두 번째 %d에는 쓰레기값이 들어옴. 서식 개수대로 값이 주어져야 정상적으로 출력 가능.
//	// %d에 실수 입력 시 정수로 표현됨. 0.5 -> 0
//	// %d 10진수, %x 16진수, %o 8진수
//	// %f(8byte, 소숫점 6자리까지 무조건 채워서 출력), %lf(long float, 10byte) 실수
//	// %c 문자, %s 문자열
//
//	// 서식 자릿수 맞추기
//	printf("%d\n", 123);
//	printf("%5d\n", 123); // 공백으로 채워서 5자리
//	printf("%05d\n", 123); // 0으로 채워서 5자리
//	printf("%7.1f\n", 123.45); // 공백으로 채워서 7자리, 소숫점 1자리에서 반올림
//	printf("%10s\n", "Basic-C"); // 공백으로 채워서 10자리
//
//	// 서식 문자
//	// \n 엔터, \t 탭, \b 뒤로 한 칸/백스페이스, \r 해당 줄 맨 앞으로 이동, \a 삑 소리, \\ 역슬래시 출력, \', \"
//	printf("\n줄 바꿈\n연습 \n");
//	printf("\t탭키\t연습 \n");
//	printf("이것을\r덮어씁니다 \n"); // 출력 결과: 덮어씁니다
//	printf("\a\a\a삐소리 3번 \n");
//	printf("글자가 \"강조\"되는 효과 \n");
//	printf("\\\\\\ 역슬래시 세 개 출력 \n");
//
//	// 변수 선언
//	// float 8byte, int 4byte
//	int a, b;
//	// int a, float b; 불가능. int a; float b; 가능
//	int a = 100;
//	float b = 123.45; 
//	int a = 100, b = 200; // 같은 정수형 변수는 한 줄로도 가능
//	// 다른 유형의 변수에 넣으면 그 변수의 유형대로 바뀌어 저장됨. 하지만 컴파일 오류 최소화를 위해 최대한 맞는 변수 사용.
//
//	// 4~5주차 휴강, 온라인 강좌. 미리 봐도 좋음. 과제도 나갈 것(기한은 이틀 정도.)
//}