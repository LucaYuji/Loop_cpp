#include <iostream>
using namespace std;
int main(){

    int x,y,z;

    // Da um tempo pela velocidade de processamento e outra forma de utilização
    for(int tmp = 0; tmp< 100000; tmp++);

    //for(inicialização de varivael de controle; condicional para execução; incremento ou decremento da varivael de controle)
    for(x = 0, y = 1, z = 0; x < 10 || y < 21 || z < 40; x++, y += 2, z += 2){
        cout << x << " - " << y << " - " << z << "\n";
    }

    return 0;
}