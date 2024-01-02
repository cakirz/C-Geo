// Bu kod Mert B�lb�l ve Can �afak �ak�r taraf�ndan haz�rlanm��t�r
#include "DogruParcasi.h"
#include <cmath>
#include <sstream>
#include <iostream>

DogruParcasi::DogruParcasi() : nokta1(Nokta()), nokta2(Nokta()) {}
DogruParcasi::DogruParcasi(const Nokta& nokta1De�er, const Nokta& nokta2De�er) : nokta1(nokta1De�er), nokta2(nokta2De�er) {}
DogruParcasi::DogruParcasi(const DogruParcasi& di�er) : nokta1(di�er.nokta1), nokta2(di�er.nokta2) {}
DogruParcasi::DogruParcasi(const DogruParcasi& di�er, double oranla) : nokta1(di�er.nokta1), nokta2(di�er.nokta2) {



    double deltaX = nokta2.getX() - nokta1.getX();
    double deltaY = nokta2.getY() - nokta1.getY();
    nokta2.set(nokta1.getX() + oranla * deltaX, nokta1.getY() + oranla * deltaY);
}

Nokta DogruParcasi::getP1() const {
    return nokta1;
}

Nokta DogruParcasi::getP2() const {
    return nokta2;
}

void DogruParcasi::setP1(const Nokta& nokta1De�er) {
    nokta1 = nokta1De�er;
}

void DogruParcasi::setP2(const Nokta& nokta2De�er) {
    nokta2 = nokta2De�er;
}

void DogruParcasi::set(const Nokta& nokta1De�er, const Nokta& nokta2De�er) {
    nokta1 = nokta1De�er;
    nokta2 = nokta2De�er;
}

double DogruParcasi::uzunluk() const {
    double deltaX = nokta2.getX() - nokta1.getX();
    double deltaY = nokta2.getY() - nokta1.getY();
    return sqrt(deltaX * deltaX + deltaY * deltaY);
}

Nokta DogruParcasi::ortaNokta() const {
    double xOrta = (nokta1.getX() + nokta2.getX()) / 2.0;
    double yOrta = (nokta1.getY() + nokta2.getY()) / 2.0;
    return Nokta(xOrta, yOrta);
}

std::string DogruParcasi::toString() const {
    std::stringstream ss;
    ss << "DogruParcasi: P1" << nokta1.toString() << ", P2" << nokta2.toString();
    return ss.str();
}

void DogruParcasi::yazdir() const {
    std::cout << "Baslangic Noktasi: ";
    nokta1.yazdir();
    std::cout << "Bitis Noktasi: ";
    nokta2.yazdir();
}
