#include <iostream>

using namespace std;

int main()
{
    string kleur ; // gaat ook samen kleur,plural_noun,celebirty
    string voornaamwoord;
    string beroemdheid ;

    cout <<"Geef kleur in\n";
    getline(cin,kleur);
    cout <<"Geef een voornaamwoord in\n";
    getline(cin,voornaamwoord);
    cout <<"Geef een beroemde naam in of jou naam , mij ook goed\n";
    getline(cin,beroemdheid );

    cout << "Rozen zijn " << kleur << endl;
    cout << voornaamwoord << " zijn blauw "<< endl;
    cout << "ik hou van "<< beroemdheid << endl;
}
