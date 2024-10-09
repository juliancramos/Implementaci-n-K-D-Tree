#ifndef _NODO_KD_H
#define _NODO_KD_H

#include "Vertice.h"

template<class T>
class NodoKD {
private:
    Vertice vertice;
    NodoKD<T>* hijoIzq;  
    NodoKD<T>* hijoDer;  
    int dimension; // 0:x 1:y 2:z

public: 
    NodoKD();
    Vertice& getVertice();
    void setVertice(const Vertice& val);
    NodoKD<T>* getHijoIzq();
    NodoKD<T>* getHijoDer();
    void setHijoIzq(NodoKD<T>* izq);
    void setHijoDer(NodoKD<T>* der);
    int getDimension();
    void setDimension(char d);
    int altura();
    int tamano();



};
#include "ArbolK-D.hxx"

#endif