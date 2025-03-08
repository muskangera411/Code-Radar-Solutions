#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int prime=0;
    for(int i=0;i<=a;i++){
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j!=0){
                prime++;
                break;
            }
        }
    }
        printf("%d",prime);
        return 0;
}