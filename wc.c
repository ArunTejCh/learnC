#include <stdio.h>

#define IN 1
#define OUT 0

main(){

	int c;
	int nw,nc,nl;
	nw = nc = nl = 0;
	int pos=OUT;

	while((c=getchar())!=EOF){
		if(c =='\n' || c ==' ' || c =='\t'){
			if(pos == IN){
				nw++;
				pos=OUT;
			}
			
			if(c == '\n'){
				nl++;
			}
		}else{
			nc++;
			pos=IN;	
		}

		
	}
	
	printf("Words: %d\t Chars: %d\t Lines: %d\t\n",nw,nc,nl);
	

}
