//#include <stdio.h>
//#include <conio.h> // _getch(), _kbhit() 함수 사용을 위한 헤더 파일.
//#include <Windows.h> // COORD 자료형 사용을 위한 헤더 파일.
//#include <time.h> 
//#include <stdbool.h> // bool() 함수 사용을 위한 헤더 파일.
//
//
//// typedef (자료형) (새로운 자료형 이름) => 기존 자료형을 다른 구조로 선언하는 것.
//typedef long clock_t; // https://dogrushdev.tistory.com/42
//clock_t startDropT, endT, startGroundT;
//
//int x = 8, y = 0;
//
//typedef int RECT;
//RECT blockSize;
//
//int blockForm;
//int blockRotation = 0;
//int key;
//
//
//// 테트리스 도형 개수 7, 각 도형 방향 개수 4, 세로 길이 4, 가로 길이 4
//int block[7][4][4][4] = {
//	{ // 1) T모양 블럭
//		{
//			{0,0,0,0},
//			{0,1,0,0},
//			{1,1,1,0},
//			{0,0,0,0}
//		},
//		{
//			{0,0,0,0},
//			{0,1,0,0},
//			{0,1,1,0},
//			{0,1,0,0}
//		},
//		{
//			{0,0,0,0},
//			{0,0,0,0},
//			{1,1,1,0},
//			{0,1,0,0}
//		},
//		{
//			{0,0,0,0},
//			{0,1,0,0},
//			{1,1,0,0},
//			{0,1,0,0}
//		}
//	},
//	{    // 2) 번개 블럭
//		{
//			{0,0,0,0},
//			{0,1,1,0},
//			{1,1,0,0},
//			{0,0,0,0}
//		},
//		{
//			{0,0,0,0},
//			{1,0,0,0},
//			{1,1,0,0},
//			{0,1,0,0}
//		},
//		{
//			{0,0,0,0},
//			{0,1,1,0},
//			{1,1,0,0},
//			{0,0,0,0}
//		},
//		{
//			{0,0,0,0},
//			{1,0,0,0},
//			{1,1,0,0},
//			{0,1,0,0}
//		}
//	},
//	{   // 3) 번개 블럭 반대
//		{
//			{0,0,0,0},
//			{1,1,0,0},
//			{0,1,1,0},
//			{0,0,0,0}
//		},
//		{
//			{0,0,0,0},
//			{0,1,0,0},
//			{1,1,0,0},
//			{1,0,0,0}
//		},
//		{
//			{0,0,0,0},
//			{1,1,0,0},
//			{0,1,1,0},
//			{0,0,0,0}
//		},
//		{
//			{0,0,0,0},
//			{0,1,0,0},
//			{1,1,0,0},
//			{1,0,0,0}
//		}
//	},
//	{   // 4) 1자형 블럭
//		{
//			{0,1,0,0},
//			{0,1,0,0},
//			{0,1,0,0},
//			{0,1,0,0}
//		},
//		{
//			{0,0,0,0},
//			{0,0,0,0},
//			{1,1,1,1},
//			{0,0,0,0}
//		},
//		{
//			{0,1,0,0},
//			{0,1,0,0},
//			{0,1,0,0},
//			{0,1,0,0}
//		},
//		{
//			{0,0,0,0},
//			{0,0,0,0},
//			{1,1,1,1},
//			{0,0,0,0}
//		}
//	},
//	{   // 5) L자형 블럭
//		{
//			{0,0,0,0},
//			{1,0,0,0},
//			{1,1,1,0},
//			{0,0,0,0}
//		},
//		{
//			{0,0,0,0},
//			{1,1,0,0},
//			{1,0,0,0},
//			{1,0,0,0}
//		},
//		{
//			{0,0,0,0},
//			{1,1,1,0},
//			{0,0,1,0},
//			{0,0,0,0}
//		},
//		{
//			{0,1,0,0},
//			{0,1,0,0},
//			{1,1,0,0},
//			{0,0,0,0}
//		}
//	},
//	{   // 6) L자형 블럭 반대
//		{
//			{0,0,0,0},
//			{0,0,1,0},
//			{1,1,1,0},
//			{0,0,0,0}
//		},
//		{
//			{1,0,0,0},
//			{1,0,0,0},
//			{1,1,0,0},
//			{0,0,0,0}
//		},
//		{
//			{0,0,0,0},
//			{1,1,1,0},
//			{1,0,0,0},
//			{0,0,0,0}
//		},
//		{
//			{0,0,0,0},
//			{1,1,0,0},
//			{0,1,0,0},
//			{0,1,0,0}
//		}
//	},
//	{   // 7) 네모 블럭
//		{
//			{0,0,0,0},
//			{0,1,1,0},
//			{0,1,1,0},
//			{0,0,0,0}
//		},
//		{
//			{0,0,0,0},
//			{0,1,1,0},
//			{0,1,1,0},
//			{0,0,0,0}
//		},
//		{
//			{0,0,0,0},
//			{0,1,1,0},
//			{0,1,1,0},
//			{0,0,0,0}
//		},
//		{
//			{0,0,0,0},
//			{0,1,1,0},
//			{0,1,1,0},
//			{0,0,0,0}
//		}
//	}
//};
//
//// 세로 15+1(아래 벽, 바닥)칸, 가로 10+2(양쪽 벽) 게임보드 칸 생성 
//int space[15 + 1][10 + 2] = {  
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,0,0,0,0,0,0,0,0,0,0,1},
//	{1,1,1,1,1,1,1,1,1,1,1,1}
//};
//
//
//// 사용자 정의 함수
//void Init();
//void gotoxy(int x, int y);
//void CreateRandomForm();
//bool CheckCrash(int x, int y);
//void DropBlock();
//void BlockToGround();
//void RemoveLine();
//void DrawMap();
//void DrawBlock();
//void InputKey();
//
//
//void Init() { // 콘솔창 하얀 커서 없애 주는 함수.
//	CONSOLE_CURSOR_INFO cursorInfo;
//	cursorInfo.bVisible = 0;
//	cursorInfo.dwSize = 1;
//	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo); 
//	srand(time(NULL)); // ran()가 고정적으로 나오지 않도록 time(NULL) 입력.
//}
//
//
//void gotoxy(int x, int y) {
//	COORD pos; // COORD는 x, y 두 가지만 가지는 구조체.
//	pos.X = x;
//	pos.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	// SetConxoleCursorPosition(콘솔창 핸들, 좌표);
//	// GetStdHandle(콘솔의 번호)로 콘솔창의 핸들 알 수 있음.
//	// STD_OUTPUT_HANDLE => 표준 콘솔 출력의 핸들을 반환함.
//	// 사용 예) gotoxy(10, 5); => 콘솔의 커서를 좌표(10, 5)로 이동.
//}
//
//
//void CreateRandomForm() {
//	blockForm = rand() % 7;
//} // 블럭 랜덤 출력. %7을 이용해 0~6까지 블럭 중 랜덤 값이 나오도록.
//
//
//bool CheckCrash(int x, int y) {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (block[blockForm][blockRotation][i][j] == 1) {
//				int t = space[i + y][j + x / 2];
//				if (t == 1 || t == 2) { // 벽일 때, 블럭일 때
//					return true; // 하나라도 겹친다면 true 반환.
//				}
//			}
//		}
//	}
//	return false;
//} 
//// 매개변수에 위치값을 넣고 블럭이 그 위치에 있을 때 충돌이 되는지 검사.
//// 충돌 감지 함수. x는 특수문자라서 자리를 2씩 차지하므로 x/2.
//
//
//void DropBlock() {
//	endT = clock();
//	if ((float)(endT - startDropT) >= 800) {
//		if (CheckCrash(x, y + 1) == true) return;
//		y++;
//		startDropT = clock();
//		startGroundT = clock();
//		system("cls");
//	}
//} // 0.8초마다 블럭 한 칸씩 아래로 내림.
//
//
//void BlockToGround() {
//	if (CheckCrash(x, y + 1) == true) {
//		if ((float)(endT - startGroundT) > 1500) {
//			// 현재 블록 저장
//			for (int i = 0; i < 4; i++) {
//				for (int j = 0; j < 4; j++) {
//					if (block[blockForm][blockRotation][i][j] == 1) {
//						space[i + y][j + x / 2] = 2;
//					}
//				}
//			}
//			x = 8;
//			y = 0;
//			CreateRandomForm();
//		}
//	}
//} 
//// 블럭이 1.5초동안 땅에 닿아있을 때 아무 동작 없다면 땅으로 변함.
//// 랜덤한 블럭을 만들고 위로 올림.
//
//
//void RemoveLine() {
//	for (int i = 15; i >= 0; i--) { // 벽라인 제외한 값
//		int cnt = 0;
//		for (int j = 1; j < 11; j++) { // 
//			if (space[i][j] == 2) {
//				cnt++;
//			}
//		}
//		if (cnt >= 10) { // 벽돌이 다 차있다면
//			for (int j = 0; i - j >= 0; j++) { // 그 줄에서부터 위로 올라가면서 한 칸씩 내리게
//				for (int x = 1; x < 11; x++) { // x=0, x=11 은 벽
//					if (i - j - 1 >= 0) // 천장이 아닐 때
//						space[i - j][x] = space[i - j - 1][x];
//					else      // 천장이면 더이상 블럭 없으니 당겨올 수 없어서 0 저장.
//						space[i - j][x] = 0;
//				}
//			}
//		}
//	}
//}
//// 한 줄이 블럭으로 채워지면 한 줄 제거. 그리고 남은 블럭들 한 칸씩 아래로 이동.
//
//
//void DrawMap() {
//	gotoxy(0, 0);
//	for (int i = 0; i < 16; i++) {
//		for (int j = 0; j < 12; j++) {
//			if (space[i][j] == 1) {
//				gotoxy(j * 2, i);
//				printf("□");
//			}
//			else if (space[i][j] == 2) {
//				gotoxy(j * 2, i);
//				printf("■");
//			}
//		}
//	}
//} // 맵의 형태와 쌓인 블럭 그리기.
//
//
//void DrawBlock() {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (block[blockForm][blockRotation][i][j] == 1) {
//				gotoxy(x + j * 2, y + i);
//				printf("■");
//			}
//		}
//	}
//}
//// 블럭 그리기. block[7][4][4][4] 4차원 배열. 
//// [7] 부분에 랜덤으로 숫자를 주면 랜덤한 블럭이 나타남.
//// [4] 회전키를 누를 때마다 증감해 주면 모양이 회전함.
//
//
//void InputKey() {
//	if (_kbhit()) {
//		key = _getch();
//		switch (key) {
//		case 32: // space
//			blockRotation++;
//			if (blockRotation >= 4) blockRotation = 0;
//			startGroundT = clock();
//			break;
//		case 75: // left
//			if (CheckCrash(x - 2, y) == false) {
//				x -= 2;
//				startGroundT = clock();
//			}
//			break;
//		case 77: // right
//			if (CheckCrash(x + 2, y) == false) {
//				x += 2;
//				startGroundT = clock();
//			}
//			break;
//		case 80: // down
//			if (CheckCrash(x, y + 1) == false)
//				y++;
//			break;
//		}
//		system("cls");
//	}
//}
//// _kbhit로 입력을 감지하고 _getch로 입력을 받음. _getch만 쓰면 입력받을 때까지 계속 대기.
//// StartGroundT = clock()을 하는 이유: startGroundT의 시간을 갱신해서 블럭이 땅으로 변하지 않게 하기 위함.
//// 해당 코드가 없다면 아무리 블럭을 이동, 모양을 바꿔도 땅에 닿으면 바로 다음 블럭이 나올 것.
//// system("cls")는 실행하는데 시간이 약간 걸리므로 사용을 최소화하기 위해 키를 누를 때나 땅에 떨어질 때만 실행.
//
//
//
//int main() {
//	Init();
//	startDropT = clock();
//	CreateRandomForm();
//
//	while (true) {
//		DrawMap();
//		DrawBlock();
//		DropBlock();
//		BlockToGround();
//		RemoveLine();
//		InputKey();
//	}
//	return 0;
//}
