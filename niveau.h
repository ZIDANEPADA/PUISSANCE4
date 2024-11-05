enum Niveau{
    FACILE,
    MOYEN,
    DIFFICILE
};

//variable pour stocker le niveau actuel du jeu
Niveau niveauActuel = FACILE;

// fonction pour definir le niveau du jeu 
void definirNiveau(Niveau niveau){
    niveauActuel = niveau;
}

//fonction pour obtenir le niveau actuel
Niveau obtenirNiveau(){
    return niveauActuel;
}