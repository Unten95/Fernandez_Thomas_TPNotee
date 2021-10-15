#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main (int argc, char *argv[]){


int somme ;
somme =0;
int i;
  atoi(argv[1]);
  
  for(i = 1; i < argv[1]; ++i){
    if(atoi(argv[1])%i == 0){
      somme = somme + i;
    }
  }
  if(somme == atoi(argv[1])){
    printf(" Nombre parfait");
  }  
  else{
    printf(" n'est pas un Nombre parfait");
  }
  return 0;
}
}
