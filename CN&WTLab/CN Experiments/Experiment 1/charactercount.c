#include <stdio.h>
#include<string.h>
int main() {
    int NoOfFrames;
    char Frames[100][100];
    int h[10];
    
    printf("Enter the no. of frames : ");
    scanf("%d",&NoOfFrames);
    
    for(int i=1;i<=NoOfFrames;i++){
        printf("Frame %d :",i);
        scanf("%s",Frames[i]);
    }
    for(int i=1;i<=NoOfFrames;i++){
        h[i] = strlen(Frames[i])+1;
    }
    printf("AT THE SENDER");
    printf("\nData as frames:");
    printf("\n");
    for(int i=1; i<=NoOfFrames; i++){
        h[i] = strlen(Frames[i]);
        printf("Frame %d : %d%s",i,h[i]+1,Frames[i]);
        printf("\n");
      
    }
    printf("Data transmitted:");
    for(int i=1;i<=NoOfFrames;i++){
        printf("%d%s",h[i]+1,Frames[i]);
    }
    printf("\nAT THE RECEIVER\n");
    printf("The data received.\n");
    printf("The data after removing count char: ");
    for(int i=1;i<=NoOfFrames;i++){
        printf("%s",Frames[i]);
    }
    printf("\nThe data in the frame form: \n");
    for(int i=1;i<=NoOfFrames;i++){
        printf("Frame%d: %s\n",i,Frames[i]);
    }
        
    

    return 0;
}
