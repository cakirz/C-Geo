// Bu kod Mert B�lb�l ve Can �afak �ak�r taraf�ndan haz�rlanm��t�r
#pragma once
#include "Nokta.h"

class Ucgen {




private:
    Nokta a;
    Nokta b;
    Nokta c;




public:
    
    Ucgen(const Nokta& aDe�er, const Nokta& bDe�er, const Nokta& cDe�er);

    
    double alan() const;

   
    double cevre() const;

    
    double* acilar() const;

    
    std::string toString() const;
};


