#include<stdio.h>
int main(){
  int i,j,n,target;
  scanf("%d %d",&n,&target);
  int a[n];
  for(i=0;i<n;i++){
         scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(a[i]+a[j] == target){
        printf("%d %d\n",i,j);
        break;
      }
      break;
    }
  }
return 0;
}
