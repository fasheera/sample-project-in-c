#include<stdio.h>
int maximum(int,int);
int main(){
	int x,y;
	printf("enter the first number:");
	scanf("%d",&x);
	printf("enter the second number:");
	scanf("%d",&y);
	int z=maximum(x,y);
	printf("the maximum number is =%d",z);
	return 0;
}
int maximum(int a,int b){
	int max;
	if(a>b){
		max=a;
	}
	else{
		max=b;
	}
	return max;
}