#include <stdio.h>
int main()
{
	int price;
	int qun;
	int tot;
	
	for (int count=0;count<3;count++){
		scanf("%d",&price);
		scanf("%d",&qun);
		scanf("%d",&tot);
		tot=tot+qun*price;
		printf("the total=%d",tot);
	}
	
	return 0;
}