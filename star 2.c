#include<stdio.h>
int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int x=4;x>=1;x--){
		for(int y=1;y<=x;y++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}