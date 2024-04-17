//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

/*
Enunciado:
Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos. 
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15 y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.


*/

int main(){
 

    int a, b, aux;

    cout << "Ingresa 2 numeros, y nosotros mostraremos los numeros entre ellos de menor a mayor " << endl;

    cout << "Numero 1 >> ";

    cin >> a;

    cout << "Numero 2 >> ";

    cin >> b;

    if(a > b){
        //hacemos que a sea menor que b
        aux = a;
        a = b;
        b = aux;
    }


    for(int i = a; i <= b; i++){
        cout << i << endl;
    }

    return 0;
}