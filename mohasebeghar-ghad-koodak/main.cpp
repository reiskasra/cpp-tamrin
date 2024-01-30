#include <iostream>

using namespace std;

int main()
{
    cout << " Mohasebeghar ghad koodak " << endl;
    cout << "1) Pesar , 2) Dokhtar" <<endl;

    int gozine;
    cout << "Gozine ra vared konid : ";
    cin >> gozine;

    switch(gozine)
    {
 case 1:
    int ghadmadarp,ghadpedarp,mohasebep;
        cout << "ghad pedar ra vared konid : ";
        cin >> ghadpedarp;

        cout << "ghad madar ra vared konid : ";
        cin >> ghadmadarp;
        mohasebep = ghadpedarp + ghadmadarp + 13;

        cout << "Ghad farzand shoma : " << mohasebep / 2;
        break;
 case 2:
    int ghadmadard,ghadpedard,mohasebed;
        cout << "ghad pedar ra vared konid : ";
        cin >> ghadpedard;

        cout << "ghad madar ra vared konid : ";
        cin >> ghadmadard;

        mohasebed = ghadmadard + (ghadpedard - 13);
        cout << "Ghad farzand shoma : " << mohasebed / 2;
        break;
 default:
    cout << "Gozine vorodi Yaft Nashod !!!!";
    }

}
