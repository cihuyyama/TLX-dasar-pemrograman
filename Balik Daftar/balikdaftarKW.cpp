#include <stdio.h>

int main(void){
	int i=0, a[100];
	
	while (scanf("%d", &a[i]) != EOF){
		i = i + 1;
		continue;
	}
	
	for (i=i-1;i>=0;i--){
		printf("%d\n", a[i]);
	}
}
