#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
double width  = 0.0;
double height = 0.0;

public:
//asettajat
void setWidth(double w);
void setHeight(double h);

double getArea() const;
double getPerimeter() const;
};

#endif

