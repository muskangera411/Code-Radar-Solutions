#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);}
    int x;
    scanf("%d",&x);
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(!used[i] && !used[j] && arr[i]+arr[j]==x){
            printf("%d %d\n",arr[i],arr[j]);
            used[i] = used[j] = 1; 
        
         }
        }
    }
    return 0;
}
