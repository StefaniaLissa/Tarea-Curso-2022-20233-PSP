#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool esPrimo(int n) {

	for (int i=2; i<=n/2; i++){
	
		if (n%i!=0){ continue;
		} else { return false; }
		
	} return true;
	
}

void trabajoHijo (int numDesde, int numHasta) {
	for (int a = numDesde; a < numHasta ; a++) {
        	
		if (esPrimo(a)) {
		
			printf("%d es primo, soy pid %d\n", a, getpid() );
		}
        }
}
  
int main() {

    int numTotales = 200000;
    int numInicial = 100000;	
    int num = numInicial;
    	
    	trabajoHijo(numInicial, numTotales);
         
}
