typedef struct circ Circulo;

Circulo* circ_cria(float x1, float y1, float raio);

void circ_libera(Circulo* p);

void circ_acessa(Circulo* p, float* x1, float* y1,float raio);

void circ_atribui(Circulo* p, float x1, float y1,float raio);

char* circ_getCirculo(Circulo* p);

void circ_exibe(Circulo* p);

Circulo* circ_clona(Circulo* p);

float circ_perimetro(float raio);

float circ_area(float raio);