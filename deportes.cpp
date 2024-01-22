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
}
