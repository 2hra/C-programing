//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//#include <conio.h>
//#include <time.h>
//#include <malloc.h>
//
//void main() {
//	//// 0515 11주차
//	//// chapter 12 고급 포인터 & chapter 13 구조체, 공용체, 열거형
//	//// 12-1) 메모리 할당 함수
//	//// 하드에서 바로 전달하는 게 아니라 메모리에서 CPU로 전달. 모든 메모리에는 주소값 존재.
//	//// c언어 프로그램 - 라이브러리 - 메모리에서 링크, 변수도 메모리에 저장.
//	//// sram: 건물의 한 칸마다 공간이 다 할당된 것 
//	//// dram: 공간이 뚫려서 창고처럼 물건을 넣으려면 사이즈 계산해서 맞춰 넣어야 하는 것. 시간이 더 오래 걸림.
//	//// 정적 램: 캐시 램, 동적 램: 디 램.
//	//// 포인터 변수: 주소값 저장하는 그릇.
//
//	//// 동적 메모리 확보: malloc() => dynaminc memory allocation
//	//// 필요한 메모리 크기 고정적이면 문제 없음. 매번 달라지는데 크게 메모리 고정해 두면 메모리 낭비. => 필요할 때마다 malloc() 함수 사용.
//	//// 함수 형식: 포인터 변수명 = (포인터 변수 데이터형*) malloc(포인터 변수 데이터형 크기(sizeof(자료형) * 필요 크기(개수));
//	//// free(포인터 변수명): 사용한 메모리 반납. 포인터에 널값 입력. malloc() 사용 끝나면 메모리 다른 곳에 쓸 수 있게 됨.
//	
//	//// 메모리는 휘발성. 껐다 키면 잘 되는 이유. 유닉스가 가장 빠른 OS => C언어로 짬. 리눅스는 핀란드 대학원생이 유닉스 비싸서 만든 것.
//
//	//// calloc(): 0으로 값 초기화한 메모리 할당. 기능은 malloc()와 동일.
//	//// 함수 형식: 포인터 변수명 = (포인터 변수 데이터형*) calloc(포인터 변수 데이터형 크기(sizeof(자료형) * 필요 크기(개수));
//
//	//// realloc(): 메모리 크기 실시간 변경 함수
//	//// 함수 형식: 포인터 변수명 = (포인터 변수 데이터형*) realloc(기본 포인터 변수명(왼쪽에 선언한 것), 포인터 변수 데이터형 크기(sizeof(자료형) * 필요 크기(개수));
//
//	//int* p;
//	//int i;
//	//char ch;
//	//int cnt = 0;
//	//int data;
//
//	//printf("### 계산기 만들기 ### \n\n");
//
//	//printf("원하는 연산자(+ - *): ");
//	//scanf(" %c", &ch);
//	//printf("\n");
//
//	//p = (int*) malloc(sizeof(int) * 1);
//	//printf("1번째 숫자: ");
//	//scanf("%d", &p[0]);
//	//cnt++;
//
//	//for (i = 2 ; ; i++) {
//	//	printf("%d번째 숫자: ", i);
//	//	scanf("%d", &data);
//
//	//	if (data != 0)
//	//		p = (int*) realloc(p, sizeof(int) * i);
//	//	else
//	//		break;
//
//	//	p[i - 1] = data;
//	//	cnt++;
//	//}
//
//	//int result;
//
//	//switch (ch) {
//	//case '+':
//	//case '-': result = 0;
//	//case '*': result = 1;
//	//}
//
//	//for (i = 0; i < cnt; i++) {
//	//	switch (ch) {
//	//	case '+': result = result + p[i]; break;
//	//	case '-': result = result - p[i]; break;
//	//	case '*': result = result * p[i]; break;
//	//	default: printf("연산자 오류입니다. \n"); break;
//	//	}
//	//}
//	//
//	//switch (ch) {
//	//case '+': printf("입력 숫자 합 ==> %d \n", result); break;
//	//case '-': printf("입력 숫자 차 ==> %d \n", result); break;
//	//case '*': printf("입력 숫자 곱 ==> %d \n", result); break;
//	//default: break;
//	//}
//
//	//free(p);
//
//
//
//	//// 12-2) 배열 문제점
//	//char data[3][100]; // => [3][100] 메모리 지정으로 낭비됨. 이를 포인터 배열로 해결.
//	//int i;
//
//	//for (i = 0; i < 3; i++) {
//	//	printf("%d번째 문자열: ", i + 1);
//	//	gets(data[i]);
//	//}
//
//	//printf("\n -- 입력과 반대로 출력(2차원 배열) -- \n");
//	//for (i = 2; i >= 0; i--) {
//	//	printf("%d : %s \n", i + 1, data[i]);
//	//}
//
//
//	//// 12-3) 포인터 배열로 해결
//	//char* p[3]; // 포인터 배열 세 칸 지정.
//	//char imsi[100]; // => [3][100] 메모리 지정으로 낭비됨. 이를 포인터 배열로 해결.
//	//int i, size;
//
//	//for (i = 0; i < 3; i++) {
//	//	printf("%d번째 문자열: ", i + 1);
//	//	gets(imsi);
//
//	//	size = strlen(imsi);
//	//	p[i] = (char*)malloc(sizeof(char) * size + 1); // +1은 개행문자 때문에.
//
//	//	strcpy(p[i], imsi);
//	//}
//
//	//printf("\n -- 반대 순서로 출력(2차원 배열) -- \n");
//	//for (i = 2; i >= 0; i--) {
//	//	printf("%d : %s \n", i + 1, p[i]);
//	//}
//
//	//for (i = 0; i < 3; i++) {
//	//	free(p[i]);
//	//}
//
//
//
//	//// 13-1) 구조체: struct 구조체명{변수 여럿 선언;}; 
//	//// => 구조체 내부 변수 명을 활용해서 자료형 이미 선언된 변수로 바로 활용 가능. 
//
//	//// struct = 구조체 예약어, 구조체 이름 = 사용자 지정 
//	//struct bibim{
//	//	int a; // 구조체 멤버 변수
//	//	float b;
//	//}; // 뒤에 바로 구조체 이름 선언도 가능.
//
//	//// 구조체 변수 이름 선언
//	//struct bibim b1; 
//
//	//// 구조체 변수 이름.멤버 변수 이름
//	//b1.a = 10; 
//
//	//// 학생 10명, 과목 10개, 성적별로 총점수, 학점까지 내서 성적표 만들기. => 13-2, 426페이지 참고
//	//// struct student 만들고 변수 이름 s1, s2, s3 등으로 만들어서 다 합하고, 평균 내고(float형 강제 변환 필요), 학점도 내고.
//
//	//// 구조체 포인터 사용 시 값 넣을 때: &포인터이름->멤버변수
//
//
//	//// 13-2) 공용체: 하나의 공간, 메모리를 서로 다른 두 변수가 같이 사용.
//	//union 공용체형_이름 {
//	//	int 멤버_변수1;
//	//	char 멤버_변수2; // 멤버 변수 여러 개일 때 가장 큰 저장 공간이 공용체의 크기가 된다.
//	//}; 
//	//
//	//union 공용체형_이름 공용체_변수;
//
//	//공용체_변수.멤버_변수1;
//
//
//	//// 13-3) 열거형
//	// enum week { mon, tue, wed, thu, fri, sat, sun }; 
// 
//	//// 어떤 기능이 있고 이 기능은 뭐다 설명하고 소스 보여 주기.
//}