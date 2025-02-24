#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }int freq[a];
    int i;
    freq[i]=-1;
    for(int i=0;i<a;i++){
        if(freq[i]!=-1){continue;}
    int count=1;
    for(int j=i+1;i<a;j++){
        if(arr[i]==arr[j]){
            count++;
            freq[j]=0;
        }
    }freq=count;
    }for(int i=0;i<a;i++){
        printf("%d %d",arr[i],freq[i]);
    }
    return 0;

}