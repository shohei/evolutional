#include <stdio.h>
#include "Population.h"

int main()
{
   int i;
   Population *pop;

   srand((unsigned int)time(NULL));

   pop = new Population();
   for(i = 1; i <= GEN_MAX; i++) {
      pop->alternate();
      //printf("Generation: %d, fitness: %f\n", i, pop->ind[0]->fitness);
   }
   pop->printResult();
   delete pop;

   return 0;
}
