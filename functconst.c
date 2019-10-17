#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "functconst.h"

char names [4][20] = {"Alvin", "Tammy", "Bernard", "Sharon"};

void printStudent(struct Student person){
  printf("Student info:\n");
  printf("Name:\t%s\n", person.name);
  printf("Grade:\t%d\n\n", person.grade);
}

struct Student makeStudent(){
  struct Student newStudent;
  strcpy(newStudent.name, names[rand() % 4]);
  newStudent.grade = rand() % 101;
  return newStudent;
}

void editStudent(struct Student *newStudent, char* newName, int newGrade) {
  strncpy(newStudent->name, newName, 100);
  newStudent->grade = newGrade;
}
