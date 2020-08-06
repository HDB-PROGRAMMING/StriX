#if defined(_WIN32) || defined(WIN32) || defined(__MINGW32__) || defined(__BORLANDC__)
 #define __OS__ "WINDOWS"
 #include <Windows.h>

  #define FORE_COLOR_BLACK  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0)
  #define FORE_COLOR_RED    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED)
  #define FORE_COLOR_GREEN  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN) 
  #define FORE_COLOR_BLUE   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE)
  #define FORE_COLOR_YELLOW SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14)
  #define FORE_COLOR_PURPLE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5)
  #define FORE_COLOR_WHITE  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)

  #define BACK_COLOR_BLACK  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0)
  #define BACK_COLOR_RED    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 192)
  #define BACK_COLOR_GREEN  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 160)
  #define BACK_COLOR_BLUE   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 144)
  #define BACK_COLOR_YELLOW SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224)
  #define BACK_COLOR_PURPLE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 80)
  #define BACK_COLOR_WHITE  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240)

#elif defined(linux) || defined(__CYGWIN__)
  #define __OS__ "LINUX"

  #define FORE_COLOR_BLACK  printf("\033[0;30m")
  #define FORE_COLOR_RED    printf("\033[31m")
  #define FORE_COLOR_GREEN  printf("\033[32m")
  #define FORE_COLOR_BLUE   printf("\033[34m")
  #define FORE_COLOR_YELLOW printf("\033[1;33m")
  #define FORE_COLOR_PURPLE printf("\033[0;35m")
  #define FORE_COLOR_WHITE  printf("\033[0m")

  #define BACK_COLOR_BLACK  printf("\e[0;30m\u@\h:\W$\e[m")
  #define BACK_COLOR_RED    printf("\e[0;31m\u@\h:\W$\e[m")
  #define BACK_COLOR_GREEN  printf("\e[0;32m\u@\h:\W$\e[m")
  #define BACK_COLOR_BLUE   printf("\e[0;34m\u@\h:\W$\e[m")
  #define BACK_COLOR_YELLOW printf("\e[1;33m\u@\h:\W$\e[m")
  #define BACK_COLOR_PURPLE printf("\e[0;35m\u@\h:\W$\e[m")
  #define BACK_COLOR_WHITE  printf("\e[1;37m\u@\h:\W$\e[m")

#elif (defined(__APPLE__) || defined(__OSX__) || defined(__MACOS__)) && defined(__MACH__)
  #define __OS__ "MACOSX"

  #define FORE_COLOR_BLACK  printf("\033[0;30m")
  #define FORE_COLOR_RED    printf("\033[31m")
  #define FORE_COLOR_GREEN  printf("\033[32m")
  #define FORE_COLOR_BLUE   printf("\033[34m")
  #define FORE_COLOR_YELLOW printf("\033[1;33m")
  #define FORE_COLOR_PURPLE printf("\033[0;35m")
  #define FORE_COLOR_WHITE  printf("\033[0m")

  #define BACK_COLOR_BLACK  printf("\e[0;30m\u@\h:\W$\e[m")
  #define BACK_COLOR_RED    printf("\e[0;31m\u@\h:\W$\e[m")
  #define BACK_COLOR_GREEN  printf("\e[0;32m\u@\h:\W$\e[m")
  #define BACK_COLOR_BLUE   printf("\e[0;34m\u@\h:\W$\e[m")
  #define BACK_COLOR_YELLOW printf("\e[1;33m\u@\h:\W$\e[m")
  #define BACK_COLOR_PURPLE printf("\e[0;35m\u@\h:\W$\e[m")
  #define BACK_COLOR_WHITE  printf("\e[1;37m\u@\h:\W$\e[m")

#endif
// Here we defined console colors

#define ENTER     13
#define SPACE     32
#define UP_KEY    38
#define DOWN_KEY  40
#define LEFT_KEY  37
#define RIGHT_KEY 39
#define F1_KEY    112
#define F2_KEY    113
#define F3_KEY    114
#define F4_KEY    115
#define F5_KEY    116
#define F6_KEY    117
#define F7_KEY    118
#define F8_KEY    119
#define F9_KEY    120
#define F10_KEY   121
#define F11_KEY   122
#define F12_KEY   123
#define ESC_KEY   27
#define SHIFT_KEY 16
#define DEL_KEY   46
#define TAB_KEY   9
// Here we defined some keys