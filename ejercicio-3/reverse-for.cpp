//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

/*
Hacer un programa para mostrar por pantalla los números del 20 al 1 en orden decreciente.
Importante: El programa no tiene ningún ingreso de datos.

*/

int main(){
 
    for(int i = 20; i >= 1; i--){
        cout << i << endl;
    }
    return 0;
}