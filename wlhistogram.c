#include <stdio.h>

#define IN 1
#define OUT 0

main(){

        int c;
        int pos=OUT;
	int wlHist[10];
	int i;
	int cur = 0;
	
	for(i = 0; i < 10; i++){
		wlHist[i] = 0;
	}

        while((c=getchar())!=EOF){
                if(c =='\n' || c ==' ' || c =='\t'){
                        if(pos == IN){
                                pos=OUT;
				if(cur < 9){
					wlHist[cur]++;
				}else{
					wlHist[9]++;
				}
				cur = 0;	
                        }
                }else{
                        pos=IN;
			cur++;
                }
        }

	int j;
	for(i = 1; i < 10; i++){
		printf("%2d ",i);
		for(j = 0; j < wlHist[i]; j++){
			printf("-");
		}	
		printf("\n");
	}

	printf("\n");
}

