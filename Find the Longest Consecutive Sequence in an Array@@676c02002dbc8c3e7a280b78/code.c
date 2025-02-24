#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }int max=1,size;
    for(int i=0;i<a;i++){
        size=sizeof(arr);
        }

        if(size>max){
            printf("%d",size);
    }
    return 0;

}