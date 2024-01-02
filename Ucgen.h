// Bu kod Mert Bülbül ve Can Þafak Çakýr tarafýndan hazýrlanmýþtýr
#pragma once
#include "Nokta.h"

class Ucgen {




private:
    Nokta a;
    Nokta b;
    Nokta c;




public:
    
    Ucgen(const Nokta& aDeðer, const Nokta& bDeðer, const Nokta& cDeðer);

    
    double alan() const;

   
    double cevre() const;

    
    double* acilar() const;

    
    std::string toString() const;
};


