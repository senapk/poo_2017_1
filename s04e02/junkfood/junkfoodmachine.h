#ifndef JUNKFOODMACHINE_H
#define JUNKFOODMACHINE_H

#include <vector>
#include <iostream>
using namespace std;


class JunkFoodMachine
{
private:
    vector<float> vet_values;
    vector<int> vet_qtd;

    float saldo;//qtd de dinheiro que o usuario inseriu na maq
    float caixa;//qtd de dinheiro que a maquina lucrou

public:
    JunkFoodMachine(int n_gavetas):
        vet_values(n_gavetas), vet_qtd(n_gavetas), saldo(0.0)
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
        if((id >= (int) vet_qtd.size()) or (id < 0))
            return false;
        if((vet_qtd[id] > 0) and (saldo >= vet_values[id])){
            vet_qtd[id] -= 1;
            saldo -= vet_values[id];
            caixa += vet_values[id];
            return true;
        }
        return false;

    }

    bool alterarQtd(int id, int qtd){
        vet_qtd[id] = qtd;
        return true;
    }

    bool alterarValor(int id, float value){
        vet_values[id] = value;
        return true;
    }

    void mostrarStatus(){
        cout << "saldo usuario " << saldo << endl;
        for(int i = 0; i < (int) vet_values.size(); i++){
            cout << i << ", " << vet_qtd[i] << " u, "
                 << vet_values[i] <<" Rs" << endl;
        }
    }
};




#endif // JUNKFOODMACHINE_H







