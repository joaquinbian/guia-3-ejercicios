//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

/*
Enunciado:
Hacer un programa para que el usuario ingrese un número positivo y luego se muestren por pantalla los números entre el 1 y el número ingresado por el usuario. 
Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.


*/

int main(){
 
    int limit;

    cout << "Ingresa un numero positivo y listaremos los numeros entre 1 y ese " << endl;

    cin >> limit;

    while (limit < 0){
        cout << "Debes ingresar un numero positivo " << endl;
        cin >> limit;
    }
    
    
    cout << "***************** Lista **********************" << endl;

    for(int i = 1; i <= limit; i++){
        cout << i << endl;
    }

    
    return 0;
}