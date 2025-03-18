#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int minDiff=0 first,second;

    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if((arr[i]-arr[j]<minDiff)||(arr[j]-arr[i]<minDiff)){
                first=arr[i];second=arr[j];
            printf("%d %d",first,second);
            }
        }
    }
    
}