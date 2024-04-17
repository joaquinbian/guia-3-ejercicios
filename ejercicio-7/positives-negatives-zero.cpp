//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

/*
Enunciado:
Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.


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


    cout << "La cantidad de positivos es de " << positives << endl;
    cout << "La cantidad de negativos es de " << negatives << endl;
    cout << "La cantidad de ceros es de " << zero << endl;

   
    return 0;
}