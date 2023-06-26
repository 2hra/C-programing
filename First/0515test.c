#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>


//// 색상 변경 열거형
enum {
    BLACK,
    DARK_BLUE,
    DARK_GREEN,
    DARK_SKYBLUE,
    DARK_RED,
    DARK_VOILET,
    DAKR_YELLOW,
    GRAY,
    DARK_GRAY,
    BLUE,
    GREEN,
    SKYBLUE,
    RED,
    VIOLET,
    YELLOW,
    WHITE,
};


// 색상 변경 함수
void setColor(unsigned short text) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}


// 0~1까지 10개의 수, 한 숫자는 가로 4칸, 세로 5칸으로 그림
char* nums[10][5][4] = { // 포인터 배열 활용
{
        { "■","■","■","■" },
        { "■","  ","  ","■" },
        { "■","  ","  ","■" },
        { "■","  ","  ","■" },
        { "■","■","■","■" }
    },
    {
        { "  ","  ","  ","■" },
        { "  ","  ","  ","■" },
        { "  ","  ","  ","■" },
        { "  ","  ","  ","■" },
        { "  ","  ","  ","■" }
    },
    {
        { "■","■","■","■" },
        { "  ","  ","  ","■" },
        { "■","■","■","■" },
        { "■","  ","  ","  " },
        { "■","■","■","■" }
    },
    {
        { "■","■","■","■" },
        { "  ","  ","  ","■" },
        { "■","■","■","■" },
        { "  ","  ","  ","■" },
        { "■","■","■","■" }
    },
    {
        { "■","  ","  ","■" },
        { "■","  ","  ","■" },
        { "■","■","■","■" },
        { "  ","  ","  ","■" },
        { "  ","  ","  ","■" }
    },
    {
        { "■","■","■","■" },
        { "■","  ","  ","  " },
        { "■","■","■","■" },
        { "  ","  ","  ","■" },
        { "■","■","■","■" },
    },
    {
        { "■","  ","  ","  " },
        { "■","  ","  ","  " },
        { "■","■","■","■" },
        { "■","  ","  ","■" },
        { "■","■","■","■" }
    },
    {
        { "■","■","■","■" },
        { "■","  ","  ","■" },
        { "■","  ","  ","■" },
        { "  ","  ","  ","■" },
        { "  ","  ","  ","■" }
    },
    {
        { "■","■","■","■" },
        { "■","  ","  ","■" },
        { "■","■","■","■" },
        { "■","  ","  ","■" },
        { "■","■","■","■" }
    },
    {
        { "■","■","■","■" },
        { "■","  ","  ","■" },
        { "■","■","■","■" },
        { "  ","  ","  ","■" },
        { "  ","  ","  ","■" }
    }
};

char* blank[5][4] = {
    { "  ","  ","  ","  " },
    { "  ","  ","  ","  " },
    { "  ","  ","  ","  " },
    { "  ","  ","  ","  " },
    { "  ","  ","  ","  " }
};


// 콜론 모양 배열 선언
char* colon[5] = {
    " ",
    "■",
    " ",
    "■",
    " "
};

// 콤마 모양 배열 선언
char* comma[5] = {
    " ",
    " ",
    " ",
    " ",
    "■"
};


// AM, PM 모양 배열 선언
char* ampm[2][5][11] = {
    {
        { "  ","■","■","■","  ","  ","■","  ","  ","  ","■" },
        { "■","  ","  ","  ","■","  ","■","■","  ","■","■" },
        { "■","  ","  ","  ","■","  ","■","  ","■","  ","■" },
        { "■","■","■","■","■","  ","■","  ","  ","  ","■" },
        { "■","  ","  ","  ","■","  ","■","  ","  ","  ","■" }
    },
    {
        { "■","■","■","■","  ","  ","■","  ","  ","  ","■" },
        { "■","  ","  ","  ","■","  ","■","■","  ","■","■" },
        { "■","  ","  ","  ","■","  ","■","  ","■","  ","■" },
        { "■","■","■","■","  ","  ","■","  ","  ","  ","■" },
        { "■","  ","  ","  ","  ","  ","■","  ","  ","  ","■" }
    }
};



