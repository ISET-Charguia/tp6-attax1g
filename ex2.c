#include <stdio.h>
#include <string.h>


#define MAX 20

void conj (char verbe[]){
 int i=0;int taille=0;
taille=strlen(verbe);
printf("longueur de %d\n",taille);
printf("je ");
for(i=0;i<taille-1;i++){
printf("%c",verbe[i]);
}
printf("\ntu ");
for(i=0;i<taille-1;i++){
printf("%c",verbe[i]);
}
printf("s\n");
printf("il ");
for(i=0;i<taille-1;i++){
printf("%c",verbe[i]);
}
printf("\nNous ");
for(i=0;i<taille-2;i++){
printf("%c",verbe[i]);
}
printf("ons\n");
printf("Vous ");
for(i=0;i<taille-1;i++){
printf("%c",verbe[i]);
}
printf("z\n");
printf("ils ");
for(i=0;i<taille-1;i++){
printf("%c",verbe[i]);
}
printf("nt\n");
}
int main(){

char verbe[MAX]="";
printf ("donner un verbe : ");
gets(verbe);
conj (verbe);


return 0;
}
