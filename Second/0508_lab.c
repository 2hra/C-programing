//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h> // 난수 srand() 사용 위한 함수
//#include <time.h> // time() 사용 위한 함수
//
//void main() {
//	FILE *wtp;
//	wtp = fopen("c:\\temp\\ex11.txt", "w");
//
//	int random = 0;
//	int i;
//
//	printf("### 로또 번호 다섯 개 ### \n\n");
//	fprintf(wtp, "### 로또 번호 다섯 개 ### \n\n");
//
//	srand(time(NULL)); // 실행 시마다 랜덤 난수 나오도록.
//
//	for (i = 0; i < 5; i++) {
//		random = rand() % 100 + 1; // 1부터 100까지의 수에서 랜덤
//		printf("추출 숫자 => %d\n", random);
//		fprintf(wtp, "추출 숫자 => %d\n", random);
//	}
//	printf("\n");
//
//	fclose(wtp);
//}
//
//// 로또 복권 만들기 - 5개 숫자 난수 랜덤 받기.