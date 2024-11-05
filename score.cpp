// variable pour stocker les scores
int scoreJoueur1 = 0;
int scoreJoueur2 = 0;

//fonction pour afficher les scores 
void AfficherScore(){
    std::cout << "Score Joueur 1:" << scoreJoueur1 << std::endl;
    std::cout << "Score Joueur 2:" << scoreJoueur2 << std::endl;
}

//fonction pour mettre à jour les scores 
void mettreàJourScores(int joueur, int points){
    if (joueur == 1){
        scoreJoueur1 += points;
    }
    else{
        scoreJoueur2 += points;
    }
    
}

//fonction pour determiner le gagnant 
void determinerGagnant(){
    if (scoreJoueur1 > scoreJoueur2){
        std::cout << "Joueur 1 a gagné!" << std::endl;
    } else if (scoreJoueur2 > scoreJoueur1){
        std::cout << "Joueur 2 a gagné!" << std::endl;
    }else{
        std::cout << "Egalité!" << std::endl;
    }
    
}