#include <stdio.h>

#define IN 1
#define OUT 0

main(){

        int c;
        int pos=OUT;

        while((c=getchar())!=EOF){
                if(c =='\n' || c ==' ' || c =='\t'){
                        if(pos == IN){
                                pos=OUT;
				putchar('\n');
                        }
                }else{
                        pos=IN;
			putchar(c);
                }


        }
}

