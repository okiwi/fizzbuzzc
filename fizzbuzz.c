#include "fizzbuzz.h"
#include <stdio.h>


char* repond(int question) {
  char* buffer;
  sprintf(buffer, "%d", question);
  return buffer;
}
