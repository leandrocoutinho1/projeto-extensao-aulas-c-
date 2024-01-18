#include <iostream>

using namespace std;

int main()
{
    int a, b, m;

    cin >> a >> b;

    m = ((a*2)+(b*3))/5;

    if(m>=7){
        cout << "Aprovado" << endl;
    }
    else if(m>=5){
        cout << "Exame" << endl;
    }
    else{
        cout << "Reprovado" << endl;
    }

    return 0;
}