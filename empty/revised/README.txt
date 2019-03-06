#include<stdio.h>

#include<string.h>

#include<stdlib.h>

void expand(char[],char[]);

int main()

{

 char *s1,*s2;

 int slen;

 printf("enter the length of the string");

 scanf("%d",&slen);

 if(slen<=0)

  {

   printf("length is required ,null string is not accepted");

   return 0;

  }

 s1=(char*)malloc(sizeof(char)*slen);

 printf("enter the string");

 scanf("%s",s1);

 s2=(char *)malloc(sizeof(char)*30);

 expand(s1,s2);

 return 0;

}

void expand(char *a,char *b)

{

 int i=0,j=0,count=0;

 char c,d;

 if(a[0]!='-' && a[strlen(a)-1]!='-')

 {

 for(i=0;i<strlen(a);i++)

 {

  if(a[i]=='-')

  {

   if(((a[i-1]>='a' && a[i-1]<='z' && a[i+1]>='a' && a[i+1]<='z') || (a[i-1]>='A' && a[i-1]<='Z' && a[i+1]>='A' && a[i+1]<='Z') || (a[i-1]>='0'&& a[i-1]<='9' && a[i+1]>='0' && a[i+1]<='9')) && (a[i+1]>a[i-1]))

{

 //  printf("i-1:%c i+1:%c",a[i-1],a[i+1]);

   c=a[i-1];

   d=a[i+1];

   while(c<d)

   {

    c=c+1;

    b[j]=c;

    j=j+1;

   }

   i=i+2;

  }

  else

  {

    count=count+1;

    printf("invalid input");

    break;

  }

  }

   b[j]=a[i];

   j=j+1;

 }

 if(count==0)

 printf("%s",b);

 }

 else

 {

  count=count+1;

  printf("invalid input");

 }


}

