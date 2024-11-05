#include <iostream>
#include <stdlib.h>
#include <string>
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

void drawGrid(int grid[7][6]);
bool playTurn(int grid[7][6], int column, int player);

int main(int argc, char** argv){
    int grille[7][6] = {};
    std::string choix;

    int player = 1;
        drawGrid(grille);

    while (true){
        std::cout << "player_" << player << " -> col :";
        std::cin >> choix;

        if (choix == "exit"){
            break;
        }

        bool success = false;

        if (choix.size() == 1){
            if (choix[0] >= '0' && choix[0] <= '7'){
                int col = choix[0]  - '0';

                success = playTurn(grille, col, player);
            }
        }

        system("CLS");

        if (!success){
            std::cout << "votre choix est incorrect\n";
        } else{
            if (player == 1) player = 2;
            else player = 1;
        }

        drawGrid(grille);
    }

    return 0;
}


// 0, 1, 2
void drawGrid(int grille[7][6]){
    for (int ligne = 0; ligne < 6; ligne++){
        std::cout << "|";
        for (int col = 0; col < 7; col++){
            if (grille[col][ligne] == 1){
                std::cout << "\033[31m*\033[37m";
            } else 
            if (grille[col][ligne] == 2){
                std::cout << "\033[32m*\033[37m";
            }
            else {
                std::cout << "\033[37m*\033[37m";
            }
            std::cout << "|";
        }
        std::cout << "\n";
    }
}

bool playTurn(int grid[7][6], int column, int player){
    for (int line = 5 ; line >= 0; line--){
        if (grid[column - 1][line] == 0){
            grid[column - 1][line] = player;
            return true;
        }
    }
    return false;
}

// variable pour stocker les scores
int scoreJoueur1 = 0;
int scoreJoueur2 = 0;

//fonction pour afficher les scores 
void AfficherScore(){
    std::cout << "player_1:" << scoreJoueur1 << std::endl;
    std::cout << "player_2:" << scoreJoueur2 << std::endl;
}

//fonction pour mettre à jour les scores 
void mettreAJourScores(int player, int points){
    if (player_1 == 1){
        scoreJoueur1 += points;
    }
    else{
        player_2 += points;
    }
    
}

//fonction pour determiner le gagnant 
void determinerGagnant(){
    if (scoreJoueur1 > scoreJoueur2){
        std::cout << "player_1 a gagné!" << std::endl;
    } else if (scoreJoueur2 > scoreJoueur1){
        std::cout << "player_2 a gagné!" << std::endl;
    }else{
        std::cout << "Egalité!" << std::endl;
    }
    
}