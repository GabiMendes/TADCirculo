/* Tipo exportado */
#include "ponto.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
struct ponto{
  float x,y;
};

/* Funções exportadas */

/* Função cria - Aloca e retorna um ponto com coordenadas (x,y) */

Ponto* pto_cria(float x, float y){
  Ponto* p = (Ponto*) malloc(sizeof(Ponto));

  if (p == NULL) {
    printf("Memória insuficiente!\n");
    exit(1);
  }

  p->x = x;
  p->y = y;
  return p;
  
}

/* Função libera - Libera a memória de um ponto previamente criado */

void pto_libera(Ponto* p){
  free(p);
}

/* Função acessa - Retorna os valores das coordenadas de um ponto */

void pto_acessa(Ponto* p, float* x, float* y){
  (*x) = p->x; 
  (*y) = p->y; 
  return;
}

/* Função atribui - Atribui novos valores às coordenadas de um ponto */

void pto_atribui(Ponto* p, float x, float y){
   p->x=x ;
   p->y=y; 
  return;
}
/* funções que alteram/acessam as coordenadas individualmente */

/* Função distancia - Retorna a distância entre dois pontos */

float pto_distancia(Ponto* p1, Ponto* p2){
  float dx = p2->x - p1->x;
  float dy = p2->y - p1->y;
  return sqrt(dx*dx + dy*dy);
}

/* Função getPonto - Retorna uma string com os valores do ponto formato(x,y)
a representação textual de um ponto (...,...)
*/

char* pto_getPonto(Ponto* p){
  char * ptAux;
  int qtCaracteres= sizeof(*p) + 8;
  ptAux=(char*)malloc(qtCaracteres);
  sprintf(ptAux,"(%.2f , %.2f)",p->x,p->y);
  return ptAux;
  
};

/* Função exibe -Escreve na tela o ponto no formato (xxx.xx,yyy.yy)*/

void pto_exibe(Ponto* p){
 printf("(%.2f , %.2f)",p->x,p->y);
  return;
}
