#include <stdio.h>

main(){
	int nl=0;
	int c;
	while((c=getchar())!=EOF){
		if(c == '\n')
			nl++;
	};

	printf("No of lines are %d\n",nl);
}
