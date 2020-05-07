#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int dias;
    while(cin >> dias){
        int custo;
        cin >> custo;
        if(dias==0){
            cout << "0" << endl;
        }
        else{
            int valor[dias],maior=0;
            cin >> valor[0];
            valor[0]-=custo;
            if(valor[0]>maior){
                maior=valor[0];
            }
            for(int i=1;i<dias;i++){
                cin >> valor[i];
                valor[i]-=custo;
                if(valor[i]+valor[i-1]>valor[i]){
                    valor[i]+=valor[i-1];
                }
                if(valor[i]>maior){
                    maior=valor[i];
                }
            }
            cout << maior << endl;
        }
    }
    return 0;
}
