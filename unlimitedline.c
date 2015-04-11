#include <stdio.h>

#define MAXLINE 100

int getLine(char line [],int max);
void copy(char to[],char from[]);

main(){

	int len,max;

	char line[MAXLINE];
	char longest[MAXLINE];

	while((len=getLine(line,MAXLINE))>0){
		if(len>max){
			max = len;
			copy(longest,line);
		}
	}

	printf("The max length line with length %d is \n%s\n", max, longest);
	printf("%s",longest);

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
