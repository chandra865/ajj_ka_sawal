#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,min1,min2,n,index;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    min1=arr[0];
    for(i=1;i<n;i++){
        if(min1>arr[i]){
            min1=arr[i];
            index=i;}
    }
    min2=arr[0];
    for(i=1;i<n;i++){
       if(min2>arr[i]){
        if(i==index)
            continue;
        min2=arr[i];
       }
    }
    printf("%d %d",min1,min2);
}
