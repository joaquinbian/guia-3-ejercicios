//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

/*
Enunciado:
Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y la posición del máximo en la lista. En caso de “empates” considerar la primera aparición.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Listará Máximo 35 Posición 7.
Ejemplo B: 5, -10, 2, 8, 25, 13, 55, -8, 55, 9. Listará Máximo 55 Posición 7.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Listará Máximo -6 Posición 8.
El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el máximo es un positivo.




*/

int main(){
 
    int max, n, pos;

    const int LENGTH = 10;

    cout << "Ingresa la 10 numeros y te mostraremos cuantos son positivos, negativos y ceros " << endl;

    for(int i = 0; i < LENGTH; i++){
        cout << "Numero " << i + 1 << " >> ";
        cin >> n;
        //primera vuelta
        if(i == 0 || max < n){
            max = n;
            pos = i + 1;
        }
    
    }


    cout << "El numero mas grande es " << max << " y su posicion es " << pos << endl;

    return 0;
}