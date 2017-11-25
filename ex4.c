#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void remp (char ch[]){
int i;
i=0;
while (ch[i]!='\0'){
    if ((ch[i]>='A')&&(ch[i]<='Z')){
        ch[i]=ch[i]+32;}
        else if ((ch[i]>='a')&&(ch[i]<='z')){
                 ch[i]=ch[i]-32;}
                 i++;
}
printf (ch);
}
int main()

{
    char *s[20];
printf ("give us a paragraph");
gets (s);
remp(s);
}
