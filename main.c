/*
Lors du concours g�n�ral agricole, l'�preuve reine, celle que tout fermier r�ve de remporter, est celle du plus beau Karva (l'�quivalent de notre taureau). La comp�tition est bas�e sur des r�gles strictes : chaque animal re�oit une note en fonction de ses caract�ristiques et celui qui a re�u la plus grande note est d�clar� champion. Vous souhaiteriez conna�tre les r�sultats avant tout le monde ; aussi, vous d�cidez d'�crire un programme qui vous donnera la note de chacun des Karvas en comp�tition.

Ce que doit faire votre programme :
Votre programme doit d'abord lire le nombre de Karvas en comp�tition. Ensuite, pour chaque Karva, il doit :

lire 4 entiers : son poids, son �ge, la longueur de ses cornes et la hauteur au garrot ;
afficher sa note, sachant qu'elle s'obtient en multipliant la longueur des cornes par la hauteur au garrot, valeur � laquelle on ajoute le poids.
EXAMPLE
input:
2
100
5
25
90
300
10
15
120

output:
2350
2100
*/
#include <stdio.h>

int main(){
    int nbKarvas, poids, age, longeurCornes, hauteurGarrot, i;
    int note, maxNote, gagnantIndex;

    maxNote = 0;
    gagnantIndex = 0;

    printf("Entrer le nombre de Karvas en competition : ");
    scanf("%d",&nbKarvas);

    for(i = 0 ; i < nbKarvas ; i++){
        printf("Entrer les caracteristiques du Karva %d : \n",i+1);

        printf("Poids : ");
        scanf("%d",&poids);

        printf("Age : ");
        scanf("%d",&age);

        printf("Longueur des cornes : ");
        scanf("%d",&longeurCornes);

        printf("Hauteur au garrot : ");
        scanf("%d",&hauteurGarrot);

        note = longeurCornes * hauteurGarrot + poids;

        printf("Note de Karva %d : %d \n\n", i+1, note);
    }

    if (note > maxNote){
        maxNote = note;
        gagnantIndex = i+1;
    }

    printf("Le Karva gagnant est le Karva %d avec une note de %d\n", gagnantIndex, maxNote);

    return 0;
}
