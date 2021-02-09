#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "complejo.h"

using namespace std;

Complejo::Complejo(float r, float i){
  re = r;
  im = i;
}

void Complejo::asignar(float r, float i){
  re = r;
  im = i;
}

float Complejo::real(){
  return re;
}

float Complejo::imag(){
  return im;
}

float Complejo::norma(){
  return sqrt(re*re + im*im);
}

float Complejo::angulo(){
  return atan2(im, re);
}

Complejo Complejo::operator+(Complejo &a ){
  Complejo c;
  c.re = re + a.re;
  c.im = im + a.im;
  return c;
}

Complejo Complejo::operator-(Complejo &a ){
  Complejo c;
  c.re = re - a.re;
  c.im = im - a.im;
  return c;
}

ostream& operator<<(ostream &o, Complejo &a){
    o << a.re << " + " << a.im << "j";
}


