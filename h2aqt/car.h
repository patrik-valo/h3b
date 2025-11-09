#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
std::string brand;
std::string model;
int year = 0;

public:
void setBrand(const std::string& b);
void setModel(const std::string& m);
void setYear(int y);

//tulostus
void printData() const;
};

#endif
