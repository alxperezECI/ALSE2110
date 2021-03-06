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
  return c;
}

int main( int argc, char** argv ){

  // Recordar que la parte real e imaginaria será pasado por parámetros del main.

  Complex com, com2, comS;
  Complex *ptr, *ptr1;
  ptr = new Complex();
  ptr->re = 46.67;
  ptr->im = 34.21;

  ptr1 = new Complex();
  ptr1->re = 11.22;
  ptr1->im = 22.11;

  float nor, ang;
  com.re = atof( argv[1] );
  com.im = atof( argv[2] );
  com2.re = atof( argv[3] );
  com2.im = atof( argv[4] );

  nor = norma( com );
  ang = angulo( com );

  comS = suma(com, com2);
  cout << "El número complejo: "  << comS.re << " + " << comS.im << "j" ;
  cout << " tiene de norma= " << nor << " y un ángulo= " << ang << " rad." << endl;
  cout << "Otro número: " << ptr->re  << " + " << ptr->im << "j " << endl;

  comS = resta( *ptr, *ptr1 );
  cout << "La resta compleja: "  << comS.re << " + " << comS.im << "j" ;
 

 return 0;

}
