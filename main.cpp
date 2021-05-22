#include <iostream>

using namespace std;

int main()
{
    int local, direita, centro, esquerda, casos, cont = 0, resultado;
    while (true){
        cin >> casos;
        if (casos == 0){
            break;
        }else{
            resultado = 0;
            cont = 0;
            local = 2;
            while (cont < casos){
                cin >> esquerda;
                cin >> centro;
                cin >> direita;
                if (local == 1){
                    if (esquerda == 1){
                        if (centro == 1){
                            resultado = resultado + 2;
                            local = 3;
                        }else{
                            local = 2;
                            resultado = resultado + 1;
                        }
                    }else{

                    }
                }else{
                    if (local == 2){
                        if (centro == 1){
                            resultado = resultado + 1;
                            if (esquerda == 0){
                                local = 1;
                            }else{
                                local = 3;
                            }
                        }else{

                        }
                    }else{
                        if (direita == 1){
                            if (centro == 1){
                                resultado = resultado + 2;
                                local = 1;
                            }else{
                                resultado++;
                                local = 2;
                            }
                        }else{

                        }
                    }
                }
                cont++;
            }
            cout << resultado <<endl;
        }
    }
    return 0;
}
