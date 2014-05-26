#include <stdio.h>
#include <string.h>
#include "fizzbuzz.h"

void assert_equals(const char* chaine_attendue, char* chaine_souhaitee){
    if(strcmp(chaine_attendue, chaine_souhaitee) == 0) {
      printf(".");
    } else {
      printf("F");
    }
}

void peut_retourner_un() {
  assert_equals("1", repond(1));
}

void peut_retourner_deux() {
  assert_equals("2", repond(2));
}

void run_tests(){
    peut_retourner_un();
    //peut_retourner_deux();
}

int main(int argc, char *argv[]) {
  run_tests();
  return 0;
}
