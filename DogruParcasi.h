// Bu kod Mert Bülbül ve Can Þafak Çakýr tarafýndan hazýrlanmýþtýr
#pragma once
#include "Nokta.h"

class DogruParcasi {



private:
    Nokta nokta1;
    Nokta nokta2;
    


public:
    DogruParcasi();
    DogruParcasi(const Nokta& nokta1Deðer, const Nokta& nokta2Deðer);
    DogruParcasi(const DogruParcasi& diðer);
    DogruParcasi(const DogruParcasi& diðer, double oranla);

    Nokta getP1() const;
    Nokta getP2() const;

    void setP1(const Nokta& nokta1Deðer);
    void setP2(const Nokta& nokta2Deðer);
    void set(const Nokta& nokta1Deðer, const Nokta& nokta2Deðer);


    double uzunluk() const;
    Nokta ortaNokta() const;
    std::string toString() const;

    void yazdir() const;
};
