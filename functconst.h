struct Student {
  char name[20];
  int grade;
 };

void printStudent(struct Student person);
struct Student makeStudent();
void editStudent(struct Student *newStudent, char* newName, int newGrade);
