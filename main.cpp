#include "ArbolK-D.h"
#include "NodoK-D.h"
#include "Vertice.h"

#include <string>
#include <iostream>

int main(){
    ArbolKD<Vertice>* arbol = new ArbolKD<Vertice>();
    std::cout<<"Es vacío: "<<arbol->esVacio()<<std::endl;
    

    arbol->insertar(*(new Vertice(1.0, 2.0, 3.0, 0)));
    arbol->insertar(*(new Vertice(4.0, 5.0, 6.0, 1)));
    arbol->insertar(*(new Vertice(7.0, 8.0, 9.0, 2)));
    arbol->insertar(*(new Vertice(1.5, 2.5, 3.5, 3)));
    arbol->insertar(*(new Vertice(4.5, 5.5, 6.5, 4)));
    arbol->insertar(*(new Vertice(7.5, 8.5, 9.5, 5)));
    arbol->insertar(*(new Vertice(2.0, 3.0, 4.0, 6)));
    arbol->insertar(*(new Vertice(5.0, 6.0, 7.0, 7)));
    arbol->insertar(*(new Vertice(8.0, 9.0, 10.1, 8)));
    arbol->insertar(*(new Vertice(0.0, 1.0, 2.0, 9)));

    std::cout<<"Pre orden: "<<std::endl;
    arbol->preOrden();

    std::cout<<"Pos orden: "<<std::endl;
    arbol->posOrden();

    std::cout<<"In orden: "<<std::endl;
    arbol->inOrden();

    std::cout<<"Nivel orden: "<<std::endl;
    arbol->nivelOrden();

    std::cout<<"Altura: "<<arbol->altura()<<std::endl;
    std::cout<<"Tam: "<<arbol->tam()<<std::endl;
    std::cout<<"Es vacío: "<<arbol->esVacio()<<std::endl;
    

    Vertice v(0.0, 1.0, 2.0, 9);
    Vertice v2(3,4,1,5);

    NodoKD<Vertice>* nodo = arbol->buscar(v);
    NodoKD<Vertice>* nodo2 = arbol->buscar(v2);
    
    std::cout<<"Nodo buscacado:"<<nodo->getDato()<<std::endl;
    if(nodo2!=nullptr){
        std::cout<<"Nodo buscacado v2:"<<nodo2->getDato()<<std::endl;
    }else{
        std::cout<<"El vertice v2 no se encontró"<<std::endl;
    }

    // std::cout<<"Eliminar: "<<arbol->eliminar(v)<<std::endl;
    // std::cout<<"Pre orden despues de eliminar: ";
    // arbol->preOrden();

    
    
    
}