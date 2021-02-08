#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "complejo.h"

using namespace std;

int main( int argc, char** argv ){

  // Recordar que la parte real e imaginaria será pasado por parámetros del main.

  Complejo com, com2, comS;
  Complejo *ptr, *ptr1;
  ptr = new Complejo(46.67, 34.21);

  ptr1 = new Complejo(11.22, 22.11 );

  float nor, ang, a, b;
  a = atof( argv[1] );
  b = atof( argv[2] );
  
  com.asignar(a, b);

  a = atof( argv[3] );
  b = atof( argv[4] );

  com2.asignar(a, b);

  nor = com.norma();
  ang = com.angulo();

  comS = com + com2;
  cout << "El número complejo: "  << comS.real() << " + " << comS.imag() << "j" ;
  cout << " tiene de norma= " << nor << " y un ángulo= " << ang << " rad." << endl;
  cout << "Otro número: " << ptr->real()  << " + " << ptr->imag() << "j " << endl;

  comS = *ptr - *ptr1 ;
  cout << "La resta compleja: "  << comS.real() << " + " << comS.imag() << "j" << endl;
 

 return 0;

}
