#include <stdio.h>

#define MAXLINE 500


int getLine(char line [],int max);
void copy(char to[],char from[]);
void reverse(char arg[],int len);

main(){

	int len,max;

	char line[MAXLINE];
	char longest[MAXLINE];

	while((len=getLine(line,MAXLINE))>0){
		printf("length: %d\n%s\n",len,line);
		reverse(line,len);
		printf("%s\n",line);
	}
}

void reverse(char arg[],int len){
	
	char temp[len];
	int i;

	for(i=0;i<len-1;i++){
		temp[len-2]=arg[i];
	}

	for(i=0;i<len-1;i++){
		arg[i]=temp[i];
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
