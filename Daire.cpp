// Bu kod Mert B�lb�l ve Can �afak �ak�r taraf�ndan haz�rlanm��t�r
#include "Daire.h"
#include <cmath>
#include <sstream>
#include <iostream>

Daire::Daire() : merkez(Nokta()), yaricap(0.0) {}

Daire::Daire(const Nokta& merkezDe�eri, double yaricapDe�eri) : merkez(merkezDe�eri), yaricap(yaricapDe�eri) {}
Daire::Daire(const Daire& di�er) : merkez(di�er.merkez), yaricap(di�er.yaricap) {}
Daire::Daire(const Daire& di�er, double orant�la) : merkez(di�er.merkez), yaricap(di�er.yaricap* orant�la) {}

Nokta Daire::getMerkez() const {
    return merkez;
}

double Daire::getYaricap() const {
    return yaricap;
}

void Daire::setMerkez(const Nokta& merkezDe�eri) {
    merkez = merkezDe�eri;
}

void Daire::setYaricap(double yaricapDe�eri) {
    yaricap = yaricapDe�eri;
}

void Daire::set(const Nokta& merkezDe�eri, double yaricapDe�eri) {
    merkez = merkezDe�eri;
    yaricap = yaricapDe�eri;
}

double Daire::alan() const {
    return 3 * yaricap * yaricap;
}

double Daire::cevre() const {
    return 2 * 3 * yaricap;
}

bool Daire::kesisim(const Daire& di�er) const {
    double distance = sqrt(pow(merkez.getX() - di�er.merkez.getX(), 2) + pow(merkez.getY() - di�er.merkez.getY(), 2));
    return distance <= (yaricap + di�er.yaricap);
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
