#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 3

/* Exercicio

1. Registrar: nome do aluno, as materias que ele estuda, a carga horaria e a nota (de cada materia) //  Status: [].
2. Calcular o coeficiente de rendimento // Status: []
3. Retornar o nome do aluno e o coeficiente de rendimento // Status: []

----------FORMULA do coeficiente de rendimento------------
(NOTA * carga horaria)/ Total de horas

*/

typedef struct{
    char materia[100]
}MATERIA;

typedef struct{

    char nome[100];
    char MATERIA[10];
    int cargahoraria;
    float nota;

}aluno;



int main()
{

  aluno bdados[MAX];
  int i=0, j=0, op;

  printf("Digite o nome: ");

  scanf("%[^\n]s", &bdados[0].nome);
  setbuf(stdin, NULL);

  printf("Quantidade de materias: ");
  scanf("%i", &op);
  setbuf(stdin,NULL);

  printf("Nome da(s) materia(s): ");
  scanf("%[^\n]s", &bdados[0].MATERIA[0]);
  setbuf(stdin, NULL);

  printf("Digite a carga horaria (Quantidade de horas): ");
  scanf("%d", &bdados[0].cargahoraria);
  setbuf(stdin, NULL);




  return 0;
}


