#include <stdint.h>
#include <math.h>
#include "dec64.h"
#include "dec64_util.h"

int32_t dec64_int32(dec64 number) {
  return (int32_t)dec64_int(number);
}

double dec64_double(dec64 number) {
  // TODO: calculations could be done in dec64?
  return (double)dec64_coefficient(number) * pow(10, dec64_exponent(number));
}

dec64 dec64_from_int32(int32_t i) { 
  return dec64_new(i,0); 
}
dec64 dec64_from_double(double d) {
}
