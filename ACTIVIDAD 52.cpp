#include <iostream>
using namespace std;

int main() {
    char respuesta;

    do {
      
        float calificacion1, calificacion2, calificacion3;
        cout << "Introduce la calificación del primer parcial (20%): ";
        cin >> calificacion1;
        cout << "Introduce la calificación del segundo parcial (20%): ";
        cin >> calificacion2;
        cout << "Introduce la calificación del tercer parcial (60%): ";
        cin >> calificacion3;

        float promedio = (calificacion1 * 0.2) + (calificacion2 * 0.2) + (calificacion3 * 0.6);

        float mayor = calificacion1;
        if (calificacion2 > mayor) mayor = calificacion2;
        if (calificacion3 > mayor) mayor = calificacion3;
        cout << "El promedio ponderado es: " << promedio << endl;
        cout << "La calificación mayor es: " << mayor << endl;

        cout << "¿Desea calcular otro promedio? Presione 'S' para sí, cualquier otra tecla para salir: ";
        cin >> respuesta;
        respuesta = toupper(respuesta); 
    } while (respuesta == 'S');

    return 0;
}
