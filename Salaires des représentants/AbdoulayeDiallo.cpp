//But:  Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
//affiche son salaire.Et lorsqu'on entre - 1 à la valeur des ventes on quitter le programme.

//Auteur:Diallo Abdoulaye
//Date:2020-10-03




#include<iostream>
using namespace std;

int main()
{

	//Variables utilisées pour ce programme


	float VenteBrute;

	const int  GainSem = 250;                                                  //C'est les 250$ par semaine

	float cumul;



	cout << "Veuillez entrer votre vente brute hebdomadaire :";                        //l'utilisateur voit cette question 
	cin >> VenteBrute;															      //l'utilisateur rentre un nombre




	while (VenteBrute != -1 && VenteBrute >= 0)               //Traduction:Tant que VenteBrute(ce qui est rentré par l'utilisateur) est différent 
						                                     // de -1 et que VenteBrute est plus grand ou égal à 0
														    //Si les conditions sont réspecté, (Entre dans les aqualads) 
													       //Si c'est pas le cas, (Quitte le programme)

	{


		cumul = (VenteBrute * 7.5) / 100 + GainSem;						//Le cumul est le salaire,donc c'est la VenteBrute multiplié par le taux divisé par 100
																		// additionner à la constante GainSem qui est égal à 250 qui font le cuml(soit le salaire)
		cout << "Votre salaire est de : " << cumul << "$" << endl;		//Affiche le cumul(Salaire)

		system("pause");												//Met le programme en pause 
		system("cls");													// efface le programme de l'écran(C'est-à-dire le 'cout')

		cout << "Veuillez entrer votre vente brute hebdomadaire :";		//L'utilisateur voit cette question
		cin >> VenteBrute;												//L'utilisateur rentre un nombre	


	}		            /* ...et le programme continue sur cela tant que les condions sont réspectés ...*/



	/*
          Plan tests


			VenteBrute						GainSem				         Taux à 7,5%                  Cumul

			6000							  250			             (7.5*6000)/100=450           450+250=700


			200								  250                         (7.5*200)/100=15			  250+15=265


			0								  250                         (7.5*0)/100=0					250


			-1																						Quitte le programme

			4650.50							  250					(7.5*4650.50)/100=348.7875		348.7875+250=598.7875

			-40																						 Quitte le programme


*/





}