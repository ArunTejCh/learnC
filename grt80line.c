#include <stdio.h>

#define MAXLINE 500
#define MINCHAR 80


int getLine(char line [],int max);
void copy(char to[],char from[]);

main(){

	int len,max;

	char line[MAXLINE];
	char longest[MAXLINE];

	while((len=getLine(line,MAXLINE))>0){
		if(len>MINCHAR){
			printf("%s",line);

		}
	}
}

void copy(char to[],char from[]) {
	int i = 0;
	while((to[i]=from[i]) != '\0'){
		++i;
	}
}

int getLine(char line[], int maxline){

	int i=0;
	int c;
	while( ((c = getchar()) != EOF && c != '\n')){
		if(i < maxline-1){
			line[i] = c;
		}
		i++;
	}
	
	if(c == '\n'){
		line[i] = '\n';
		++i;
	}
	
	line[i] = '\0';

	return i;
}
