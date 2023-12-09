#include <iostream>
#include <string>
using namespace std;

const int NUM_ESTUDIANTES = 20;
const int NUM_CALIFICACIONES = 3;

string nombres[NUM_ESTUDIANTES];
int cedulas[NUM_ESTUDIANTES];
int calificaciones[NUM_ESTUDIANTES][NUM_CALIFICACIONES];
float promedios[NUM_ESTUDIANTES];

void cargar_nomina_estudiantes() {
    // Cargar en un arreglo la cédula de los estudiantes y en otro arreglo los nombres
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "Ingrese el nombre del estudiante " << i+1 << ": ";
        cin >> nombres[i];
        cout << "Ingrese la cédula del estudiante " << i+1 << ": ";
        cin >> cedulas[i];
    }
}

void cargar_notas_estudiantes() {
    // Cargar las notas de los estudiantes
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "Ingrese las 3 calificaciones del estudiante " << nombres[i] << ": ";
        for (int j = 0; j < NUM_CALIFICACIONES; j++) {
            cin >> calificaciones[i][j];
        }
    }
}

void calcular_promedio_notas() {
    // Calcular el promedio de notas
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        float suma = 0;
        for (int j = 0; j < NUM_CALIFICACIONES; j++) {
            suma += calificaciones[i][j];
        }
        promedios[i] = suma / NUM_CALIFICACIONES;
    }
}

void mostrar_boletin_calificaciones() {
    // Mostrar el boletín de calificaciones en forma de tabla
    cout << "Boletín de Calificaciones\n";
    cout << "--------------------------------------------\n";
    cout << "Cédula\tNombre\t\tCalif1\tCalif2\tCalif3\tPromedio\n";
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << cedulas[i] << "\t" << nombres[i] << "\t\t";
        for (int j = 0; j < NUM_CALIFICACIONES; j++) {
            cout << calificaciones[i][j] << "\t";
        }
        cout << promedios[i] << "\n";
    }
    cout << "--------------------------------------------\n";
}

int main() {
    cargarNominaEstudiantes();
    cargarNotasEstudiantes();
    calcularPromedioNotas();
    mostrarBoletinCalificaciones();
    return 0;
}
