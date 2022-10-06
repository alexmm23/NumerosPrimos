// NumerosPrimos.cpp : Adrian Alejandro Montes Mendoza
//

#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    // Casos especiales
    if (numero == 0 || numero == 1 || numero == 4) return false;
    for (int x = 2; x < numero / 2; x++) {
        if (numero % x == 0) return false;
    }
    // Si no se pudo dividir por ninguno de los de arriba, sí es primo
    return true;
}
void imprimirnPrimos(int iteraciones) {
    int contadorI = 0;
    int num = 0;
    while (true) {
        num++;
        while (esPrimo(num)) {
            cout << num << " ";
            contadorI++;
            num++;
            if (contadorI % 5 == 0) cout << endl;
        }
        //HASTA QUE EL CONTADOR SEA IGUAL A LAS ITERACIONES
        if (contadorI == iteraciones) {
            break;
        }
    }

}
void imprimirToNprimos(int limite) {
    int num = 0;
    for (int i = 0; i < limite; i++) {
        num++;
        if (esPrimo(num)) {
            cout << num << " ";
            if (i % 5 == 0) cout << endl;
        }
    }

}
int main()
{
    int ITERACIONES = 0;
    int respuesta = 1;

    while (respuesta) {
        cout << "Adrian Alejandro Montes Mendoza - 22110135" << endl;

        cout << "Imprimir numeros primos" << endl;
        cout << "|1| - n cantidad de primos" << endl;
        cout << "|2| - Numeros primos hasta n" << endl;
        cout << "|0| - Salir" << endl;
        cin >> respuesta;
        system("cls");

        switch (respuesta) {
        case 1:
            cout << "Cuantos numeros primos quiere imprimir? Ejemplo: Los primeros 30 numeros primos" << endl;
            cin >> ITERACIONES;
            imprimirnPrimos(ITERACIONES);
            break;
        case 2:
            cout << "Hasta que numero quieres encontrar los primos?" << endl;
            cin >> ITERACIONES;
            imprimirToNprimos(ITERACIONES);
            break;
        }
        cout << endl;
        system("pause");
        system("cls");
    }
}