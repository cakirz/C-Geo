// Bu kod Mert Bülbül ve Can Þafak Çakýr tarafýndan hazýrlanmýþtýr
#pragma once
#include <string>

class Nokta {
private:

    double x;
    double y;

public:
    
    Nokta();
    Nokta(double xKordinatý, double yKordinatý);

    Nokta(const Nokta& diðer);
    
    Nokta(const Nokta& diðer, double xOfset, double yOfset);
   
    double getX() const;
    double getY() const;

    void setX(double xKordinatý);
    void setY(double yKordinatý);

    void set(double xKordinatý, double yKordinatý);

    
    void yazdir() const;

    
    std::string toString() const;
};
