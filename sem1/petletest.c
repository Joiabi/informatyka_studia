#include <stdio.h>
main(){
int x=0;
printf("podaj wartość x: ");
scanf("%d",&x);

if(x==0){
	printf("doopa");	
}
else if (x==1){
	printf("cipsko");
}
else if(x==2){
	printf("sprawdzamy działanie pętli for\n");
	for(int i=0;i!=10;i++)
	printf("%d\n",i);
}
else if(x==3){
	printf("sprawdzamy działanie pętli while\n");
	int i=1;
	while(i!=10){
		printf("%d\n",i);
		i++;}
		}
else if(x==4){
	printf("sprawdzamy działanie pętli do...while\n");
	int i=12;
	do{
		printf("%d\n",i);
		i++;}
		while(i<10);
		}
else
	printf("nie");
return 0;	
}