// 요일 출력 배열
char* weeks[7][5][17] = {
    {
        {"■","  ","  ","  ","■","  ","  ","  ","  ","  ","  ","  ","  ","  ","  "},
        {"■","■","  ","■","■","  ","■","■","■","■","  ","■","  ","  ","■"},
        {"■","  ","■","  ","■","  ","■","  ","  ","■","  ","■","■","  ","■"},
        {"■","  ","  ","  ","■","  ","■","  ","  ","■","  ","■","  ","■","■"},
        {"■","  ","  ","  ","■","  ","■","■","■","■","  ","■","  ","  ","■"}
},  {
        {"■","■","■","■","■","  ","  ","  ","  ","  ","  ","  ","  ","  ","  "},
        {"  ","  ","■","  ","  ","  ","■","  ","  ","■","  ","■","■","■","■"},
        {"  ","  ","■","  ","  ","  ","■","  ","  ","■","  ","■","■","■","■"},
        {"  ","  ","■","  ","  ","  ","■","  ","  ","■","  ","■","  ","  ","  "},
        {"  ","  ","■","  ","  ","  ","■","■","■","■","  ","■","■","■","■"}
},  {
        {"■","  ","  ","  ","■","  ","  ","  ","  ","  ","  ","  ","  ","  ","■"},
        {"■","  ","  ","  ","■","  ","■","■","■","■","  ","  ","  ","  ","■"},
        {"■","  ","■","  ","■","  ","■","■","■","■","  ","■","■","■","■"},
        {"■","■","  ","■","■","  ","■","  ","  ","  ","  ","■","  ","  ","■"},
        {"■","  ","  ","  ","■","  ","■","■","■","■","  ","■","■","■","■"}
},  {
        {"■","■","■","■","■","  ","■","  ","  ","  ","  ","  ","  ","  ","  "},
        {"  ","  ","■","  ","  ","  ","■","■","■","■","  ","■","  ","  ","■"},
        {"  ","  ","■","  ","  ","  ","■","  ","  ","■","  ","■","  ","  ","■"},
        {"  ","  ","■","  ","  ","  ","■","  ","  ","■","  ","■","  ","  ","■"},
        {"  ","  ","■","  ","  ","  ","■","  ","  ","■","  ","■","■","■","■"}
},  {
        {"■","■","■","■","■","  ","  ","  ","  ","  ","  ","  ","  ","  ","  "},
        {"■","  ","  ","  ","  ","  ","■","  ","■","  ","  ","■","  ","  ","  "},
        {"■","■","■","■","■","  ","■","■","  ","■","  ","  ","  ","  ","  "},
        {"■","  ","  ","  ","  ","  ","■","  ","  ","  ","  ","■","  ","  ","  "},
        {"■","  ","  ","  ","  ","  ","■","  ","  ","  ","  ","■","  ","  ","  "}
},  {
        {"■","■","■","■","■","  ","  ","  ","  ","  ","  ","  ","■","  ","  "},
        {"■","  ","  ","  ","  ","  ","■","■","■","■","  ","■","■","■","■"},
        {"■","■","■","■","■","  ","■","  ","■","■","  ","  ","■","  ","  "},
        {"  ","  ","  ","  ","■","  ","■","  ","■","■","  ","  ","■","  ","  "},
        {"■","■","■","■","■","  ","■","■","■","■","  ","  ","■","■","■"}
},  {
        {"■","■","■","■","■","  ","  ","  ","  ","  ","  ","  ","  ","  ","  "},
        {"■","  ","  ","  ","  ","  ","■","  ","  ","■","  ","■","  ","  ","■"},
        {"■","■","■","■","■","  ","■","  ","  ","■","  ","■","■","  ","■"},
        {"  ","  ","  ","  ","■","  ","■","  ","  ","■","  ","■","  ","■","■"},
        {"■","■","■","■","■","  ","■","■","■","■","  ","■","  ","  ","■"}
}
};


// 출력 좌표 배열 선언
int time_x[6] = { 24, 34, 48, 58, 72, 82 };
int colon_x[6] = { 44, 68 };
int ampm_x = 0;
int day_x[7] = { 0, 10, 24, 34, 48, 58, 72 };
int comma_x[2] = { 20, 44 };
int day_y = 7;


