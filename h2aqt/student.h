#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
std::string name;
int studentNumber = 0;
double gradeAverage = 0.0;

public:
// setterit
void setName(const std::string& n);
void setStudentNumber(int num);
void setGradeAverage(double g);

// getterit
std::string getName() const;
int         getStudentNumber() const;
double      getGradeAverage() const;
};

#endif
