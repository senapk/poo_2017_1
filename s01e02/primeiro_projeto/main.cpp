#include <iostream>

using namespace std;

struct galo {
    int forca;
    int pv;
    string nome;
    void kkrejar(){
        if(pv <= 0){
            cout << "Morri" << endl;
        }

        cout << nome << " " << pv << " coco!\n";
    }
    void engalfinhar(galo *other){
        pv -= other->forca;
        other->pv -= forca;
    }
    void comer_milho(){
        pv *= 1.2;
    }
    void bicar(galo *other){
        other->pv -= this->forca;
    }
    bool esta_vivo(){
        return pv <= 0;
    }
};

struct galeto : galo{
    void kkrejar(){
        cout << nome << " " << pv << " tshiiiiiiii!\n";
    }
    bool esta_vivo(){
        return true;
    }

};

struct cerberus : galo{
    void bicar(galo *other){
        galo::bicar(other);
        galo::bicar(other);
        galo::bicar(other);
    }
};

struct ringue{
    galo animais[5];
    enquanto tiver animais vivos
        escolha um animal
        escolha alguem pra atacar
        de uma bicada
};

int main()
{
    galo firula;
    firula.forca = 20;
    firula.pv = 35;
    firula.nome = "firula";
    firula.kkrejar();
    galo tyson = {15, 50, "Tyson"};
    tyson.kkrejar();
    firula.comer_milho();
    firula.kkrejar();
    tyson.bicar(&firula);
    firula.kkrejar();
    firula.engalfinhar(&tyson);
    firula.kkrejar();
    tyson.kkrejar();

    galeto mauricio;
    mauricio.forca = 7;
    mauricio.nome = "mauricio";

    mauricio.engalfinhar(&tyson);
    tyson.kkrejar();
    mauricio.kkrejar();

    mauricio.engalfinhar(&tyson);
    tyson.kkrejar();
    mauricio.kkrejar();

    mauricio.engalfinhar(&tyson);
    tyson.kkrejar();
    mauricio.kkrejar();

    mauricio.engalfinhar(&tyson);
    tyson.kkrejar();
    mauricio.kkrejar();

    mauricio.engalfinhar(&tyson);
    tyson.kkrejar();
    mauricio.kkrejar();

    return 0;
}



















