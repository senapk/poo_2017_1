#ifndef JUNKFOODMACHINE_H
#define JUNKFOODMACHINE_H

#include <vector>
#include <iostream>
using namespace std;

struct Gaveta{
    int qtd;
    float value;
};

class JunkFoodMachine
{
private:

    vector<Gaveta> gavetas;

    float saldo;//qtd de dinheiro que o usuario inseriu na maq
    float caixa;//qtd de dinheiro que a maquina lucrou

public:
    JunkFoodMachine(int n_gavetas):
        gavetas(n_gavetas), saldo(0.0)
    {
    }

    bool inserirDin(float value){
        if(value <= 0)
            return false;
        saldo += value;
        return true;
    }

    float pedirTroco(){
        auto aux = saldo;
        saldo = 0;
        return aux;
    }

    bool comprar(int id){
        if((id >= (int) gavetas.size()) or (id < 0))
            return false;
        if((gavetas[id].qtd > 0) and (saldo >= gavetas[id].value)){
            gavetas[id].qtd -= 1;
            saldo -= gavetas[id].value;
            caixa += gavetas[id].value;
            return true;
        }
        return false;

    }

    bool alterarQtd(int id, int qtd){
        gavetas[id].qtd = qtd;
        return true;
    }

    bool alterarValor(int id, float value){
        gavetas[id].value = value;
        return true;
    }

    void mostrarStatus(){
        cout << "Saldo usuario: " << saldo << endl;
        for(int i = 0; i < (int) gavetas.size(); i++){
            cout << i << ", " << gavetas[i].qtd << " u, "
                 << gavetas[i].value <<" Rs" << endl;
        }
    }
};




#endif // JUNKFOODMACHINE_H







