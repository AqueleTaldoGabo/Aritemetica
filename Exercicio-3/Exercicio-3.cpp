#include <iostream>
using namespace std;

void separaVetor(int *v1, int *v2, int *v3);

int main(){
    int v1[10], par[10], imp[10];

    for(int i = 0; i<10; i++){
        cin >> v1[i];
    }

    separaVetor(v1, par, imp);

}

void separaVetor(int *v1, int *v2, int *v3){
    int j = 0, k = 0;
    for(int i = 0; i<10; i++){
        if(*(v1 + i) % 2 == 0){
            *(v2 + j) = *(v1 + i);
            j++; 
        }
        else{
            *(v3 + k) = *(v1 + i);
            k++; 
        }
    }
}