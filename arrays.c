#include <stdio.h>

main(){

	int c, i, nWhite, nOther;
	nWhite = nOther = 0;
	int num[10];

	for(i=0;i<10;i++){
		num[i] = 0;
	}
	
	while((c=getchar()) != EOF){
		if(c >= '0' && c <= '9'){
			num[c - '0']++;
		}else if(c == '\t' || c ==' '){
			nWhite++;
		}else{
			nOther++;
		}
	}

	printf("Numbers:");

	for(i=0;i<10;i++){
		printf("%d ",num[i]);
	}

	printf("\n White Space: %d\t OtherChars: %d\n",nWhite,nOther);
}
