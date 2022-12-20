#include<stdio.h>
main() {


 int i=1;
 int n;
 int sum=1;
 
 printf("enter the value : ");
	scanf("%d",&n);
 
 do{
  	
 	sum*=i;
 	
 	i++;
 	}while(i<=n);
	printf("%d",sum);


}


