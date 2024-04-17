//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

/*
Enunciado:
Hacer un programa para ingresar una lista de 10 números, luego informar el porcentaje de positivos, negativos, y  ceros.

*/

int main(){
 

    int x, positives = 0, negatives = 0, zero = 0;

    const int LENGTH = 10;

    cout << "Ingresa la 10 numeros y te mostraremos cuantos son positivos, negativos y ceros " << endl;


    for(int i = 0; i < LENGTH; i++){
        cout << "Numero " << i + 1 << " >> ";
        
        cin >> x;

        if(x > 0){
            positives++;
        } else if(x < 0){
            negatives++;
        } else {
            zero++;
        }
    }


    cout << "Porcentaje de positivos es de " << (positives * 100) / 10 << "%" << endl;
    cout << "Porcentaje de negativos es de " << (negatives * 100) / 10 << "%" << endl;
    cout << "Porcentaje de ceros es de " << (zero * 100) / 10 << "%" << endl;

    return 0;
}