#include<iostream>
using namespace std;

int main()
{
    int start , endh , cunt = 0, i;
    cin >> start >> endh ;

    if(start<endh)
    {
        i = start ;
        while(i!=endh)
        {
            cunt++;
            i++;
        }
        cout << "O JOGO DUROU " << cunt << " HORA(S)" << endl;
    }
    if(start>=endh)
    {
        cout << "O JOGO DUROU " << 24 - start + endh  << " HORA(S)" << endl;
    }
    return 0;
}