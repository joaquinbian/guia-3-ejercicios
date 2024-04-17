//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

/*
Enunciado:
Hacer un programa para ingresar una lista de 10 números, luego informar el máximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listará Máximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listará Máximo 55.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Se listará Máximo -6
El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el máximo es un positivo.
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 9 y TP2 EJ 10.



*/

int main(){
 
    int max, n;

    const int LENGTH = 10;

    cout << "Ingresa la 10 numeros y te mostraremos cuantos son positivos, negativos y ceros " << endl;

    for(int i = 0; i < LENGTH; i++){
        cout << "Numero " << i + 1 << " >> ";
        cin >> n;
        //primera vuelta
        if(i == 0 || max < n){
            max = n;
        }
    
    }


    cout << "El numero mas grande es " << max << endl;

    return 0;
}