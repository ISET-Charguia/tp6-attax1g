#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *remplace(char ch[], char old, char nw) {
int i=0;
char *ch1;
ch1="";

while (ch[i]!='\0'){

    if (ch[i]==old){
        ch[i]=nw;
    }
    strcat (ch1,ch[i]);
    i++;
}
return ch1;
}
int main()
{
    char *s[20];
    char x,z;
    printf ("give us the word please  : ");
   gets (s);
   printf ("give us the caracter that you want to change the caracter that you want to get his place :  ");
   scanf ("%c %c",&z,&x);
   printf ("the new one is %s",remplace(s,z,x));
}
