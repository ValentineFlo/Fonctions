// Fonctions.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

// apeler la fonction plusieur fois, eviter code redondant
// fonction avec un type
// fonction sans type void
/*
En trois partie :

Première partie :
type retour (void ...)
nom
parenthèses (paramètres entrées, les parenthèse peuvent être vide et ne pas avoir de paramètres)
Deuxième partie :
Code de la logique de la fonction et utilisation des paramètres
Troisième partie :
Retour de la fonction et donc des variables transformés

*/

// fonction toujours a déclarer dans les headers


void Show()
{
    std::cout << "Bonjour" << '\n';
}

int Somme(int PremierNB, int SecondNB )
{
    return PremierNB + SecondNB;
}

float SommeAB()
{
    float a = 8.2f;
    float b = 9.8f;
    return a + b;
}


int main()
{
    int c = 10;
    int d = 11;

    //Show(); // type void pas de cout
    std::cout << Somme(c, d) << '\n';
    //std::cout << SommeAB() << '\n';
}

