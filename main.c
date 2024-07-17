/*
Lors du concours général agricole, l'épreuve reine, celle que tout fermier rêve de remporter, est celle du plus beau Karva (l'équivalent de notre taureau). La compétition est basée sur des règles strictes : chaque animal reçoit une note en fonction de ses caractéristiques et celui qui a reçu la plus grande note est déclaré champion. Vous souhaiteriez connaître les résultats avant tout le monde ; aussi, vous décidez d'écrire un programme qui vous donnera la note de chacun des Karvas en compétition.

Ce que doit faire votre programme :
Votre programme doit d'abord lire le nombre de Karvas en compétition. Ensuite, pour chaque Karva, il doit :

lire 4 entiers : son poids, son âge, la longueur de ses cornes et la hauteur au garrot ;
afficher sa note, sachant qu'elle s'obtient en multipliant la longueur des cornes par la hauteur au garrot, valeur à laquelle on ajoute le poids.
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
