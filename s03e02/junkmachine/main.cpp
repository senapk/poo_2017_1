#include <iostream>
#include <vector>

using namespace std;

class Pessoa{
public:
    string * nome;

    Pessoa(string nome = "Fulano"){
        this->nome = new string(nome);
        cout << *this->nome << " nascendo\n";
    }

    Pessoa(const Pessoa &other){
        this->nome = new string(*other.nome);
    }

    void mostrarNome(){
        cout << *nome << endl;
    }

    ~Pessoa(){
        cout << *nome << " morrendo\n";
        delete nome;
    }
};

int teste_construtores()
{
    //inicializando cada elemento
    //Pessoa vet_estatico[3] = {Pessoa("a"), Pessoa("b"), Pessoa("c")};

    //exige inicialização padrão
    //Pessoa vet2[3];

    vector<Pessoa> vet(2);

    //push_back faz copia o que em alguns casos vai pedir construtor de copia
    vet.push_back(Pessoa("z"));

    Pessoa p2("x2");

    //chama o destrutor
    vet.pop_back();
    Pessoa p3("x3");

    Pessoa *p4;//nao cria pessoa
    p4 = new Pessoa("jose");//cria jose
    delete p4;//chama o destrutor de p4

    return 0;
}



//#########################################################
//#########################################################
//#########################################################
//#########################################################
//#########################################################


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Escravo{
private:
    string nome;
public:
    Escravo(string _nome){
        nome = _nome;
    }
    string getNome(){
        return nome;
    }
    void setNome(string nome){
        this->nome = nome;
    }
};

class Macaco{
private:
    vector<Escravo> escravos;
public:
    bool addEscravo(string nome){
        Escravo p(nome);
        for(Escravo elem : escravos)
            if(elem.getNome() == nome)
                return false;
        escravos.push_back(p);
        return true;
    }

    bool removerEscravo(string nome){
        for(int i = 0; i < (int) escravos.size(); i++){
            if(escravos[i].getNome() == nome){
                escravos.erase(escravos.begin() + i);
                return true;
            }
        }
        return false;
    }

    void darChicotada(string nome){
        for(auto& esc : escravos)
            if(esc.getNome() == nome)
                esc.setNome(esc.getNome() + "ai");
    }

    void mostrarEscravos(){
        cout << "[ ";
        for(auto esc : escravos)
            cout << esc.getNome() << " ";
        cout << "]\n";
    }


};



int teste_vetores()
{
    Macaco cesarAugustoMaximus;
    Macaco& ca = cesarAugustoMaximus;

    ca.addEscravo("Pedro");
    ca.addEscravo("Paulo");
    ca.addEscravo("Jessica");
    ca.addEscravo("Junior");

    ca.mostrarEscravos();

    ca.removerEscravo("Jessica");
    ca.addEscravo("Fernanda");

    ca.mostrarEscravos();


    ca.darChicotada("David");
    ca.darChicotada("Junior");
    ca.darChicotada("Juniorai");

    ca.mostrarEscravos();



    return 0;
}


int main(){
    teste_construtores();
    //teste_vetores();
}
























