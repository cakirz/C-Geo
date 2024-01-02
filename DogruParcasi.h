// Bu kod Mert B�lb�l ve Can �afak �ak�r taraf�ndan haz�rlanm��t�r
#pragma once
#include "Nokta.h"

class DogruParcasi {



private:
    Nokta nokta1;
    Nokta nokta2;
    


public:
    DogruParcasi();
    DogruParcasi(const Nokta& nokta1De�er, const Nokta& nokta2De�er);
    DogruParcasi(const DogruParcasi& di�er);
    DogruParcasi(const DogruParcasi& di�er, double oranla);

    Nokta getP1() const;
    Nokta getP2() const;

    void setP1(const Nokta& nokta1De�er);
    void setP2(const Nokta& nokta2De�er);
    void set(const Nokta& nokta1De�er, const Nokta& nokta2De�er);


    double uzunluk() const;
    Nokta ortaNokta() const;
    std::string toString() const;

    void yazdir() const;
};
