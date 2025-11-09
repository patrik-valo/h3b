#include "Car.h"
#include <iostream>

void Car::setBrand(const std::string& b) { brand = b; }
void Car::setModel(const std::string& m) { model = m; }
void Car::setYear(int y) { year = y; }

void Car::printData() const {
std::cout << "Auto merkki: " << brand
<< ", Auto malli: " << model
<< ", Valmistu vuosi: " << year << std::endl;
}
