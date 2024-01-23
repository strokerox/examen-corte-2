#include <stdio.h>
#include <string>

using namespace std;

struct dato{
  char nombre[40];
  char pais[25];
};
struct atleta{
  char deporte[30];
  struct datos pers;
  int nro_medallas;
};

void encabezado(){
    printf("*** ___________M E D A L L A S  D E L  A T L E T A___________ ***");
    printf("\n");
    printf("\n");
};

int main(){
    struct dato ats [10];
    int pos, P_mayor, P_menor;
    int M_mayor, M_menor;
        M_mayor = 0;
        M_menor = 50;
    struct datos ats[] = {
        {"Nombre1", "Pais1", "Deporte1", 5},
        {"Nombre2", "Pais2", "Deporte2", 3},
        {"Nombre3", "Pais3", "Deporte3", 7}
        // otros atletas
    };
};
