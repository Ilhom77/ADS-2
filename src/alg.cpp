// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t z) {
if (z == 0) {
      return 1;
    }
    if (z == 1) {
        return value;
    } else {
        return value * (pown(value, z - 1));
    }
}
uint64_t fact(uint16_t z) {
if (z <= 1) {
        return 1;
    } else {
        return z * fact(z - 1);
    }
}
double calcItem(double x, uint16_t z) {
  return (pown(x, z) / fact(z));
}
double expn(double x, uint16_t count) {
  double result_ex = 1;
    for (int z = count; z > 0; z--) {
        result_ex += pown(x, z) / fact(z);
    }
    return result_ex;
}
double sinn(double x, uint16_t count) {
if (count == 1) {
        return x;
    }
    double result_sin = 0;
    for (int z = count; z > 0; z--) {
        result_sin += (pown((-1), z - 1))*((pown(x, 2 * z - 1))
            /(fact(2 * z - 1)));
    }
    return result_sin;
}
double cosn(double x, uint16_t count) {
double result_cos = 0;
    if (count == 1) {
        return x;
    }
    for (int z = count; z > 0; z--) {
        result_cos += (pown((-1), z - 1))*((pown(x, 2 * z - 2))
            /(fact(2 * z - 2)));
    }
    return result_cos;
}