// 콘솔 창 출력 위치 지정 함수
void gotoxy(int x, int y) {
    COORD Pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
// setconxolecursorposition(콘솔창 핸들, 좌표); => 커서의 위치를 이동시키는 함수
// getstdhandle(콘솔의 번호)로 콘솔창의 핸들 알 수 있음
// STD_OUTPUT_HANDLE => 표준 콘솔 출력의 핸들을 반환함
// 사용 예) gotoxy(10, 5); => 콘솔의 커서를 좌표(10, 5)로 이동


// dn 자리에 n 숫자 출력 함수
void drawnum(int dn, int n) {
    int y, x;
    for (y = 0; y < 5; y++) {
        for (x = 0; x < 4; x++) {
            gotoxy((time_x[dn] + x * 2), y);
            // time_x[dn] => 시, 분, 초 출력 좌표 배열에서 좌표 가지고 옴

            if (n == 0 && (dn == 0 || dn == 2 || dn == 4)) {
                // '01'을 ' 1'로 출력하기 위해 앞자리가 0인지 확인
                // 단, 뒷자리까지 0이 되면 시간 읽기 어려울 수 있으므로 뒷자리는 0 유지
                // ex) '00:00:00' = > '  :  :  ', '12:00:03' => '12:  : 3'처럼 되지 않도록 앞자리 0만 공백 처리
                printf("%s", blank[y][x]);
            }
            else {
                switch (dn) {
                case 0:
                case 1: setColor(YELLOW); printf("%s", nums[n][y][x]); break; // 시간 출력 좌표 배열이 시일 경우 색상 변경
                case 2:
                case 3: setColor(BLUE); printf("%s", nums[n][y][x]); break; // 시간 출력 좌표 배열이 분일 경우 색상 변경
                case 4:
                case 5: setColor(GREEN); printf("%s", nums[n][y][x]); break; // 시간 출력 좌표 배열이 초일 경우 색상 변경
                default: break;
                }
            }
        }
    }
}


// 콜론 출력 함수
// n이 0이면 시-분 사이에, 1이면 분-초 사이에 출력
void drawcolon(int n) {
    int y = 0;

    for (y = 0; y < 5; y++) {
        gotoxy(colon_x[n], y);
        // colon_x[n] => 콜론 출력 좌표 배열에서 좌표 가지고 옴

        setColor(WHITE); // 콜론은 하얀색으로 출력
        printf("%s\n", colon[y]);
    }
}


// 시간 출력 함수
void drawtime(int h, int m, int s)
{
    drawnum(0, (h % 12) / 10); // 시의 앞자리
    drawnum(1, (h % 12) % 10); // 시의 뒷자리
    drawcolon(0); // 콜론
    drawnum(2, m / 10); // 분의 앞자리
    drawnum(3, m % 10); // 분의 뒷자리
    drawcolon(1); // 콜론
    drawnum(4, s / 10); // 초의 앞자리
    drawnum(5, s % 10); // 초의 뒷자리

    if (m == 0 && s == 0) // 정각 알람 소리(분과 초가 00일 때)
        printf("\a");
}


// AM, PM 출력 함수
void drawampm(int h) {
    int y, x;
    for (y = 0; y < 5; y++) {
        for (x = 0; x < 11; x++) {
            gotoxy((ampm_x + x * 2), y);
            if (h >= 00 && h <= 11) { // 오전 판단
                setColor(SKYBLUE);
                printf("%s", ampm[0][y][x]);
            }
            else { // 오후 판단
                setColor(SKYBLUE);
                printf("%s", ampm[1][y][x]);
            }
        };
    };
}


// 날짜 출력 함수
void drawdaynum(int dn, int n) {
    int y, x;
    for (y = 0; y < 5; y++) {
        for (x = 0; x < 4; x++) {
            gotoxy((day_x[dn] + x * 2), (y + day_y));
            setColor(DARK_GRAY);
            printf("%s", nums[n][y][x]);
        }
    }
}


// 요일 출력 함수
void drawweek(int dn, int n) {
    int y, x;
    for (y = 0; y < 5; y++) {
        for (x = 0; x < 15; x++) {
            gotoxy((day_x[dn] + x * 2), (y + day_y));
            setColor(VIOLET);
            printf("%s", weeks[n - 1][y][x]);
        }
    }
};


// 날짜 출력 함수
void drawday(int y, int m, int d, int w)
{
    drawdaynum(0, (((y + 1900) % 100) / 10)); // 연의 앞자리
    drawdaynum(1, ((y + 1900) % 10)); // 연의 뒷자리
    drawcomma(0); // 콤마
    drawdaynum(2, (m + 1) / 10); // 월의 앞자리
    drawdaynum(3, (m + 1) % 10); // 월의 뒷자리
    drawcomma(1); // 콤마
    drawdaynum(4, d / 10); // 일의 앞자리
    drawdaynum(5, d % 10); // 일의 뒷자리
    drawweek(6, w); // 요일
}


// 콤마 출력 함수
// n이 0이면 연-월 사이에, 1이면 월-일 사이에 출력
int drawcomma(int n) {
    int y = 0;

    for (y = 0; y < 5; y++) {
        gotoxy(comma_x[n], y + day_y);
        // comma_x[n] => 콤마 출력 좌표 배열에서 좌표 가지고 옴

        setColor(WHITE);
        printf("%s\n", comma[y]);
    }
}


// 커서 숨기는 함수에 사용되는 열거형 
typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE;

void setcursortype(CURSOR_TYPE c) { // 커서 숨기는 함수 
    // 함수의 인자로 1이 전달되면 커서가 나타남

    CONSOLE_CURSOR_INFO CurInfo;
    // CONSOLE_CURSOR_INFO => 구조체 포인터

    switch (c) {
    case NOCURSOR:
        CurInfo.dwSize = 1; // 커서 굵기 (1 ~ 100)
        CurInfo.bVisible = FALSE; // 커서 Visible TRUE(보임), FALSE(숨김)
        break;
    case SOLIDCURSOR:
        CurInfo.dwSize = 100;
        CurInfo.bVisible = TRUE;
        break;
    case NORMALCURSOR:
        CurInfo.dwSize = 20;
        CurInfo.bVisible = TRUE;
        break;
    }

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
    // SetConsoleCursorInfo => 지정된 콘솔 스크린 버퍼에 대하여 커서의 형태 (두께 or 노출 여부) 설정
    // SetConsoleCursorInfo(표준 출력 핸들, CONSOR_CURSOR_INFO 구조체)
    // GetStdHandle(STD_OUTPUT_HANDLE) => 표준 출력 핸들을 가지고 오고,
    // CONSOR_CURSOR_INFO 구조체 포인터의 curinfo 주소(0) 가져와서 안 보이게 하겠다는 것
}


int main(void)
{
    setcursortype(NOCURSOR); // 전자 시계는 커서 보일 필요가 없으니 숨김


    time_t now, before; // time_t => 1970년 1 월 1일 자정 부터 현재까지 흐른 초 수

    struct tm nt; // struct tm => 년월일시분초 단위로 멤버 변수 가지는 구조체


    // 초 단위 시간 구하는 함수
    now = before = time(0);


    // localtime_s() => 지역 시각 구하는 함수
    localtime_s(&nt, &now);
    // tm 구조체 nt에 time_t 타입의 변수 now의 시각 정보를 tm 구조체 형식으로 바꿔서 저장


    gotoxy(0, 14); printf("아무 키나 누르면 프로그램 종료합니다.");


    // 현재 시각 출력
    drawtime(nt.tm_hour, nt.tm_min, nt.tm_sec); // struct tm 구조체의 멤버 변수 시, 분, 초 불러와서 시간 출력에 사용
    drawampm(nt.tm_hour); // 시를 나타내는 멤버 변수 사용해서 AM, PM 출력에 사용
    drawday(nt.tm_year, nt.tm_mon, nt.tm_mday, nt.tm_wday); // 년, 월, 일, 요일 멤버 변수 사용해서 날짜 출력에 사용


    while (_kbhit() == 0) // 입력 있으면 반복문 벗어나면서 시계 프로그램 종료
    {
        now = time(0); // 초 단위 시간 구함
        if (now != before) // 다르면
        {
            before = now; // 현재 초 단위 시간 기억하고
            localtime_s(&nt, &now); // 지역 시각 구함
            drawtime(nt.tm_hour, nt.tm_min, nt.tm_sec); // 현재 시각 출력
        }
    }

    gotoxy(0, 16); setColor(WHITE);

    return 0;
}