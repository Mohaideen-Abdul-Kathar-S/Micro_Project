#include<stdio.h>
#include<string.h>


typedef struct {
	char fname[30];
	float vper;
	float vcount;
}field;


void main(){
	int n,vote,voters=0,tvoters=0;
  
	printf("Enter No. of Field : ") && scanf("%d",&n);
	field arr[n+2];
  
	for(int i=0;i<n;i++){
	printf("Enter Field %d Name : ",i+1) && scanf("%s",arr[i].fname);
  }
	strcpy(arr[n].fname,"Nota");
	strcpy(arr[n+1].fname,"Is Voting Process Completed");
  
	printf("The Time for Voting has Started !!!\n");
	for(int i=0;i<=n+1;i++){
		arr[i].vcount=0;
		}
  
	while(n+2!=vote){
		printf("The candidates\n");
		for(int i=0;i<=n+1;i++){
		printf("%d.  %s\n",i+1,arr[i].fname);
		}
		printf("\nEnter Your Vote : ") && scanf("%d",&vote);
		if(vote<=n+1){
			voters++;
			arr[vote-1].vcount++;
		}else if(vote==n+2){
			break;
		}
		tvoters++;
	}
  
	for(int i=0;i<=n+1;i++){
		arr[i].vper=((arr[i].vcount/voters)*100);
		}
  
	printf("Results :\n");
	for(int i=0;i<=n;i++){
		printf("%d.  %s 	%0.3f%%\n\n",i+1,arr[i].fname,arr[i].vper);
		}
		printf("\n\nTotal Voters %d\n",tvoters);
		printf("missed Votes %d\n\n",tvoters-voters);
}
