#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int a[n+1];
	for (i=1;i<n+1;i++){
		scanf("%d",&a[i]);
	}
	for (i=1;i<n+1;i++){
		k = a[i];
		j = i-1;
		while ((j>0) && (a[j]>k)){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = k;
	}
	for (i=1;i<n+1;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
