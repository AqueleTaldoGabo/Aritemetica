#include <iostream>
using namespace std;
#define N 4
#define C 3

void JuntaVet(int *v1, int *v2, int size);

int main(){
    int v1[N], v2[C], size;

    size = (sizeof(v1) + sizeof(v2))/4;

    for(int i = 0; i<4; i++){
        cin >> v1[i];
    }
    for(int i = 0; i<3; i++){
        cin >> v2[i];
    }
    
   JuntaVet(v1, v2, size);
}

void JuntaVet(int *v1, int *v2, int size){
    int v3[size];
    for(int i = 0; i<size; i++){
        if(i<N)
            *(v3 + i) = *(v1 + i);
        else
            *(v3 + i) = *(v2 + i - N);
    }
    for(int i = 0; i<size; i++){
        cout << v3[i] << endl;
    }
}