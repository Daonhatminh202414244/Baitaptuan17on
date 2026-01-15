#include<iostream>
using namespace std;

#define v 12

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

    addEdge(mat, 1, 2);
    addEdge(mat, 1, 6);
    addEdge(mat, 1, 7);
    addEdge(mat, 1, 8);
    addEdge(mat, 1, 9);
    addEdge(mat, 1, 10);
    addEdge(mat, 10, 11);
    addEdge(mat, 11, 2);
    addEdge(mat, 2, 3);
    addEdge(mat, 3, 4);
    addEdge(mat, 4, 5);
    addEdge(mat, 4, 6);
    addEdge(mat, 5, 6);
    print(mat);
}
