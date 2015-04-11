#include <stdio.h>

#define MAXLINE 500


int getLine(char line [],int max);
void copy(char to[],char from[]);
void trimline(char arg[],int len);

main(){

	int len,max;

	char line[MAXLINE];
	char longest[MAXLINE];

	while((len=getLine(line,MAXLINE))>0){
		trimline(line,len);
		printf("%s\n",line);
	}
}

void trimline(char arg[],int len){
	
	int i;
	for(i=len-2;i>=0;i--){
		if(arg[i] == ' ' || arg[i] == '\t'){
			arg[i] = '\0';
		}else{
			i=-1;
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
