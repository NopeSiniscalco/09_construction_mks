#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	srand(time(NULL));

	struct population *Data1;
	Data1=new_population(abs(rand()),"USA");
	struct population *Data2;
	Data2=new_population(abs(rand()),"China");
	struct population *Data3;
	Data3=new_population(abs(rand()),"Europe");

	print_population(Data1);
	print_population(Data2);
	print_population(Data3);

	free(Data1);
	free(Data2);
	free(Data3);
	return 0;
}