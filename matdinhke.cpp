#include<iostream>
using namespace std;

#define v 4

void addEdge(int mat[v][v],int i ,int j){
    mat[i][j] = 1;
    mat[j][i] = 1;
}

void print(int mat[v][v] ){
    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            cout << mat[i][j] <<' ';
        }
        cout << endl;
    }
}

int main(){
    int mat[v][v] = {0};

    addEdge(mat, 0, 1);
    addEdge(mat, 0, 2);
    addEdge(mat, 1, 2);
    addEdge(mat, 2, 3);
    print(mat);
}
