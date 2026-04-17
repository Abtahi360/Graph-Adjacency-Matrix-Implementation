#include<bits/stdc++.h>
using namespace std;

void printMatrix(int **g, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
}

void input_Edges(int **g, int m, int n) {
    int u, v;
    ifstream fin("graph values.txt");
    for (int i = 0; i < m; i++) {
        fin >> u >> v;
        g[u][v] = g[v][u] = 1;
    }
}

int** createZeroMatrix(int n) {
    int **g = new int*[n];
    for (int i = 0; i < n; i++) {
        g[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            g[i][j] = 0;
        }
    }
    return g;
}

int main() {
    int n, m;

    ifstream fin("graph values.txt");
    fin >> n >> m;

    int **g = createZeroMatrix(n);

    input_Edges(g, m, n);
    printMatrix(g, n);
    return 0;
}
