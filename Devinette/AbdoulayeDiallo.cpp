//But: Donner 5 chance � l'utilisateur por trouver le nombre iRandom et v�rifie si l'utilisateur � 
//entrez un nombre compris entre 1 et 100 et lui dit s'il gagne ou il perd.

//Auteur:Diallo Aboulaye
//Date:2020-10-03

#include <time.h>
#include<iostream>
using namespace std;







int main()
{
	setlocale(LC_ALL, "fr");

	//Variables utilis�es
	int iRandom; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
	int nombre;
	int essai;
	srand(time(0)); // pour activer l�al�atoire dans le programme
	iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom





	for (essai = 4; essai >= 0; essai--) //Pour essai �gal � 5, essai doit se rendre � 1 en increment de -1  
	{
		cout << "Entrez un nombre :"; //L'utilisateur voit cette question
		cin >> nombre;				 //L'utilisateur rentre un nombre



		if (nombre >= 1 && nombre <= 100)	//Si le nombre rentrer est plus grand ou �gal � 1 et plus petit
											//�gal � 100,on rentre dans les aqualads, sinon on se rend au "else"
		{


			if (nombre > iRandom)		//Si le nombre rentr� est plus grand que iRandom on rentre dans le aqualads	
			{
				cout << "PLUS PETIT." << endl;		//On affiche "PLUS PETIT"
				cout << essai << " essai restants!" << endl; //On affiche le nombre d'essai restants


			}
			else                         //Si la premier condition est fausse, on rentre la condition 2
			{
				if (nombre < iRandom)	//SI le nombre est plus petit que iRandom on rentre dans les aqualads
				{
					cout << "PLUS GRAND." << endl;		//On affiche "PLUS GRAND"
					cout << essai << " essai restants!" << endl; //On affiche le nombre d'essai restants

				}
				else         //Si les deux premi�re conditions sont fausses c'est que c'est la derni�re qui est vrai
							 //Donc on rentre dans les aqualads 
				{
					if (nombre == iRandom)  //Si le nombre est �gal � iRandom
					{
						cout << "Bravo!!!" << endl;		//On affiche Bravo
						system("pause");					//On met le system en pause 					
						system("cls");						//On fait un nettoyage de l'�cran 
						return main();						//On recommence le programme
					}
				}


			}


			if (essai == 0)	  //Si le nombre d'essai atteint 1 		
			{
				cout << endl << "Perdu! Le nombre �tait:  " << iRandom << endl; //On affiche Perdu et le bon nombre
				system("pause");					//On met le system en pause 					
				system("cls");						//On fait un nettoyage de l'�cran 
				return main();						//On recommence le programme

			}
		}
		else				//Else pour if (nombre >= 1 && nombre <= 100)
		{
			cout << "Entrez un nombre entre 1 et 100! " << endl; //On affiche cela
			system("pause");					//On met le system en pause 					
			system("cls");						//On fait un nettoyage de l'�cran 
			return main();						//On recommence le programme
		}


	}


	/*		Tests		 Exemple:iRandom               Cin                          Cout

						65							12                          Plus grand

						2							-4424                      Entrez un nombre entre 1 et 100!

						90                          100                          Plus petit

						13							 0                         Entrez un nombre entre 1 et 100!

*/


}



























