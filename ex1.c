#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void comptage (char ch1[]){
int i,k,f;
k=1;
i=0;
f=strlen(ch1);
ch1[0]=ch1[0]-32;
while (ch1[i] != '\0'){
    if ((ch1[i]==' ')||(ch1[i]==':')||(ch1[i]==',')||(ch1[i]=='?')||(ch1[i]=='!')||(ch1[i]=='.')){
        k++;
         ch1[i+1]=ch1[i+1]-32;}
        i++;
}
printf ("le nombre de mot est %d: ",k);
printf ("le nombre nouv chaine est %s",ch1);
}

int main()
{
    char ch[20];
    printf ("enter une chaine ");
    gets (ch);

    comptage(ch);
}


