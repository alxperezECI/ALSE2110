#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "complejo.h"

using namespace std;


float Complex::norma(){
  return sqrt(re*re + im*im);
}

float Complex::angulo(){
  return atan2(a.im,a.re);
}

Complex Complex::operator+(Complex &a ){
  Complex c;
  c.re = a.re + b.re;
  c.im = a.im + b.im;
  return c;
}

Complex Complex::operator-(Complex &a ){
  Complex c;
  c.re =  a.re - b.re;
  c.im = a.im - b.im;
  return c;
}

