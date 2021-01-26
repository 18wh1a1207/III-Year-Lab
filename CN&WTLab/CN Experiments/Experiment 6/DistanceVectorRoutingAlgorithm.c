#include<stdio.h>
struct node {
    unsigned dist[25];
    unsigned from[25];
} rt[10];

int main() {
    int cost_matrix[25][25];
    int nodes,i,j,k,count=0;
    printf("--------Distance Vector Routing Algorithm---------");
    printf("\nEnter the number of nodes : ");
    scanf("%d",&nodes);
    printf("Enter the cost matrix :\n");
    for(i=0;i<nodes;i++) {
        for(j=0;j<nodes;j++) {
            scanf("%d",&cost_matrix[i][j]);
            cost_matrix[i][i]=0;
            rt[i].dist[j]=cost_matrix[i][j];
            rt[i].from[j]=j;
        }
    }
        do {
            count=0;
            for(i=0;i<nodes;i++)
            //We choose arbitary vertex k and we calculate the direct distance from the node i to k using the cost matrix
            //and add the distance from k to node j
            for(j=0;j<nodes;j++)
            for(k=0;k<nodes;k++)
                if(rt[i].dist[j]>cost_matrix[i][k]+rt[k].dist[j]) {
                    //We calculate the minimum distance
                    rt[i].dist[j]=rt[i].dist[k]+rt[k].dist[j];
                    rt[i].from[j]=k;
                    count++;
                }
        }while(count!=0);
        for(i=0;i<nodes;i++)
        {
            printf("\n\nFor router %d\n",i+1);
            for(j=0;j<nodes;j++)
            {
                printf("\t\nnode %d via %d Distance %d ",j+1,rt[i].from[j]+1,rt[i].dist[j]);
            }
        }
    printf("\n\n");
    
}
