//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//
//void main() {
//
//	// chapter 08) 연습문제
//	// 1) ary[3]
//	 
//	// 2) 1, 10, 12, 15 => printf("%d", sizeof(ary)/sizeof(char));
//	 
//	// 3) 9
//	int ary[4];
//	int hap = 0;
//	int i;
//	for (i = 0; i <= 3; i++) {
//		printf("%d번째 숫자 입력: ", i + 1);
//		scanf("%d", &ary[i]);
//	}
//	for (i = 3; i > 0; i--) { // 1에서 끝나서 ary[0] = 1은 안 더해짐.
//		printf("%d \n", ary[i]);
//		hap += ary[i];
//	}
//	printf("합은 %d \n", hap);
//	
//	// 4)
//	int ary[3] = { 100, 200 }; // 실행 가능
//	int ary0[] = { 100, 200, 300, 400 }; // 실행 가능
//	//int ary1[3] = { 100, 200, 300, 400 }; // 선언 크기보다 초기화값이 많으면 컴파일 오류
//	 
//	// 5)
//	short int ary[] = { 1.1, 2.2, 3.3, 4.4 };
//	printf("%d \n", sizeof(ary) / 2);
//	 
//	// 6) VsaSui
//	char str[13] = "VisualStudio";
//	int i;
//	for (i = 0; i < 13; i += 2)
//		printf("%c", str[i]);
//	 
//	// 7) puts(), strcmp(), strlen(), strcat()
//	
//	// 8) [0][0] 9 8 7 / [1][0] 6 5 4
//	int ary[2][3];
//	int i, k;
//	int num = 10;
//	for (i = 0; i < 2; i++)
//		for (k = 0; k < 3; k++)
//			ary[i][k] = --num;
//	for (i = 0; i < 2; i++) {
//		for (k = 0; k < 3; k++)
//			printf("%3d", ary[i][k]);
//		printf("\n");
//	}
//	 
//	// 9) 
//	char str[100];
//	char old, new;
//	int i;
//	printf("여러 글자 입력: "); // IT CookBook
//	gets(str);
//	printf("기존 문자와 새로운 문자: ");
//	scanf(" %c %c", &old, &new);
//	for (i = strlen(str); i >= 0; i--) {
//		if (str[i] == old) printf("%c", new);
//		else printf("%c", str[i]);
//	}
//
//
//
//	// chapter 09) 연습문제
//	// 1) 데이터를 넣는 것을 pop, 빼는 것을 push라고 부른다.(반대다) / FILO 구조가 아니라 LIFO 구조이다. / top은 가장 아래에 있는 데이터를 가리킨다.(top은 현재 위치가 맞다)
//	
//	// 2) num2의 주소는 *num2로 접근할 수 있다. => 포인터 선언 안 해서 없다.
//	int num1, num2;
//	num1 = 123;
//	num2 = 456;
//	num2 = num1;
//	printf("%d => %d, size %d, %d => %d, size %d \n", num1, &num1, sizeof(num1), num2, &num2, sizeof(num2));
//	
//	// 3) ary[0]의 주소는 &ary[0]이고, ary[0]의 값은 100이다. / &ary[2]와 ary+2는 같은 주소이다.
//	int ary[3] = { 100,200,300 };
//	printf("주소 = %d, 값 = %d, &ary[0]+&ary[1] = 오류, &ary[2] = %d, ary+2 = %d \n", &ary[0], ary[0], &ary[2], ary + 2);
//	
//	// 4) 정수형 포인터 변수는 4바이트, 문자형 포인터 변수는 1바이트(뭐든 4바이트가 맞다) / 포인터 변수를 선언할 때는 앞에 & 기호를 붙인다. => * / int *p로 포인터 선언하면 &p = 100으로 값을 대입할 수 있다. => p = &변수로 대입
//	 
//	// 5) 'K'를 출력하기 위해서는 c와 *p를 출력해야 한다.
//	char c;
//	char* p;
//	c = 'K';
//	p = &c;
//	printf("%c %c", c, *p);
//	
//	// 6) int형 포인터는 4바이트의 크기다. / 포인터는 데이터 형식과 관련없이 모두 4바이트의 크기다.
//    
//	// 7) ZZ
//	char ch;
//	char* p;
//	char* q;
//	ch = 'K';
//	q = &ch;
//	ch = 'M';
//	p = &ch;
//	ch = 'Z';
//	printf("%c %c", *q, *p);
//	
//	// 8)
//	char ary[25] = "IT 1234 @$% CookBook";
//	char* p;
//	int i;
//	p = ary;
//	int diff = 'a' - 'A';
//	for (i = sizeof(ary) - 2; i >= 0; i--) {
//		if (*(p + i) >= 'A' && *(p + i) <= 'Z')
//			*(p + i) += diff;
//		else if (*(p + i) >= 'a' && *(p + i) <= 'z') 
//			*(p + i) -= diff;
//		printf("%c", *(p + i));
//	}
//	
//	// 9)
//	char s[40];
//	int i, k, tmp;
//	char* p = s;
//	printf("정렬 전 문자열: ");
//	gets(s);
//	for (i = 0; i <= strlen(s) ; i++) {
//		for (k = i + 1; k < strlen(s); k++) {
//			if (*(p + i) < *(p + k)) {
//				tmp = *(p + i);
//				*(p + i) = *(p + k);
//				*(p + k) = tmp;
//			}
//		}
//	}
//	printf("정렬 후 문자열: ");
//	for (i = 0; i <= strlen(s); i++)
//		printf("%c", *(p + i));
//	printf("\n");
//}