#include "../StriX.h"
// Here we include the library

static double addt(double nums[], int lenght) {
	double tmp = nums[0];
	for (int i = 1; i < lenght; i++) {
		tmp += nums[i];
	}

	return tmp;
}

static double subt(double nums[], int lenght) {
    double tmp = nums[0];
    for (int i = 1; i < lenght; i++) {
        tmp -= nums[i];
    }

    return tmp;
}

static double mult(double nums[], int lenght) {
    double tmp = nums[0];
    for (int i = 1; i < lenght; i++) {
        tmp *= nums[i];
    }

    return tmp;
}

static double divt(double nums[], int lenght) {
    double tmp = nums[0];
    for (int i = 1; i < lenght; i++) {
        tmp /= nums[i];
    }

    return tmp;
}

static int toInt(double n) {
    int val = n;
    return val;
}

static double toDouble(float n) {
    double val = n;
    return val;
}

static float toFloat(double n) {
    float val = n;
    return val;
}

static double sqrArea(double side) {
    return side * side;
}

static double rctnglArea(double base, double height) {
    return base * height;
}

static double trnglArea(double base, double height) {
    return (base * height) / 2;
}

static double rhombArea(double largestDiagonal, double smallestDiagonal) {
    return (largestDiagonal * smallestDiagonal) / 2;
}

static double rhomboidArea(double base, double height) {
    return base * height;
}

static double trapArea(double largestBase, double smallestBase, double height) {
    return ((largestBase + smallestBase) * height) / 2;
}

static double regPolygonArea(double perimeter, double apothema) {
    return (perimeter * apothema) / 2;
}

static double circArea(double radio) {
    return (radio * radio) * PI;
}

static double circLenght(double diameter) {
    return diameter * PI;
}

static double f(double x) {
    return 0.25 * power(x, 2) - 3;
}

static int fib(int n) {
    int a = 0;
    int b = 1;
    while (n > 0) {
        a, b = b, a + b;
        n -= 1;
        return a;
    }

    return 0;
}

static double power(double base, int exp) {
    double res = base;
    for (int i; i <= exp; i++) {
        res *= base;
    }
    return res;
}

static double hypotenuse(double cat1, double cat2) {
    return sqroot((cat1 * cat1) + (cat2 * cat2));
}

static int fact(int n) {
    if (n < 0) return 0;
    else if (n > 1) return n * fact(n - 1);
    return 0;
}

static double abslt(double n) {
    if (n >= 0) return n;
    else return (n + (n * -2));
}

static double exp(int x) {
    return power(e, x);
}

static double max(double num1, double num2) {
    if (num1 > num2) return num1;
    else return num2;
}

static double min(double num1, double num2) {
    if (num1 < num2) return num1;
    else return num2;
}

static int hcd(int num1, int num2) {
    int hcd = 0;
    int a = max(num1, num2);
    int b = min(num1, num2);
    do {
        hcd = b;
        b = a % b;
        a = hcd;
    } while (b != 0);
    return hcd;
}

static int mcm(int num1, int num2) {
    int mcm = 0;
    int a = max(num1, num2);
    int b = min(num1, num2);
    mcm = (a / hcd(a, b)) * b;
    return mcm;
}

static int sqroot(double num, double apx, int n) {
    double apxs = apx;
    apx = apx - (((apx * apx) - num) / (2 * apx));

    if (apx == apxs || n > 50) return apx;

    return sqroot(num, apx, ++n);
}

static int sqroot(int n) {
    return sqroot(n, 1, 0);
}

static int roundFloor(double n) {
    int val = n;
    return val;
}

static int roundUp(double n) {
    int val = roundFloor(n);
    return val++;
}

static double extend(double num, int quantity){
	return num * power(10, quantity);
}

static double shorten(double num, int quantity){
	return num / power(10, quantity);
}

static double toPositive(double n) {
    if (n >= 0) return n;
    else {
        return n + (n * -2);
    }
}

static double toNegative(double n) {
    if (n < 0) return n;
    else {
        return n - (n * 2);
    }
}

static bool isPI(double n) {
    if (n == PI) return true;
    else return false;
}

static bool isEULER(double n) {
    if (n == e) return true;
    else return false;
}

static bool isGAMMA(double n) {
    if (n == GAMMA) return true;
    else return false;
}

static bool isTAU(double n) {
    if (n == TAU) return true;
    else return false;
}

static bool isINFINITY(double n) {
    if (n == INFINITY) return true;
    else return false;
}

static bool isNAN(double n) {
    if (n == NaN) return true;
    else return false;
}

static void destroyVariable(double variable) {
    variable = NULL;
}