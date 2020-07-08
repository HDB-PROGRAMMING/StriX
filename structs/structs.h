#include "../StriX.h"
// Here we include the library

typedef struct {
	char* String;
} String;

typedef struct {
	int x, y, z;
} point;

typedef struct {
	double side;
	double area() {
		return side * side;
	}
} square;

typedef struct {
	double base, height;
	double area() {
		return base * height;
	}
} rectangle;

typedef struct {
	double base, height;
	double area() {
		return (base * height) / 2;
	}
} triangle;

typedef struct {
	double radio;
	double diametre = radio * 2;
	double area() {
		return (radio * radio) * PI;
	}
	double lenght() {
		return diametre * PI;
	}
} circle;

typedef struct {
	double largestDiagonal, smallestDiagonal;
	double area() {
		return (largestDiagonal * smallestDiagonal) / 2;
	}
} rhomb;

typedef struct {
	double base, height;
	double area() {
		return base * height;
	}
} rhomboid;

typedef struct {
	double largestBase, smallestBase, height;
	double area() {
		return ((largestBase + smallestBase) * height) / 2;
	}
} trapeze;

typedef struct {
	double perimetre, apothema;
	double area() {
		return (perimetre * apothema) / 2;
	}
} regPolygon;