struct population *new_population(int i, char *n);
void print_population(struct population * inputData);
struct population
{
	char city[256];
	int population;
};
void change_population(struct population *inputData, int new_population);