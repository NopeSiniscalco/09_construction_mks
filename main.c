#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	struct temp *Data1;
	Data1=new_temp(72,"New York");
	print_temp(Data1);
	return 0;
}