#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

struct Complex{
  float re;
  float im;
};

float norma(Complex &a ){
  return sqrt(a.re*a.re + a.im*a.im);
}

float angulo(Complex &a ){
  return atan2(a.im,a.re);
}

Complex suma(Complex &a, Complex &b){
  Complex c;
  c.re = a.re + b.re;
  c.im = a.im + b.im;
  return c;
}

Complex resta(Complex &a, Complex &b){
  Complex c;
  c.re =  a.re - b.re;
  c.im = a.im - b.im;
}

int main( int argc, char** argv ){

  // Recordar que la parte real e imaginaria será pasado por parámetros del main.

  Complex com, com2;
  float nor, ang;
  com.re = atof( argv[1] );
  com.im = atof( argv[2] );
  nor = norma( com );
  ang = angulo( com );
  cout << "El número complejo: "  << com.re << " + " << com.im << "j" ;
  cout << " tiene de norma= " << nor << " y un ángulo= " << ang << " rad." << endl;
  return 0;
}
