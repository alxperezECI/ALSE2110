#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

class Complejo{
  float re;
  float im;

 public:
  Complejo(float r = 0., float i = 0.);
  void asignar(float r, float i);
  float real();
  float imag();
  float norma();
  float angulo();

  Complejo operator+(Complejo &a);
  Complejo operator-(Complejo &a);
  friend ostream& operator<<(ostream &o, Complejo &a);
};

