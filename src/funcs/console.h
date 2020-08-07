static void gotoxy(int x, int y) {
	if (strcmp("WINDOWS", __OS__)) {
		HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X = x;
		dwPos.Y = y;
		SetConsoleCursorPosition(hCon, dwPos);
	} else {
		printf("%c[%d;%df", 0x1B, y, x);
	}
}

static void hideCursor() {
	if (strcmp("WINDOWS", __OS__)) {
		HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO cci;
		cci.dwSize = 50;
		cci.bVisible = FALSE;
		SetConsoleCursorInfo(hCon, &cci);
	} else {
		printf("\e[?25l");
	}
}

static void showCursor() {
	if (strcmp("WINDOWS", __OS__)) {
		HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO cci;
		cci.dwSize = 20;
		cci.bVisible = TRUE;
		SetConsoleCursorInfo(hCon, &cci);
	}
	else {
		printf("\e[?25h");
	}
}