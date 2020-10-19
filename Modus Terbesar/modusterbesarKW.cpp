#include <stdio.h>
long int arr[100000], i, j, count, l, modus, n;

int main(void){
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	modus=arr[0], l=1;
	for(i=0;i<n-1;i++){
		if(arr[i]>0){
			count=1;
			for(j=i+1;j<n;j++){
				if(arr[i]==arr[j]){
					arr[j]=0;
					count=count+1;
				}
			}
			if(count>1){
				l=count;
				modus=arr[i];
			}
			else{
				if(count==l){
					if(arr[i]>modus){
						l=count;
						modus=arr[i];
					}
				}
			}
		}
	}
	printf("%d\n", modus);
}
