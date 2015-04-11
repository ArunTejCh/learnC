#include <stdio.h>

int power(int base ,int exp);

main(){

printf("2 to the power %d\t is: %d\n",12,power(2,12));

}

int power(int base, int exp){
	
	int p = 1;
	int i;
	for(i = 0; i < exp; i++){
		p = p * base;
	}

	return p;
}

