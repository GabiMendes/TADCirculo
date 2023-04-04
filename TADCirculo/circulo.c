#include "ponto.h"
#include "circulo.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

struct circ {
  Ponto *A;
  float raio;
};

/* Funções exportadas */

/* Função cria - Aloca e retorna um ponto com coordenadas (x,y) */

Circulo* circ_cria(float x1, float y1, float raio)
{
  Circulo *p = (Circulo*) malloc(sizeof(Circulo));
  
  p->A=pto_cria(x1,y1);
  p->raio = raio;

  return p;
}

/* Função libera - Libera a memória de um ponto previamente criado */

void circ_libera(Circulo* p);

/* Função acessa - Retorna os valores das coordenadas ds pontos do circulo */

void circ_acessa(Circulo* p, float* x1, float* y1,float raio)
{
  
  pto_acessa(p->A,x1,y1);
  printf("Raio: %.1f", raio);
  
}

/* Função atribui - Atribui novos valores às coordenadas ds pontos do triângulo */

void circ_atribui(Circulo* p, float x1, float y1,float raio)
{
  
  pto_atribui(p->A,x1,y1);
  p->raio = raio;
  
}

/* Função getCirculo - Retorna uma string com os valores do ponto formato(x,y)*/

char* circ_getCirculo(Circulo* p)
{

  char* pt;
  int tam = sizeof(*p)+ 35;

  pt = (char*)malloc(tam);

  sprintf(pt,"A:%s", pto_getPonto(p->A));
  
  return pt;
  
}

/* Função exibe -Escreve na tela o circulo */

void circ_exibe(Circulo* p)
{
  
  printf("\nA: %s",pto_getPonto(p->A));
  printf("\nRaio: %.1f",p->raio);
  
}

/* Função clona -recebe um circ e retorna um novo circ com os mesmos valores do circ recebido*/

Circulo* circ_clona(Circulo* p);

/* Função perimetro -recebe um circ e retorna o perimetro*/

float circ_perimetro(float raio)
{
  
  return raio * 3.14 * 2;
  
}

/* Função area -recebe um circ e retorna a area*/

float circ_area(float raio)
{

  float area;

  area = 3.14 * (raio*raio);

  return area;

}