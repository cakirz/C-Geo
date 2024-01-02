// Bu kod Mert B�lb�l ve Can �afak �ak�r taraf�ndan haz�rlanm��t�r
#pragma once
#include <string>

class Nokta {
private:

    double x;
    double y;

public:
    
    Nokta();
    Nokta(double xKordinat�, double yKordinat�);

    Nokta(const Nokta& di�er);
    
    Nokta(const Nokta& di�er, double xOfset, double yOfset);
   
    double getX() const;
    double getY() const;

    void setX(double xKordinat�);
    void setY(double yKordinat�);

    void set(double xKordinat�, double yKordinat�);

    
    void yazdir() const;

    
    std::string toString() const;
};
