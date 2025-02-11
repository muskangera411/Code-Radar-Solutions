// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        for(int j=0;j<i+1;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i];
                break;)
            }
        }
    }
    return 0;
}