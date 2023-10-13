/**
 * @file Individu.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief  la classe Individu permet de representer une personne a partir de son nom et de son prénom
 * 
 * @details au dela de decrire un Individu par son nom et son prénom la classe Individu
 * permet de représenter également la Voiture qu'il conduit
 * 
 * 
 * la Voiture conduite par l'Individu est représenter  par un pointeur vers un objet de la classe Voiture
 * 
 * @warning un Individu ne peut conduiçre qu'une seule Voiture
 */
class Individu
{
    // ATTRIBUTS
  public:
  /**
   * @brief 
   * Le nom de l'individu
   */
    string nom;         
    /**
     * @brief 
     *  Le prénom de l'individu
     */
    string prenom;      
    /**
     * @brief 
     * Lien avec la voiture de l'individu
     */
    Voiture *maVoiture; 

    // MÉTHODES
  public:
    
    /**
     * @brief Construit un objet individu a partir de son nom (1er paramètre)
     * et de son prénom (deuxieme paramètre)
     * 
     */
    Individu(string = "", string = "");
    /**
     * @brief detruit l'objet de classe individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief  Affiche l'identité de l'individu
     * 
     * @return string de la forme nom prénom
     * 
     * @bug un espace de trop entre le non et le prénom
     * 
     * @todo ajouter un paramètre permetant de chosiir un affichage du type nom prénom ou prénom nom
     */
    string toString();        
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief definit la Voiture conduit par un Individu
     * 
     * @param voiture [int]  represente un pointeur vers l'objet Voiture conduite par l'individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H