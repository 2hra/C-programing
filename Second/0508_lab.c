//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h> // ���� srand() ��� ���� �Լ�
//#include <time.h> // time() ��� ���� �Լ�
//
//void main() {
//	FILE *wtp;
//	wtp = fopen("c:\\temp\\ex11.txt", "w");
//
//	int random = 0;
//	int i;
//
//	printf("### �ζ� ��ȣ �ټ� �� ### \n\n");
//	fprintf(wtp, "### �ζ� ��ȣ �ټ� �� ### \n\n");
//
//	srand(time(NULL)); // ���� �ø��� ���� ���� ��������.
//
//	for (i = 0; i < 5; i++) {
//		random = rand() % 100 + 1; // 1���� 100������ ������ ����
//		printf("���� ���� => %d\n", random);
//		fprintf(wtp, "���� ���� => %d\n", random);
//	}
//	printf("\n");
//
//	fclose(wtp);
//}
//
//// �ζ� ���� ����� - 5�� ���� ���� ���� �ޱ�.