#include <iostream>
using namespace std;

int main(){
        int i, j;
        cin >> i >> j;

        if(i % (j + 1) == 0){
                cout << "Carlos" << endl;
        }
        else{cout << "Paula" << endl;}

        return 0;
}
//https://br.spoj.com/submit/CHOCPJ09/id=31552364
