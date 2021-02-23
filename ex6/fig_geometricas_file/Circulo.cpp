/**
 * Project Untitled
 */


#include "Circulo.h"
#include <math.h>

Circulo::Circulo(float r, float x, float y) {
    _radio = r;
    _xc = x ;
    _yc = y ;
    _idTipo =  circulo ;
}

Circulo::Circulo(string parametros){
    // cout << "Circulo: " << parametros << endl;
    size_t posicion = 0;
    size_t pos_ant = 0;
    posicion = parametros.find(" ");
    _radio = atof(parametros.substr(0,posicion).c_str());
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    _xc = atof(parametros.substr(pos_ant,posicion).c_str());
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    _yc = atof(parametros.substr(pos_ant,posicion).c_str());
    pos_ant =  posicion + 1;
    posicion = parametros.find(" ",pos_ant);
    _angulo = atof(parametros.substr(pos_ant,posicion).c_str());
    cout << "Círculo de R: " << _radio << ", Xc: " << _xc << ", Yc: " << _yc << ", Ángulo: " << _angulo << endl;
}

Circulo::Circulo() {

}

float Circulo::area(){
    if( _area == 0 ) M_PI * _radio * _radio;
    return _area;
}

float Circulo::perimetro(){
    return 2 * M_PI * _radio;
}

string Circulo::queSoy(){
    return "Soy un círculo";
}

ostream& operator<<(ostream& stream, Circulo& c){
   stream << "Yo soy un círculo" ;
   return stream;
}
