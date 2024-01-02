// Bu kod Mert Bülbül ve Can Þafak Çakýr tarafýndan hazýrlanmýþtýr
#include "Ucgen.h"
#include <cmath>
#include <sstream>


Ucgen::Ucgen(const Nokta& aDeðer, const Nokta& bDeðer, const Nokta& cDeðer) : a(aDeðer), b(bDeðer), c(cDeðer) {}


double Ucgen::alan() const {
    double s = cevre() / 2.0;
    return sqrt(s * (s - a.getX()) * (s - b.getX()) * (s - c.getX()));
}


double Ucgen::cevre() const {
    return a.getX() + b.getX() + c.getX();
}


double* Ucgen::acilar() const {
    double* angles = new double[3];

    angles[0] = acos((b.getX() * b.getX() + c.getX() * c.getX() - a.getX() * a.getX()) / (2 * b.getX() * c.getX()));
    angles[1] = acos((a.getX() * a.getX() + c.getX() * c.getX() - b.getX() * b.getX()) / (2 * a.getX() * c.getX()));
    angles[2] = acos((a.getX() * a.getX() + b.getX() * b.getX() - c.getX() * c.getX()) / (2 * a.getX() * b.getX()));

    return angles;
}


std::string Ucgen::toString() const {
    std::stringstream ss;
    ss << "Ucgen: A" << a.toString() << ", B" << b.toString() << ", C" << c.toString();
    return ss.str();
}
