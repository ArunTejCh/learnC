#include <stdio.h>

main(){
	int nb=0;
	int c;
	while((c=getchar())!=EOF){
		if(c == ' '){
			if(nb == 0){
				putchar(c);
				nb=1;
			}
		}else{
			putchar(c);
			nb=0;
		}
	};

}
