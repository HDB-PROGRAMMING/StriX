#include "../StriX.h"
// Here we include the library

#ifndef NULL
#define NULL 0
#endif

#ifndef INFINITY
#define INFINITY 1.0/0.0
#endif

#ifndef NaN
#define NaN -1
#endif

#ifndef PI
#define PI 3.14159265358979323846
#endif

#ifndef e
#define e 2.71828
#endif

#ifndef GAMMA
#define GAMMA 0.577215664901532860606
#endif

#ifndef TAU
#define TAU 6.28318530717958647692528
#endif

#ifndef KAPREKAR
#define KAPREKAR 6174
#endif
// Here we declare necesary constants

static int toInt(double n) {
    int val = n;
    return val;
}

static int toInt(float n) {
    int val = n;
    return val;
}

static double toDouble(int n) {
    double val = n;
    return val;
}

static double toDouble(float n) {
    double val = n;
    return val;
}

static float toFloat(int n) {
    float val = n;
    return val;
}

static float toFloat(double n) {
    float val = n;
    return val;
}

static int sqrArea(int side) {
    return side * side;
}

static double sqrArea(double side) {
    return side * side;
}

static float sqrArea(float side) {
    return side * side;
}

static int rctnglArea(int base, int height) {
    return base * height;
}

static double rctnglArea(double base, double height) {
    return base * height;
}

static float rctnglArea(float base, float height) {
    return base * height;
}

static int trnglArea(int base, int height) {
    return (base * height) / 2;
}

static double trnglArea(double base, double height) {
    return (base * height) / 2;
}

static float trnglArea(float base, float height) {
    return (base * height) / 2;
}

static int rhombArea(int largestDiagonal, int smallestDiagonal) {
    return (largestDiagonal * smallestDiagonal) / 2;
}

static double rhombArea(double largestDiagonal, double smallestDiagonal) {
    return (largestDiagonal * smallestDiagonal) / 2;
}

static float rhombArea(float largestDiagonal, float smallestDiagonal) {
    return (largestDiagonal * smallestDiagonal) / 2;
}

static int rhomboidArea(int base, int height) {
    return base * height;
}

static double rhomboidArea(double base, double height) {
    return base * height;
}

static float rhomboidArea(float base, float height) {
    return base * height;
}

static int trapArea(int largestBase, int smallestBase, int height) {
    return ((largestBase + smallestBase) * height) / 2;
}

static double trapArea(double largestBase, double smallestBase, double height) {
    return ((largestBase + smallestBase) * height) / 2;
}

static float trapArea(float largestBase, float smallestBase, float height) {
    return ((largestBase + smallestBase) * height) / 2;
}

static int regPolygonArea(int perimeter, int apothema) {
    return (perimeter * apothema) / 2;
}

static double regPolygonArea(double perimeter, double apothema) {
    return (perimeter * apothema) / 2;
}

static float regPolygonArea(float perimeter, float apothema) {
    return (perimeter * apothema) / 2;
}

static int circArea(int radio) {
    return (radio * radio) * PI;
}

static double circArea(double radio) {
    return (radio * radio) * PI;
}

static float circArea(float radio) {
    return (radio * radio) * PI;
}

static int circLenght(int diameter) {
    return diameter * PI;
}

static double circLenght(double diameter) {
    return diameter * PI;
}

static float circLenght(float diameter) {
    return diameter * PI;
}

static int fib(int n) {
    int a = 0;
    int b = 1;
    while (n > 0) {
        a, b = b, a + b;
        n -= 1;
        return a;
    }
}

static int power(int base, int exp) {
    double res = base;
    for (int i; i <= exp; i++) {
        res *= base;
    }
    return res;
}

static double power(double base, int exp) {
    double res = base;
    for (int i; i <= exp; i++) {
        res *= base;
    }
    return res;
}

static float power(float base, int exp) {
    double res = base;
    for (int i; i <= exp; i++) {
        res *= base;
    }
    return res;
}

