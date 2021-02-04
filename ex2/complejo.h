#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

class Complex{
  float re;
  float im;

 public:
  float norma();
  float angulo();
  Complex operator+(Complex &a);
  Complex operator-(Complex &a);
};


