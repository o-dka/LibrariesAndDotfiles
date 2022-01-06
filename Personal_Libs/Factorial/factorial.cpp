#include "factorial.h"
int factorial(int x_in) {
    int x_out = 1;
    while (x_in > 0) x_out *= x_in--; // n*(n-1)
    return x_out;
}
