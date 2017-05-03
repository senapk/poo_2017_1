#include <iostream>
using namespace std;
class Pessoa{
    friend istream& operator>>(istream& is, Pessoa& pessoa);
    string nome;
    int idade;
public:
    Pessoa(string nome = "", int idade = 0):
        nome(nome), idade(idade)
    {
    }
    string getNome() const{
        return nome;
    }
    void setNome(const string &value){
        nome = value;
    }
    int getIdade() const{
        return idade;
    }
    void setIdade(int value){
        idade = value;
    }

};

bool operator<(Pessoa pessoa, Pessoa other){
    return pessoa.getNome() < other.getNome();
}

ostream& operator<<(ostream& os, Pessoa pessoa){
    os << "Nome: " << pessoa.getNome()
       << " Idade: " << pessoa.getIdade() << endl;
    return os;
}

istream& operator>>(istream& is, Pessoa& pessoa){
    is >> pessoa.nome >> pessoa.idade;
    return is;
}



int main(){
    Pessoa x("David", 33);
    Pessoa y("Juliana", 23);
    Pessoa z;
    cout << "Digite nome e idade: ";
    cin >> z;
    cout << z;

    cout << (operator <(x, y)) << endl;
    cout << (x < y) << endl;

    cout << x;
    operator<<(cout, x);
    return 0;
}
