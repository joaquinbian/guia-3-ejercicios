//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

/*
Enunciado:
Dada una lista de 10 números informar cual es el máximo de los pares. 
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa máximo: 36
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa máximo: 4
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa máximo: -8


*/

int main(){
 
    const int LENGTH = 10;

    int x, max;
    bool was_assigned = false; 

    cout << "Ingresar 10 numeros y mostraremos cual es el maximo de los pares " <<  endl;

    for(int i = 0; i < LENGTH; i++){
        cout << "Numero " << i + 1 << " >> ";
        cin >> x;

        if(x % 2 == 0){
            if(!was_assigned){
                //es el primero
                max = x;
                was_assigned = true;
            } else if(was_assigned && max < x){
                max = x;
            }

        } 

    }


    cout << "El maximo de los pares es " << max << endl;

    return 0;
}