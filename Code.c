#include<stdio.h>
#define n 5
int a[n][5];
void add_edge(int s,int dest);
void create_empty();
 void print();
void add_newedge(int s,int dest);
void remove_edge(int s,int dest);
void check_edge(int s,int dest);
void main()
{   
    int s,dest;
    int p,i;
    create_empty();
    printf("\nplease enter number of the pairs of source and destination vertices\n");
    scanf("%d",&p);
     for(i=0;i<p;i++)
       { 
        scanf("%d %d",&s,&dest);  
         add_edge(s,dest);
       }
      print();
       printf("enter  source and destination vertices to add edge\n");
        scanf("%d %d",&s,&dest);
         add_newedge(s,dest);
         print();
       printf("enter the source and destination vertices to remove edge between them \n");
    scanf("%d %d",&s,&dest);
      remove_edge(s,dest);
      print();
      printf("\nenter source and destination to check there is any edge present or not/n");
      scanf("%d %d",&s,&dest);
      check_edge(s,dest);
      print();
       
}
   

void create_empty()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
}
void add_edge(int s,int dest)
{  

    a[s][dest]=1;
    
        
 }
 void print()
 {
     int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    } 
 }
void add_newedge(int s, int dest)
{
    a[s][dest]=1;
    
}
void remove_edge(int s,int dest)
{
    if(a[s][dest]==1)
    {
     a[s][dest]=0;
    }
    else
    {
     printf("there is no edge present between source and destination so we can not delete it/n");

    }
      
}
void check_edge(int s,int dest)
{
    if(a[s][dest]==1)
    {
        printf("yes!an edge is present\n");
    }
    else{
        printf("there is no edge present between source and destination\n");
    }
}

