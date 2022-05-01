#include <cstdint>
#include "alg.h"
double pown(double value, uint16_t n) {
  double x = 1;
    for (uint16_t i = 1; i <= n; i++) {
        x = x * value;
    }
    return x;
}
uint64_t fact(uint16_t n) {
  uint64_t x = 1;
    if (n == 1) {
        return 1;
    } else {
        for (uint16_t i = 1; i <= n; i++) {
            x = x * i;
        }
    }
    return x;
}
double calcItem(double x, uint16_t n) {
  double f = fact(n);
    double st = pown(x, n);
    double res = st / f;
    return (res);
}
double expn(double x, uint16_t count) 
  double z = 1;
    for (uint16_t i = 1; i <= count; i++) {
        z = z + calcItem(x, i);
    }
    return z;
}
double sinn(double x, uint16_t count) {
  double z = 0;
    for (uint16_t i = 1; i <= count; i++) {
        z = z + (pown(-1, i - 1) * calcItem(x, 2 * i - 1));
    }
    return z;
}
double cosn(double x, uint16_t count) {
  double z = 0;
    for (uint16_t i = 1; i <= count; i++) {
        z = z + (pown(-1, i - 1) * calcItem(x, 2 * i - 2));
    }
    return z;
}
