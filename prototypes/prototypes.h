static int toInt(double n);
static int toInt(float n);
static double toDouble(int n);
static double toDouble(float n);
static float toFloat(int n);
static float toFloat(double n);
static int sqrArea(int side);
static double sqrArea(double side);
static float sqrArea(float side);
static int rctnglArea(int base, int height);
static double rctnglArea(double base, double height);
static float rctnglArea(float base, float height);
static int trnglArea(int base, int height);
static double trnglArea(double base, double height);
static float trnglArea(float base, float height);
static int rhombArea(int largestDiagonal, int smallestDiagonal);
static double rhombArea(double largestDiagonal, double smallestDiagonal);
static float rhombArea(float largestDiagonal, float smallestDiagonal);
static int rhomboidArea(int base, int height);
static double rhomboidArea(double base, double height);
static float rhomboidArea(float base, float height);
static int trapArea(int largestBase, int smallestBase, int height);
static double trapArea(double largestBase, double smallestBase, double height);
static float trapArea(float largestBase, float smallestBase, float height);
static int regPolygonArea(int perimeter, int apothema);
static double regPolygonArea(double perimeter, double apothema);
static float regPolygonArea(float perimeter, float apothema);
static int circArea(int radio);
static double circArea(double radio);
static float circArea(float radio);
static int circLenght(int diameter);
static double circLenght(double diameter);
static float circLenght(float diameter);
static int fib(int n);
static int power(int base, int exp);
static double power(double base, int exp);
static float power(float base, int exp);
static int hypotenuse(int cat1, int cat2);
static double hypotenuse(double cat1, double cat2);
static float hypotenuse(float cat1, float cat2);
static int fact(int n);
static int abslt(int n);
static double abslt(double n);
static float abslt(float n);
static double exp(int x);
static int max(int num1, int num2);
static double max(double num1, double num2);
static float max(float num1, float num2);
static int min(int num1, int num2);
static double min(double num1, double num2);
static float min(float num1, float num2);
static int hcd(int num1, int num2);
static int mcm(int num1, int num2);
static int sqroot(double num, double apx, int n);
static int sqroot(int n);
static int roundFloor(double n);
static int roundUp(double n);
static int toPositive(int n);
static double toPositive(double n);
static float toPositive(float n);
static int toNegative(int n);
static double toNegative(double n);
static float toNegative(float n);
static bool isPI(int n);
static bool isPI(double n);
static bool isPI(float n);
static bool isEULER(int n);
static bool isEULER(double n);
static bool isEULER(float n);
static bool isGAMMA(int n);
static bool isGAMMA(double n);
static bool isGAMMA(float n);
static bool isTAU(int n);
static bool isTAU(double n);
static bool isTAU(float n);
static bool isINFINITY(int n);
static bool isINFINITY(double n);
static bool isINFINITY(float n);
static bool isNAN(int n);
static bool isNAN(double n);
static bool isNAN(float n);
static void destroyVariable(int variable);
static void destroyVariable(double variable);
static void destroyVariable(float variable);
// Here we defined Maths' functions

static void swap(int num1, int num2);
static void swap(float num1, float num2);
static void mergeSort(int* array, int l, int m, int r);
void sort(int* array, int l, int r);
// Here we defined Data's functions

static double energy(double mass);
static double force(double mass, double acceleration);
static bool fasterThanLight(int n);
static bool fasterThanLight(double n);
static bool fasterThanLight(float n);
static bool slowerThanLight(int n);
static bool slowerThanLight(double n);
static bool slowerThanLight(float n);
static bool fasterThanSound(int n);
static bool fasterThanSound(double n);
static bool fasterThanSound(float n);
static bool slowerThanSound(int n);
static bool slowerThanSound(double n);
static bool slowerThanSound(float n);
// Here we defined Physics' functions