#include <iostream>
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

int main() {
// Car
Car car;
car.setBrand("Ferrari");
car.setModel("125 S");
car.setYear(1947);
car.printData();

// Rectangle
Rectangle rect;
rect.setWidth(4);
rect.setHeight(5);
std::cout << "Pinta-ala: " << rect.getArea()
<< ", Ymparysmitta: " << rect.getPerimeter() << std::endl;

// Student
Student s;
s.setName("Paavo Pesusieni");
s.setStudentNumber(13);
s.setGradeAverage(8.5);

std::cout << "Opiskelija: " << s.getName()
<< ", Opiskelijanumero: " << s.getStudentNumber()
<< ", Keskiarvo: " << s.getGradeAverage() << std::endl;

return 0;
}
