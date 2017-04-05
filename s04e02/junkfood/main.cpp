#include <iostream>

#include <cstdlib>//rand srand
#include <ctime>  //time

#include "junkfoodmachine.h"


using namespace std;

int main()
{
    srand(time(NULL));
    JunkFoodMachine maq(10);

    for(int i = 0; i < 10; i++){
        maq.alterarQtd(i, rand() % 3);
        maq.alterarValor(i, rand() % 10);
    }


    string input;
    while(input != "sair"){
        maq.mostrarStatus();
        cout << "Digite din troco comprar sair" << endl;
        cin >> input;

        if(input == "din"){
            float din;
            cin >> din;
            maq.inserirDin(din);
        }
        if(input == "troco"){
            auto troco = maq.pedirTroco();
            cout << "O troco foi " << troco;
        }
        if(input == "comprar"){
            int id;
            cin >> id;
            maq.comprar(id);
        }
    }

    return 0;
}
















