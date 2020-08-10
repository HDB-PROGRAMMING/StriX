static int    addt(int    nums[], int lenght);
static double addt(double nums[], int lenght);
static float  addt(float  nums[], int lenght);
static int    subt(int    nums[], int lenght);
static double subt(double nums[], int lenght);
static float  subt(float  nums[], int lenght);
static int    mult(int    nums[], int lenght);
static double mult(double nums[], int lenght);
static float  mult(float  nums[], int lenght);
static int    divt(int    nums[], int lenght);
static double divt(double nums[], int lenght);
static float  divt(float  nums[], int lenght);
static int    remt(int    nums[], int lenght);
static int    powt(int    nums[], int lenght);
static double powt(double nums[], int lenght);
static float  powt(float  nums[], int lenght);
static int toInt(double n);
static double toDouble(float n);
static float toFloat(double n);
static double sqrArea(double side);
static double rctnglArea(double base, double height);
static double trnglArea(double base, double height);
static double rhombArea(double largestDiagonal, double smallestDiagonal);
static double rhomboidArea(double base, double height);
static double trapArea(double largestBase, double smallestBase, double height);
static double regPolygonArea(double perimeter, double apothema);
static double circArea(double radio);
static double circLenght(double diameter);
static int* fib(int n);
static double power(double base, int exp);
static double hypotenuse(double cat1, double cat2);
static int fact(int n);
static double abslt(double n);
static double exp(int x);
static double max(double num1, double num2);
static double min(double num1, double num2);
static int hcd(int num1, int num2);
static int mcm(int num1, int num2);
static int sqroot(double num, double apx, int n);
static int sqroot(int n);
static int roundFloor(double n);
static int roundUp(double n);
static double extend(double num, int quantity);
static double shorten(double num, int quantity);
static double toPositive(double n);
static double toNegative(double n);
static bool isPI(double n);
static bool isEULER(double n);
static bool isGAMMA(double n);
static bool isTAU(double n);
static bool isINFINITY(double n);
static bool isNAN(double n);
static double* destroyVariable(double* variable);
// Here we defined Maths' functions

static void swap(double num1, double num2);
static void mergeSort(int* array, int l, int m, int r);
void sort(int* array, int l, int r);
static int range(double end);
static int range(double init, double end);
// Here we defined Data's functions

static double energy(double mass);
static double force(double mass, double acceleration);
static bool fasterThanLight(double n);
static bool slowerThanLight(double n);
static bool fasterThanSound(double n);
static bool slowerThanSound(double n);
// Here we defined Physics' functions

static void gotoxy(int x, int y);
static void hideCursor();
static void showCursor();
// Here we defined Console's functions