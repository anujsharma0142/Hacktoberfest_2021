#include <stdio.h>
#include <stdlib.h>
void abc_pattern();
void star_pattern();
void digit_pattern();
void digit_spattern();
void pascle();
void floyd();
 int i,j;
int main()
{

   abc_pattern();
   star_pattern();
   digit_pattern();
   digit_spattern();
   pascle();
   floyd();

   return 0;
}
  void abc_pattern()
  {    printf("ABC PATTERN\n");
        for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
       printf("\n");
       for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
       printf("\n");
             for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
       printf("\n");

             for(i=70;i>65;i--)
    {
        for(j=65;j<i;j++)
        {
            printf("%c",j);

        }
        printf("\n");
    }
       printf("\n");
                    for(i='E';i>='A';i--)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
       printf("\n");
  }
void star_pattern()
{   printf("star pattern\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
        for(i=0;i<5;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
     for(i=0;i<5;i++)
    {
        for(int k=4;k>i;k--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
        for(i=0;i<5;i++)
    {
      for(int k=0;k<i;k++)
      {
          printf(" ");
      }
        for(j=4;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
        for(i=0;i<5;i++)
    {
        for(int k=4;k>i;k--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("\n");
}
void digit_pattern()
{      printf("123 pattern\n");
          for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
       printf("\n");
        for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
     printf("\n");
      for(i=5;i<=1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
     printf("\n");
}
void digit_spattern()
{    int p=1;
    for(i=1;i<=5;i++)
    {
        for(int k=5;k>i-2;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",p);
            p++;
        }
        int q=p-2;
        p=j;
        for( j=1;j<i;j++)
        {
            printf("%d",q);
            q--;
        }
        printf("\n");

    }
    printf("\n");
}
void pascle()
{
   printf("\n pascle tringle\n");
   int i,j,a=1;
for(i=0;i<6;i++)
{     for(int k=0;k<10-i;k++)
{
    printf(" ");
}
    for(j=0;j<=i;j++)
    {  if(i==0||j==0)
                {
                    a=1;
                }
                else
                    { a=a*(i-j+1)/j;}
                printf(" %d",a);
    }
printf("\n");
}}

void floyd()
{  printf("\n flyod tringle\n");
    int p=1;
    for(i=1;i<=4;i++)
{
    for(j=1;j<=i;j++)
    {
        printf (" %d",p);
        p++;
    }
     printf("\n");
}

}
