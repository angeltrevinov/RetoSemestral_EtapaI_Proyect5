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
        int x; // aqui se guarda el valor que no se debe de pasar
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
        int CantMov = 0; // tendra la cantidad de movimienots
        int Sum = 0; // tendra la suma de los valores adentro de los stack 
        int contA = 0; // tendra el contador donde abanse el stack A
        int contB = 0; //tendra el contador donde abanse el stack B 
        if(a.size() == 0 && b.size() == 0) //both are empty
        	cout << CantMov;
        else if(a.size() != 0 && b.size() == 0){ // b is empty
        	while( contA < n){
        		if(Sum + a[contA] <= x){
        			Sum = Sum + a[contA];
        			CantMov++;
        		}else if(Sum + a[contA] > x){
        			break; 
        		}
        		contA++;
        	}
        	cout << CantMov; 
        }else if(a.size() == 0 && b.size() != 0){ // a is empty 
        	while(contB < m){
        		if(Sum + b[contB] <= x){
        			Sum = Sum + b[contB];
        			CantMov++;
        		}else if(Sum + b[contB] > x){
        			break;
        		}
        		contB++;
        	}
        	cout << CantMov; 
        }else if(a.size() != 0 && b.size() != 0){ // both are full
        	int NA = 0, NB = 0;//this is to make sure they dont move more inside the stack
        	while(contA < n && contB < m && NA != 1 && NB != 1){
                if(a[contA]  <= b[contB]){
                    if(Sum + a[contA] <= x && NA != 1){
                        Sum = Sum + a[contA];
                        CantMov++;
                    }else if(Sum + a[contA] > x){
                        NA = 1;
                    }

                    contA++;
                }else if(a[contA] > b[contB]){
                    if(Sum + b[contB] <= x && NB != 1){
                        Sum = Sum + b[contB];
                        CantMov++;
                    }else if(Sum + b[contB] > x){
                        NB = 1;
                    }
                    contB++;
                }
        	}
        	cout << CantMov; 
        }
    }
    return 0;
}
