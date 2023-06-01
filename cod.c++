#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main ()
{
    double sal, p1, p2, salh, hora, liq1, liq2, final, f2;
    int fun;
    int i = 1;
    
    double ir = 0.11;
    double inss = 0.08;

    cout << "Insira o número de funcionários:";
    cin >> fun;
    
    double list[fun];
    do{
    
            cout << "Insira o salário/hora do funcionário:";
            cin >> salh;
   
            cout << "Insira quantas horas o funcionario trabalha por mês";
            cin >> hora;    
   
            sal = salh * hora; 
                   
            p1 = sal * ir;
            liq1 = sal - p1;
         
            p2 = sal * inss; 
            liq2 = sal - p2;

            f2 = sal - liq1; 
           
            final = liq2 - f2;

            list[i]= final;
            i++;               
       }while(i <= fun);
    for(int e = 1;e <= fun;e++){
            cout <<  "O salário do funcionário " << e << " é:" << list[e]<< endl;
            }
    system("pause");
    return 0;
}