//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

/*
Enunciado:
Hacer un programa para ingresar una lista de 10 números e informar el máximo de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2.

*/

int main(){
 
    const int LENGTH = 10;
    int x, max_neg = 0, min_pos = 0;

    cout << "Ingresa 10 numeros y mostraremos el minimo de los positivos y el maximo de los negativos" << endl;


    for(int i = 0; i < LENGTH; i++){
        cout << "Numero " << i + 1 << " >> ";
        cin >> x;

        if(x > 0){
            if(min_pos == 0 || min_pos > x){
                min_pos = x;
            } 
        } else if(x < 0 || max_neg < x){
            max_neg = x;
        }
    }

    if(max_neg < 0){
        cout << "El maximo negativo es " << max_neg << endl;

    }

    if(min_pos > 0){

        cout << "El minimo positivo es " << min_pos << endl;
    }

    return 0;
}