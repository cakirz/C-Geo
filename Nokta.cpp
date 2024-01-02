// Bu kod Mert Bülbül ve Can Þafak Çakýr tarafýndan hazýrlanmýþtýr
#include "Nokta.h"
#include <iostream>
#include <sstream>


Nokta::Nokta() : x(0.0), y(0.0) {}

Nokta::Nokta(double xKordinatý, double yKordinatý) : x(xKordinatý), y(yKordinatý) {}

Nokta::Nokta(const Nokta& diðer) : x(diðer.x), y(diðer.y) {}

Nokta::Nokta(const Nokta& diðer, double xOfset, double yOfset) : x(diðer.x + xOfset), y(diðer.y + yOfset) {}


double Nokta::getX() const {
    return x;
}

double Nokta::getY() const {
    return y;
}


void Nokta::setX(double xKordinatý) {
    x = xKordinatý;
}

void Nokta::setY(double yKordinatý) {
    y = yKordinatý;
}

void Nokta::set(double xKordinatý, double yKordinatý) {
    x = xKordinatý;
    y = yKordinatý;
}


void Nokta::yazdir() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}


std::string Nokta::toString() const {
    std::stringstream ss;
    ss << "(" << x << ", " << y << ")";
    return ss.str();
}
