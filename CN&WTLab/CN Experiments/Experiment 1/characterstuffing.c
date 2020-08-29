#include<stdio.h>
int main(){
    int n,i,count = 0;
    printf("Enter number of characters : \n");
    scanf("%d",&n);
    char data[100];
    printf("Enter characters : \n");
    scanf("%s",data);
    printf("\nOriginal data : \n");
    printf("%s\n",data);
    printf("\nAfter character stuffing :\ndlestx");
    for(i=0;i<n;i++){
        printf("%c",data[i]});
        if(data[i] == 'd'){
            count++;
            
        } else if(data[i] == 'l' && count == 1){
            count++;
            
        } else if(data[i] == 'e' && count==2){
            printf("dle");
            count = 0;
            
        } else{
            count = 0;
            
        }
        
    }
printf("dleetx\n");
printf("\nRecived Data After Destuffing :\n");
printf("%s\n",data);

return 0;
}
