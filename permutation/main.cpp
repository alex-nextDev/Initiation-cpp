//
//  main.cpp
//  Exercice_3
//
//  Created by Alexandre Leuthreau on 14/11/2021.
//

#include <iostream>

// Permutation de 2 nombres

using namespace std;

int main() {
    
    int x,y;
    int tmp;
   
    cout<<"Entrez les valeurs de A et de B : "<<endl;
    cout<<"A = "<<endl;
    cin>>x;
    cout<<"B = "<<endl;
    cin>>y;
    cout<<"A = "<<x<<" B = "<<y<<endl;
    
    tmp = x;
    x = y;
    y = tmp;
    
    cout<<"Permutation en cours"<<endl;
    cout<<"A = "<<x<<" B = "<<y<<endl;
    
}
