// Bu kod Mert B�lb�l ve Can �afak �ak�r taraf�ndan haz�rlanm��t�r
#include "Nokta.h"
#include <iostream>
#include <sstream>


Nokta::Nokta() : x(0.0), y(0.0) {}

Nokta::Nokta(double xKordinat�, double yKordinat�) : x(xKordinat�), y(yKordinat�) {}

Nokta::Nokta(const Nokta& di�er) : x(di�er.x), y(di�er.y) {}

Nokta::Nokta(const Nokta& di�er, double xOfset, double yOfset) : x(di�er.x + xOfset), y(di�er.y + yOfset) {}


double Nokta::getX() const {
    return x;
}

double Nokta::getY() const {
    return y;
}


void Nokta::setX(double xKordinat�) {
    x = xKordinat�;
}

void Nokta::setY(double yKordinat�) {
    y = yKordinat�;
}

void Nokta::set(double xKordinat�, double yKordinat�) {
    x = xKordinat�;
    y = yKordinat�;
}


void Nokta::yazdir() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}


std::string Nokta::toString() const {
    std::stringstream ss;
    ss << "(" << x << ", " << y << ")";
    return ss.str();
}
