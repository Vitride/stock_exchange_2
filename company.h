#ifndef __COMPANY_H__
#define __COMPANY_H__

typedef struct company_s* company_t;

// renvoie un pointeur vers une entreprise dont les champs ont ete initialises
// i : indice de l'entreprise, capital : capital de l'entreprise, name : nom de l'entreprise
company_t init_company (int i, int capital, char* name); 

void free_company (company_t c);

#endif