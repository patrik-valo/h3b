#include "Student.h"

void Student::setName(const std::string& n)   { name = n; }
void Student::setStudentNumber(int num)       { studentNumber = num; }
void Student::setGradeAverage(double g)       { gradeAverage = g; }

std::string Student::getName() const          { return name; }
int         Student::getStudentNumber() const { return studentNumber; }
double      Student::getGradeAverage() const  { return gradeAverage; }
