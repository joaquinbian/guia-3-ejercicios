//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

/*
Enunciado:
Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará:  Cantidad de Positivos: 4
Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará: Cantidad de Positivos: 0


*/

int main(){
 

    int length, x, positives = 0;

    cout << "Ingresa la cantidad de numeros que quieres ingresar, y te mostraremos cuantos son positivos " << endl;

    cout << "Cantidad de numeros >> ";

    cin >> length;

    while(length < 0){
        cout << "La cantidad debe ser un numero mayor a 0 " << endl;

        cout << "Cantidad de numeros >> ";
        cin >> length;
    }

    for(int i = 0; i < length; i++){
        cout << "Numero " << i + 1 << " >> ";
        
        cin >> x;

        if(x > 0){
            positives++;
        } 
    }


    cout << "La cantidad de positivos es de " << positives << endl;

   
    return 0;
}