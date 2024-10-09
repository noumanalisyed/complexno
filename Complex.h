//
// Created by Syed Nouman Ali Shah on 09/10/2024.
//

#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex {
public:
    Complex();
    Complex(double realPart, double imgPart);
    void display();
    Complex add(Complex c);
    Complex sub(Complex c);

    int getRealPart();
    int getImgPart();
    void setRealPart(double realPart);
    void setImgPart(double realPart);

private:
    double realPart;
    double imgPart;
};


#endif //COMPLEX_H
