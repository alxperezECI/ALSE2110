#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

float norma(float &re, float &im ){
  return sqrt(re*re + im*im);
}

float angulo(float &re, float &im){
  return atan2(im,re);
}

int main( int argc, char** argv ){

  // Recordar que la parte real e imaginaria será pasado por parámetros del main.

  float a, b, nor, ang;
  a = b = 0.;
  a = atof( argv[1] );
  b = atof( argv[2] );
  nor = norma( a, b );
  ang = angulo( a, b );
  cout << "El número complejo: "  << a << " + " << b << "j" ;
  cout << " tiene de norma= " << nor << " y un ángulo= " << ang << " rad." << endl;
  return 0;
}
