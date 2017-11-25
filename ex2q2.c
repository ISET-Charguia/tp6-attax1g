#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mahdi (char mot[]){
int k=0;
k=strlen(mot)-1;
if ((mot[k]=='s')||(mot[k]=='x')||(mot[k]=='z')||((mot[k]=='u')&&(mot[k-1]=='a')&&(mot[k]=='e'))||(((mot[k]=='u')&&(mot[k-1]=='a')))||(((mot[k]=='u')&&(mot[k-1]=='e')))) {
 printf ("error");
}
else  {
mot[k+1]='s';puts (mot);
}


}
int main()
{
    char *s[20];
gets (s);
mahdi(s);

}
