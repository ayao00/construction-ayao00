#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "functconst.h"

int main(){

  struct Student first = makeStudent();
  printStudent(first);
  editStudent(&first, "Alvin", 65);
  printStudent(first);
  struct Student second = makeStudent();
  printStudent(second);
}
