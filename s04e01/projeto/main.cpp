#include <iostream>
#include <vector>

using namespace std;
//retornar o vector
//size
//auto
//dois objetos iguais(primitivo, container, struct, classe)
//entrada do usuario
//std::swap, rand(), random_shuffle(), sort()
//email @ e ./
//remover de vector


//struct Pessoa{
//    string nome;
//    int idade;
//    bool operator ==(const Pessoa & other){
//        return (nome == other.nome) &&
//               (idade == other.idade);
//    }
//};


//#include <sstream>
//remover do vetor
//void exemploRemover(){
//    vector<Pessoa> vet = {Pessoa{"a", 12}, Pessoa{"b", 13},
//                          Pessoa{"c", 14}};


//}



//bool validadeEmail(string mail){
////   a@b.c
////algo antes do @
////ponto pelo menos 2 casas depois do @
////algo depois do .

//    int posArr = mail.find('@');
//    if(posArr == string::npos)
//        return false;
//    if(posArr == 0)
//        return false;
//    if((posArr + 3) > mail.size())
//        return false;
//    if(mail[posArr + 1] == '.')
//        return false;
//    int posPonto = mail.find('.', posArr + 1);
//    if(posPonto == string::npos)
//        return false;
//    if(mail.back() == '.')
//        return false;
//    return true;
//}

#if 0
#include <algorithm>
int main(){
    vector<int> vet1{1, 2, 3, 4, 1};
    vector<int> vet2{1, 2, 3, 4, 1};
//    int aux = vet2[1];
//    vet2[1] = vet2[2];
//    vet2[2] = aux;

//    cout << (vet1 == vet2) << endl;

    Pessoa a{"Ivo", 33};
    Pessoa b{"Ivo", 33};

    cout << (a == b) << endl;

    return 0;
}
#endif


#include <map> //TreeMap


class Ponto{
private:
    string id;
    float contador {0.0};
    bool is_output{true};
public:

    Ponto(const string &id, const bool &is_output){
        this->id = id;
        this->is_output = is_output;
    }
    string getId() const{
        return id;
    }
    float getContador() const{
        return contador;
    }
    void resetar(){
        contador = 0.0;
    }
    void incrementar(unsigned float value){
        contador += value;
    }
};

class ControleConsumo{
private:
    map<string, Ponto> pontos;
public:
    bool inserirPontoEntrada(string id, ){
        if(pontos.find(id) != pontos.end())
            return false;

        pontos[id] = Ponto(id, false);
        return true;
    }

    bool inserirPontoSaida(string id){
        if(pontos.find(id) != pontos.end())
            return false;

        pontos[id] = Ponto(id, true);
        return true;
    }

    void contar(string id, float value){
        if(pontos.find(id) == pontos.end())
            return;
        pontos[id].incrementar(value);
    }

    float procurarVazamentos(){
        float total = 0.0;
        for(auto elem : pontos){
            if(elem.second.is_output)
                total -= elem.second.getContador();
            else
                total += elem.second.getContador();

        }
        return total;
    }


};

int main()
{
    ControleConsumo cc;
    cc.inserirPonto("cagece");
    cc.inserirPonto("pocoBalde");

    cc.inserirPonto("banheiro");
    cc.inserirPonto("cozinha");
    cc.inserirPonto("lavanderia");

    cc.contar("cagece", 140);
    cc.contar("pocoBalde", 40);

    cc.contar("banheiro", 40);
    cc.contar("banheiro", 10);
    cc.contar("cozinha", 0);
    cc.contar("cozinha", 100);
    cc.contar("lavanderia", 0);

    cc.calcularVazamento()


}




















