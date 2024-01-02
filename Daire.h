// Bu kod Mert Bülbül ve Can Þafak Çakýr tarafýndan hazýrlanmýþtýr
#pragma once
#include "Nokta.h"

class Daire {




private:
    Nokta merkez;
    double yaricap;




public:
    Daire();
    Daire(const Nokta& merkezDeðeri, double yaricapDeðeri);
    Daire(const Daire& diðer);
    Daire(const Daire& diðer, double orantýla);

    Nokta getMerkez() const;
    double getYaricap() const;

    void setMerkez(const Nokta& merkezDeðeri);
    void setYaricap(double yaricapDeðeri);
    void set(const Nokta& merkezDeðeri, double yaricapDeðeri);

    double alan() const;
    double cevre() const;
    bool kesisim(const Daire& diðer) const;
    std::string toString() const;

    void yazdir() const;
};
