// Bu kod Mert B�lb�l ve Can �afak �ak�r taraf�ndan haz�rlanm��t�r
#pragma once
#include "Nokta.h"

class Daire {




private:
    Nokta merkez;
    double yaricap;




public:
    Daire();
    Daire(const Nokta& merkezDe�eri, double yaricapDe�eri);
    Daire(const Daire& di�er);
    Daire(const Daire& di�er, double orant�la);

    Nokta getMerkez() const;
    double getYaricap() const;

    void setMerkez(const Nokta& merkezDe�eri);
    void setYaricap(double yaricapDe�eri);
    void set(const Nokta& merkezDe�eri, double yaricapDe�eri);

    double alan() const;
    double cevre() const;
    bool kesisim(const Daire& di�er) const;
    std::string toString() const;

    void yazdir() const;
};
