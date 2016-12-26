#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "company.h"

/*

bite
 * une entreprise est caracterisee par 3 parametres :
 * - son label : c'est a dire l'indice qui lui sera associe dans le tableau comp de la structure stock_exchange
 * - son capital : l'argent qu'elle possede, la valeur de l'entreprise
 * - son nom
 */
struct company_s {
  int label;
  float capital;
  char* name;
};

company_t init_company (int i, int capital, char* name) {
  company_t c = malloc(sizeof(company_t));
  c->label = i;
  c->capital = capital;
  c->name = malloc(sizeof(char)*strlen(name));
  return c;
}

