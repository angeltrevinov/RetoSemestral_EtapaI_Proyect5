/*
    Angel Odiel Treviño Villanueva
    A01336559
    Estructura de Datos
    Reto 5
    Game of Two Stacks
 */
#include <vector>
#include <iostream>

using namespace std;

int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        int n;
        int m;
        int x;
        cin >> n >> m >> x;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
            cin >> a[a_i];
        }
        vector<int> b(m);
        for(int b_i = 0; b_i < m; b_i++){
            cin >> b[b_i];
        }
        // your code goes here
        int CantMov = 0;
        
    }
    return 0;
}
