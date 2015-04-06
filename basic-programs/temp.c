#include <stdio.h>

//this function prints fahrenheit to celcius mappings from 0 to 300 in intervals of 20

main(){

//declaring vars needed
float fahr,celsius;
int lower,upper,step;

lower = 0;
upper = 300;
step = 10;

fahr = lower;

printf("fahr celsius\n");

while(fahr <= upper){
	celsius = 5*(fahr-32)/9;
	printf("%3.0f %6.2f\n",fahr,celsius);
	fahr = fahr + step;
};

}
