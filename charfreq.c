#include <stdio.h>

#define IN 1
#define OUT 0

main(){

        int c;
        int pos=OUT;
	int wlHist[255];
	int i;
	int cur = 0;
	
	for(i = 0; i < 255; i++){
		wlHist[i] = 0;
	}

        while((c=getchar())!=EOF){
		if(c < 255){
			wlHist[c]++;
		}else{
			wlHist[255]++;
		}
        }

	int j;
	for(i = 1; i < 255; i++){
		printf("%2d ",i);
		for(j = 0; j < wlHist[i]; j++){
			printf("-");
		}	
		printf("\n");
	}

	printf("\n");
}

