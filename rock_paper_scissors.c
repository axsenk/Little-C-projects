#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<stdarg.h>

void affiche(const char *format, ...) {
    char phrase[256];   // buffer pour construire la phrase finale
    va_list args;
    va_start(args, format);
    vsprintf(phrase, format, args);  // construit la phrase finale
    va_end(args);

    // Découper en mots et afficher progressivement
char *mot = strtok(phrase, " ");
    while (mot != NULL) {
        printf("%s ", mot);
        fflush(stdout);
        usleep(300000);  // 0,3s
        mot = strtok(NULL, " ");
    }
    printf("\n");
}

void choix(){
char suite;
int choice;
int bot;
affiche("Saisissez le nombre correspondant à votre choix:\n0-Pierre\n1-Feuille\n2-Ciseaux\n");
sleep(1);
scanf("%d",&choice);
if (choice == 0){
affiche("Vous avez jouez pierre\n");
sleep(1);
affiche("Le bot a jouer:\n");
sleep(1);
srand(time(NULL));
bot = rand()%2;
if (bot == 0){
affiche("Pierre\n");
sleep(1);
affiche("Match null!\n");
sleep(1);
}
else if (bot == 1){
affiche("Feuille\n");
sleep(1);
affiche("Vous avez perdu!\n");
sleep(1);
}
else if(bot == 2){
affiche("Ciseaux\n");
sleep(1);
affiche("Vous avez gagné!\n");
sleep(1);
}


}
else if(choice == 1){
affiche("Vous avez jouez feuille\n");
sleep(1);
affiche("Le bot a jouer:\n");
sleep(1);
srand(time(NULL));
bot = rand()%2;
if (bot == 0){
affiche("Pierre\n");
sleep(1);
affiche("Vous avez gagné!\n");
sleep(1);
}
else if (bot == 1){
affiche("Feuille\n");
sleep(1);
affiche("Match null!\n");
sleep(1);
}
else if (bot == 2){
affiche("Ciseaux\n");
sleep(1);
affiche("Vous avez perdu!\n");
sleep(1);
}


}
else if(choice == 2){
affiche("Vous avez jouez ciseaux\n");
sleep(1);
affiche("Le bot a jouer:\n");
sleep(1);
srand(time(NULL));
bot = rand()%2;
if (bot == 0){
affiche("Pierre\n");
sleep(1);
affiche("Vous avez perdu!\n");
sleep(1);
}
else if (bot == 1){
affiche("Feuille\n");
sleep(1);
affiche("Match gagné!\n");
sleep(1);
}
else if (bot == 2){
affiche("Ciseaux\n");
sleep(1);
affiche("Match null!\n");
sleep(1);
}

}
else{
affiche("Saisie invalide veuillez saisir un nombre entre 0,1et2\n");
sleep(1);
}
affiche("Voulez vous rejouer[y/n]");
scanf(" %c",&suite);
if (suite == 'y'){
choix();
}
else if (suite == 'n'){
affiche("Merci d'avoir jouer n'hésitez pas à reéssayer\n");
}
}

int main() {

affiche("Bienvenue au jeu de pierre,feuille ciseaux\n");
sleep(1);
choix();
return 0;
}