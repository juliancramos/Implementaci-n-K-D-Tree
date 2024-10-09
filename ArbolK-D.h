#ifndef _ARBOL_KD_H_
#define _ARBOL_KD_H_

#include "NodoK-D.h"

template<class T>
class ArbolKD {

    protected:
        NodoKD<T> *raiz;
    public:
        ArbolKD();
        bool esVacio();
        T& datoRaiz();
        int altura();
        int tam() const;
        void insertar(T& val);
        bool eliminar(T& val);
        NodoKD<T>* buscar(T& val);

        void preOrden();
        void inOrden();
        void posOrden();
        void nivelOrden();
    
    
};

#include "ArbolK-D.hxx"

#endif
