#include<stdio.h>
void printspace (int);
void printstar (int);

int main()
{
    int num;
    int j;
    scanf("%d",&num);
    for(j=0;j<num;j++)
    {
      printspace(num-j-1);
      printstar (2*j+1);
      printf("\n");

    }
    return 0;
}


void printspace (int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        printf(" ");
    }

}

void printstar (int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        printf("*");
    }
}
