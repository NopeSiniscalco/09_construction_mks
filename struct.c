#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "struct.h"

struct population * new_population(int i, char *n) {

  struct population *nu;

  nu = malloc( sizeof(struct population) );

  strncpy(nu->city, n, sizeof(nu->city)-1);
  nu->population = i;

  return nu;
}

void print_population(struct population * inputData){
	printf("%s -> %d\n",inputData->city,inputData->population);
}