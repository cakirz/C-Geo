// Bu kod Mert Bülbül ve Can Þafak Çakýr tarafýndan hazýrlanmýþtýr
#include "Daire.h"
#include <cmath>
#include <sstream>
#include <iostream>

Daire::Daire() : merkez(Nokta()), yaricap(0.0) {}

Daire::Daire(const Nokta& merkezDeðeri, double yaricapDeðeri) : merkez(merkezDeðeri), yaricap(yaricapDeðeri) {}
Daire::Daire(const Daire& diðer) : merkez(diðer.merkez), yaricap(diðer.yaricap) {}
Daire::Daire(const Daire& diðer, double orantýla) : merkez(diðer.merkez), yaricap(diðer.yaricap* orantýla) {}

Nokta Daire::getMerkez() const {
    return merkez;
}

double Daire::getYaricap() const {
    return yaricap;
}

void Daire::setMerkez(const Nokta& merkezDeðeri) {
    merkez = merkezDeðeri;
}

void Daire::setYaricap(double yaricapDeðeri) {
    yaricap = yaricapDeðeri;
}

void Daire::set(const Nokta& merkezDeðeri, double yaricapDeðeri) {
    merkez = merkezDeðeri;
    yaricap = yaricapDeðeri;
}

double Daire::alan() const {
    return 3 * yaricap * yaricap;
}

double Daire::cevre() const {
    return 2 * 3 * yaricap;
}

bool Daire::kesisim(const Daire& diðer) const {
    double distance = sqrt(pow(merkez.getX() - diðer.merkez.getX(), 2) + pow(merkez.getY() - diðer.merkez.getY(), 2));
    return distance <= (yaricap + diðer.yaricap);
}

std::string Daire::toString() const {
    std::stringstream ss;
    ss << "Daire: Merkez" << merkez.toString() << ", Yaricap: " << yaricap;
    return ss.str();
}

void Daire::yazdir() const {
    std::cout << "Merkez Noktasi: ";
    merkez.yazdir();
    std::cout << "Yaricap: " << yaricap << std::endl;
}
