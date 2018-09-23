#include<stdio.h>
int main(){
  long n,d;
  scanf("%d %d",&n,&d);
  long a[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int count = 2;
  for(int i=0;i<n;i++){
    long l = a[i];
    long r = a[i+1];
    if(r-l < 2*d){
      continue;
    }
    if(l+d == r-d){
      count +=1;
    }
    else{
      count+=2;
    }
  }
  printf("%d",count);
  return 0;
}
