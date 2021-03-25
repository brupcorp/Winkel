#ifndef _Winkel_H_
#define _Winkel_H_

class Winkel{

double w;

public:

Winkel(double x=0);
//Winkel(Winkel & w);

void setWinkel(double w);
double getWinkel();
void normWinkel();

Winkel operator+(const Winkel & b);
Winkel operator-(const Winkel & b);

};



#endif

