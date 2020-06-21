#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){
    int p;
    cout<<"hola: "<<endl;
    LinkedList lista1;
    int numero;
    cout<<"Ingrese los numeros a guardar de forma ordenada (Escriba 0 para finalizar) "<<endl;cin>>numero;
    while (numero!=0){
        lista1.insert(numero);
        cin>>numero;
    }
    cout<<"Mostrando la lista sin sobrecarga de operadores"<<endl;
    lista1.print();

    cout<<"Mostrando la lista con sobrecarga de operadores"<<endl;
    citerador it;
        for (it=lista1.begin();it!=lista1.tail; it.operator++()) {
        cout<<it.operator*()<<" ";
    }
    cout<<endl;
    cout<<"El principio de la lista es: "<<lista1.begin()->elem<<endl;
    cout<<"El final de la lista es: "<<lista1.end()->elem<<endl;

    cout<<"Que elemento de la lista desea eliminar: "<<endl;cin>>p;
    lista1.remove(p);
    lista1.print();

//------------------------------------------------------------------------------------
//    lista1.insert(4);
//    lista1.insert(3);
//    lista1.insert(5);
//    lista1.insert(6);
//    lista1.print();
//    lista1.remove(4);
//    lista1.print();
//------------------------------------------------------------------------------------------------

}

