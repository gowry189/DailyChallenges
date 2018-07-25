#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j,count=0;
	char a[1000001];
	scanf("%d",&n);
	scanf("%s",a);
	for(i=0;i<strlen(a);i++){
		for(j=i+1;j<strlen(a);j++){
			if(a[i]==a[j]){
				count++;
				break;
			}
		}
	}

	if(count<26)
	printf("%d",count);
	else
	printf("-1");
	return 0;
}
