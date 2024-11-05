#include <algorithm>
#include <random>

//fonction pour generer un coup aléatoire par l'IA
int genererCoupIA(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1,7);
    return dis(gen);
} 

//fonction pour jouer un coup pour l'IA 
void jouerCoupIA(){
    int coup = genererCoupIA();
    //Appliquer le coup à la grille de jeu
}

//Integration de l'IA dans le jeu
// variable pour stocker le type de joueur (humain ou IA)
enum TypeJoueur {
    HUMAIN,
    IA
};

//variable pour stocker le type de joueur actuel
TypeJoueur TypeJoueurActuel = HUMAIN;

//fonction pour définir le type de joueur 
void definirTypeJoueur(TypeJoueur type){
    TypeJoueurActuel = type;
}

//fonction pour jouer un coup
void jouerCoup(){
    if (TypeJoueurActuel == HUMAIN){
        //demander au joueur humain de jouer un coup
    }else{
        jouerCoupIA();
    }
}