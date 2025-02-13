// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){scanf("%d",&arr[i]);}
    int min=INT_MAX,second=INT_MAX;
    for(int i=0;i<a;i++){if(arr[i]<min){second=min;min=arr[i];}}
    for(int i=0;i<a;i++){if(arr[i]<second && arr[i]>min){second=arr[i];}}
    if(second==INT_MIN){
        second=-1;
    }
    printf("%d",second);
    return 0;
}