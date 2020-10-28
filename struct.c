#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "struct.h"

struct temp * new_temp(int i, char *n) {

  struct temp *nu;

  nu = malloc( sizeof(struct temp) );

  strncpy(nu->city, n, sizeof(nu->city)-1);
  nu->temp = i;

  return nu;
}

void print_temp(struct temp * inputData){
	printf("%s -> %d",inputData->city,inputData->temp);
}