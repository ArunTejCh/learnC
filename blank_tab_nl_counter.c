#include <stdio.h>

main(){

int nb,nt,nl;
nl=0;
nb=0;
nt=0;
int c;
while((c=getchar()) != EOF){
	if(c == '\n'){
		nl++;
	}else if(c == '\t'){
		nt++;
	}else if(c == ' '){
		nb++;
	};
};

printf("New Lines: %d\t Blanks: %d\t Tabs: %d\t",nl,nb,nt);

}