static int hypotenuse(int cat1, int cat2) {
    return sqroot((cat1 * cat1) + (cat2 * cat2));
}

static double hypotenuse(double cat1, double cat2) {
    return sqroot((cat1 * cat1) + (cat2 * cat2));
}

static float hypotenuse(float cat1, float cat2) {
    return sqroot((cat1 * cat1) + (cat2 * cat2));
}

static int fact(int n) {
    if (n < 0) return 0;
    else if (n > 1) return n * fact(n - 1);
    return 0;
}

static int abslt(int n) {
    if (n >= 0) return n;
    else return (n + (n * -2));
}

static double abslt(double n) {
    if (n >= 0) return n;
    else return (n + (n * -2));
}

static float abslt(float n) {
    if (n >= 0) return n;
    else return (n + (n * -2));
}

static double exp(int x) {
    return power(e, x);
}

static int max(int num1, int num2) {
    if (num1 > num2) return num1;
    else return num2;
}

static double max(double num1, double num2) {
    if (num1 > num2) return num1;
    else return num2;
}

static float max(float num1, float num2) {
    if (num1 > num2) return num1;
    else return num2;
}

static int min(int num1, int num2) {
    if (num1 < num2) return num1;
    else return num2;
}

static double min(double num1, double num2) {
    if (num1 < num2) return num1;
    else return num2;
}

static float min(float num1, float num2) {
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

static int toPositive(int n) {
    if (n >= 0) return n;
    else {
        return n + (n * -2);
    }
}

static double toPositive(double n) {
    if (n >= 0) return n;
    else {
        return n + (n * -2);
    }
}

static float toPositive(float n) {
    if (n >= 0) return n;
    else {
        return n + (n * -2);
    }
}

static int toNegative(int n) {
    if (n < 0) return n;
    else {
        return n - (n * 2);
    }
}

static double toNegative(double n) {
    if (n < 0) return n;
    else {
        return n - (n * 2);
    }
}

static float toNegative(float n) {
    if (n < 0) return n;
    else {
        return n - (n * 2);
    }
}

static bool isPI(int n) {
    if (n == PI) return true;
    else return false;
}

static bool isPI(double n) {
    if (n == PI) return true;
    else return false;
}

static bool isPI(float n) {
    if (n == PI) return true;
    else return false;
}

static bool isEULER(int n) {
    if (n == e) return true;
    else return false;
}

static bool isEULER(double n) {
    if (n == e) return true;
    else return false;
}

static bool isEULER(float n) {
    if (n == e) return true;
    else return false;
}

static bool isGAMMA(int n) {
    if (n == GAMMA) return true;
    else return false;
}

static bool isGAMMA(double n) {
    if (n == GAMMA) return true;
    else return false;
}

static bool isGAMMA(float n) {
    if (n == GAMMA) return true;
    else return false;
}

static bool isTAU(int n) {
    if (n == TAU) return true;
    else return false;
}

static bool isTAU(double n) {
    if (n == TAU) return true;
    else return false;
}

static bool isTAU(float n) {
    if (n == TAU) return true;
    else return false;
}

static bool isINFINITY(int n) {
    if (n == INFINITY) return true;
    else return false;
}

static bool isINFINITY(double n) {
    if (n == INFINITY) return true;
    else return false;
}

static bool isINFINITY(float n) {
    if (n == INFINITY) return true;
    else return false;
}

static bool isNAN(int n) {
    if (n == NaN) return true;
    else return false;
}

static bool isNAN(double n) {
    if (n == NaN) return true;
    else return false;
}

static bool isNAN(float n) {
    if (n == NaN) return true;
    else return false;
}

static void destroyVariable(int variable) {
    variable = NULL;
}

static void destroyVariable(double variable) {
    variable = NULL;
}

static void destroyVariable(float variable) {
    variable = NULL;
}