//
// Created by Syed Nouman Ali Shah on 09/10/2024.
//

#include "Complex.h"

Complex::Complex(){
    realPart = 0;
    imgPart = 0;
}
Complex::Complex(double realPart, double imgPart){
    Complex::realPart = realPart;
    Complex::imgPart = imgPart;
}
void Complex::display(){
    std::cout<<"[ "<<realPart<<" + "<<imgPart<<" i ]   ";
}
Complex Complex::add(Complex c){
    double realPart = this->realPart + c.realPart;
    double imgPart = this->imgPart + c.imgPart;
    return Complex(realPart,imgPart);
}
Complex Complex::sub(Complex c){
    double realPart = this->realPart - c.realPart;
    double imgPart = this->imgPart - c.imgPart;
    return Complex(realPart,imgPart);
}
int Complex::getRealPart(){
    return realPart;
}
int Complex::getImgPart(){
    return imgPart;
}
void Complex::setRealPart(double realPart){
    Complex::realPart = realPart;
}
void Complex::setImgPart(double imgPart){
    Complex::imgPart = imgPart;
}
