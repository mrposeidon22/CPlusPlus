#include <iostream>
using namespace std;

class Conta {
private:
    int saldo;
public:
    int getsaldo() {
        return saldo;
    }
    void colocardinheiro() {
        int dinheiro = 10;
        saldo += dinheiro;
        cout << saldo << endl;
    }
};

int main() {
    Conta minha_conta;
    minha_conta.colocardinheiro(); // Chama o método para colocar dinheiro
    return 0;
}



class SensorTemperatura{
private:
    int temperatura;

public:
    int gettemperatura(){
        return temperatura;
    }
    void settemperatura(int temp){
        temperatura = temp;
    };