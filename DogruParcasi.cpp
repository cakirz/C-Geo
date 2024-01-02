// Bu kod Mert Bülbül ve Can Þafak Çakýr tarafýndan hazýrlanmýþtýr
#include "DogruParcasi.h"
#include <cmath>
#include <sstream>
#include <iostream>

DogruParcasi::DogruParcasi() : nokta1(Nokta()), nokta2(Nokta()) {}
DogruParcasi::DogruParcasi(const Nokta& nokta1Deðer, const Nokta& nokta2Deðer) : nokta1(nokta1Deðer), nokta2(nokta2Deðer) {}
DogruParcasi::DogruParcasi(const DogruParcasi& diðer) : nokta1(diðer.nokta1), nokta2(diðer.nokta2) {}
DogruParcasi::DogruParcasi(const DogruParcasi& diðer, double oranla) : nokta1(diðer.nokta1), nokta2(diðer.nokta2) {



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

void DogruParcasi::setP1(const Nokta& nokta1Deðer) {
    nokta1 = nokta1Deðer;
}

void DogruParcasi::setP2(const Nokta& nokta2Deðer) {
    nokta2 = nokta2Deðer;
}

void DogruParcasi::set(const Nokta& nokta1Deðer, const Nokta& nokta2Deðer) {
    nokta1 = nokta1Deðer;
    nokta2 = nokta2Deðer;
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
