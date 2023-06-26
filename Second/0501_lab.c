//#define _CRT_SECURE_NO_WARNINGS 
// 
//#include <stdio.h> 
// 
//void main() { 
//	char s[100]; // 빈 배열 선언
//	int tmp = 0; // 아스키 코드 비교 후 담아 둘 빈 그릇 변수 선언
//	 
//	char* p; // 배열 주소값 저장할 포인터 선언
//	p = s; // 배열 주소값 저장
//	 
//	int i, k; // for문에 사용할 변수 선언
//	 
//	printf("정렬 전 배열: "); 
//	gets(s); 
//	
//	for (i = 0; i <= strlen(s); i++) { // 배열 크기만큼 for문 돌리기
//		for (k = i + 1; k < strlen(s); k++) { // 배열의 바로 옆과 비교할 for문
//			if (*(p + i) < *(p + k)) { // 배열 주소값 두 개 비교해서 작으면 두 값 위치 바꾸기 
//				tmp = *(p + i); 
//				*(p + i) = *(p + k); 
//				*(p + k) = tmp; 
//			} 
//		} 
//	} 
//	 
//	printf("정렬 후 배열: "); 
//	for (i = 0; i <= strlen(s); i++) { // 포인터 사용해서 배열 각 주소값으로 하나씩 출력
//		printf("%c", *(p + i)); 
//	} 
//	
//}  