//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

/*
Enunciado:
Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y el mínimo.
Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42.
Observe que los tres ejemplos dejan en claro que la suposición de que el máximo “seguramente” es un positivo y el mínimo “seguramente” es un negativo, queda totalmente descartada.


*/

int main(){
    
    const int LENGTH = 10;

    int x, max, min;

    cout << "Ingresa 10 numeros y te mostraremos el maximo y el minimo " << endl;

    for(int i = 0; i < LENGTH; i++){
        cout << "Numero " << i + 1 << " >> ";
        cin >> x;

        //primera vuelta
        if(i == 0){
            max = x;
            min = x;
        } 
        if(max < x){
            max = x;
        }
        if(min > x){
            min = x;
        }
    }

    cout << "El numero maximo ingresado es " << max << endl;
    cout << "El numero minimo ingresado es " << min << endl;

    return 0;
}