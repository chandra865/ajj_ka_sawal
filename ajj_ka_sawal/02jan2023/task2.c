#include<stdio.h>
#include<stdlib.h>
void news(char s[],int i){
   int j;
   for(j=i;s[j];j++){
      s[j]=s[j+1];
   }
   s[j]='\0';
}
int main()
{
    int i,n;
    char s[100];
    //printf("enter size of string: ");
    //scanf("%d",&n);
    //s=(char*)malloc(n*sizeof(char));
    fgets(s,100,stdin);
    for(i=0;s[i];i++){
        switch(s[i]){
           case 'a':
             news(s,i);
             i=0;
             break;
              case 'e':
             news(s,i);
             i=0;
             break;
              case 'i':
             news(s,i);
             i=0;
             break;
              case 'o':
             news(s,i);
             i=0;
             break;
              case 'u':
             news(s,i);
             i=0;
             break;
        }
    }
    s[i]='\0';
    printf("%s",s);
}
