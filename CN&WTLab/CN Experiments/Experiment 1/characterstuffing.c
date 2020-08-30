#include<stdio.h>
#include<string.h>
int main()
{
 int i=0,count=0,n,j=0;
 char data[100],res[100];
 
 printf("Enter number of characters: \n");
 scanf("%d",&n);
 printf("Enter characters: \n");
 scanf("%s",data);
 printf("\nOriginal Data : %s\n",data);
 printf("\nAfter Character Stuffing:\n");
 printf("dlestx");
 for(i=0; i<strlen(data); i++)
 {
    if(data[i] == 'd' && data[i+1]== 'l' && data[i+2] == 'e'){
              printf("dle");
                j=j+3;
    }
    printf("%c",data[i]);
    res[j]=data[i];
    j++;
 }
printf("dleetx\n");
printf("\nReceived Data After Destuffing:\n");
for(i = 0; i < j; i++)
 {
    if(res[i] == 'd' && res[i] == 'l' && res[i] == 'e'){
            i = i+3;
    }

    printf("%c",res[i]);

 }
printf("\n");
 return 0;
}
