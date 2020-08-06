#pragma once
// Here we define that the module is only imported once

typedef struct {
	int x, y, z;
} POINT;

typedef struct {
	double side;
	double area() {
		return side * side;
	}
} SQUARE;

typedef struct {
	double base, height;
	double area() {
		return base * height;
	}
} RECTNGL;

typedef struct {
	double base, height;
	double area() {
		return (base * height) / 2;
	}
} TRNGL;

typedef struct {
	double radio;
	double diametre = radio * 2;
	double area() {
		return (radio * radio) * PI;
	}
	double lenght() {
		return diametre * PI;
	}
} CIRCLE;

typedef struct {
	double largestDiagonal, smallestDiagonal;
	double area() {
		return (largestDiagonal * smallestDiagonal) / 2;
	}
} RHOMB;

typedef struct {
	double base, height;
	double area() {
		return base * height;
	}
} RHOMBOID;

typedef struct {
	double largestBase, smallestBase, height;
	double area() {
		return ((largestBase + smallestBase) * height) / 2;
	}
} TRAPEZE;

typedef struct {
	double perimetre, apothema;
	double area() {
		return (perimetre * apothema) / 2;
	}
} REGPOL;