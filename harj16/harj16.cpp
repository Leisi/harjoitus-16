/**************************************************************
* Tehtävä: Harjoitus 16
* Tekijä: Joni Laine
* PVM: 27.10.2013
*
* Kuvaus:
* Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
* Tietueeseen talletetaan seuraavat tiedot:
* etunimi (merkkijono; C:n merkkitaulukko)
* sukunimi (merkkijono; C:n merkkitaulukko)
* koulumatka (reaaliluku)
* osoite (merkkijono; C:n merkkitaulukko)
* postinumero (merkkijono; C:n merkkitaulukko)
* kengannumero (kokonaisluku)
*
* Ohjelma tulostaa lopuksi tietueen tiedot naytölle.
*
***************************************************************/


#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
using namespace std; 
	struct nimitila
	{
		string etunimi;
		string sukunimi;
		string 	postinumero;
		string	osoite;
		int kengannumero;
		double koulumatka;
	};
	int main()
	{
		nimitila henkilo;

		cout<<"Anna etunimi: ";
		getline(cin,henkilo.etunimi);
		cout<<"Anna sukunimi: ";
		getline(cin, henkilo.sukunimi);
		cout<<"Anna koulumatkan pituus: ";
		cin>>henkilo.koulumatka;
		cout<<"Anna osoitteesi: ";
		cin.get();
		getline(cin, henkilo.osoite);
		cout<<"Anna postinumerosi: ";
		getline(cin, henkilo.postinumero);
		cout<<"Anna kengannumero: ";
		cin>>henkilo.kengannumero;
		cout<<"Etunimi: "<<henkilo.etunimi<<endl;
		cout<<"Sukunimi: "<<henkilo.sukunimi<<endl;
		cout<<"Osoite: "<<henkilo.osoite<<endl;
		cout<<"Postinumero: "<<henkilo.postinumero<<endl;
		cout<<"Kengannumero: "<<henkilo.kengannumero<<endl;
		cout<<"Koulumatka: "<<henkilo.koulumatka<<endl;
	}
