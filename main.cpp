#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;


int main(){
    cout<<"hola: "<<endl;
    LinkedList lista1;
    int numero;
    cout<<"Ingrese los numeros a guardar de forma ordenada (Escriba 0 para finalizar) "<<endl;cin>>numero;
    while (numero!=0){
        lista1.insertarOrdenado(numero);
        cin>>numero;
    }
    cout<<"Mostrando la lista sin sobrecarga de operadores"<<endl;
    lista1.print();

    cout<<"Mostrando la lista con sobrecarga de operadores"<<endl;
    citerador it;
    for (it=lista1.head;it!=lista1.final;it.operator++()) {
        cout<<it.operator*()<<" ";
    }






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

