#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "functconst.h"

int main(){
  srand(time(0));
  struct Student first = makeStudent();
  printStudent(first);
  editStudent(&first, "Alvin", 65);
  printStudent(first);
  struct Student second = makeStudent();
  printStudent(second);
}
