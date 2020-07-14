#include "../StriX.h"
// Here we include the library

static void swap(double num1, double num2) {
	double temp = num1;
	num1 = num2;
	num2 = temp;
}

static void mergeSort(int* array, int l, int m, int r) {
    int i, j, k, nl, nr;
    //size of left and right sub-arrays
    nl = m - l + 1; nr = r - m;
    int larr[nl], rarr[nr];
    //fill left and right sub-arrays
    for (i = 0; i < nl; i++)
        larr[i] = array[l + i];
    for (j = 0; j < nr; j++)
        rarr[j] = array[m + 1 + j];
    i = 0; j = 0; k = l;
    //marge temp arrays to real array
    while (i < nl && j < nr) {
        if (larr[i] <= rarr[j]) {
            array[k] = larr[i];
            i++;
        }
        else {
            array[k] = rarr[j];
            j++;
        }
        k++;
    }
    while (i < nl) {       //extra element in left array
        array[k] = larr[i];
        i++; k++;
    }
    while (j < nr) {     //extra element in right array
        array[k] = rarr[j];
        j++; k++;
    }
}

void sort(int* array, int l, int r) {
    int m;
    if (l < r) {
        int m = l + (r - l) / 2;
        // Sort first and second arrays
        sort(array, l, m);
        sort(array, m + 1, r);
        mergeSort(array, l, m, r);
    }
}

static int range(double end) {
    int nums[toInt(end)];
    for (int i; i < end; i++) {
        nums[i] = i;
    }
    return *nums;
}

static int range(double init, double end) {
    int nums[toInt(end)];
    for (int i = init; i < end; i++) {
        nums[i] = i;
    }
    return *nums;
}