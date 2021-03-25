#include "Winkel.h"
#include "cmath.h"

Winkel::Winkel(double x){
  w = x;
}
/*
Winkel::Winkel(Winkel & w){


}
*/
void Winkel::setWinkel(double getW){
   w = getW;

}

double Winkel::getWinkel(){
  return w;
}

void Winkel::normWinkel(){
  w = std::fmod(w,360);
}

Winkel Winkel::operator+(const Winkel & b){
  return Winkel(w + b.w);
}

Winkel Winkel::operator-(const Winkel & b){
  return Winkel(w - b.w);
}


