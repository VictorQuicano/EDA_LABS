#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<double> genPuntoDimension(int dimension){
    vector<double> punto;
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(0.0, 1.0);
    for (int n = 0; n < dimension; ++n)
        punto.push_back(dis(gen));
    cout<<"Punto generado: "<<endl;
    int i=1;
    for(double a:punto){
        cout<<i<<") "<<a<<'\n';
        i++;
    }
    return punto;
}
void calcularDistancias(vector<vector<double>> punto,vector<double>& distancias){
    for(int i=0;i<punto.size();i++){
        for(int j=i+1;j<punto.size();j++){
            double distancia=0;
            for(int k=0;k<punto[i].size();k++){
                distancia+=pow(punto[i][k]-punto[j][k],2);
            }
            distancia=sqrt(distancia);
            distancias.push_back(distancia);
        }
    }
    cout<<"Distancias calculadas: "<<distancias.size()<<endl;
}
int main(int argc, char *argv[])
{
    
    
    for(int i=1;i<argc;i++){
        int dimension=atoi(argv[i]);
        vector<vector<double>> puntosAleatorios;
        cout<<"Dimension: "<<dimension<<endl;
        for (int i=0;i<100;i++){
            puntosAleatorios.push_back(genPuntoDimension(dimension));
        }
        vector<double> distanciaPunto;
        calcularDistancias(puntosAleatorios,distanciaPunto);
        sort(distanciaPunto.begin(),distanciaPunto.end());
        ofstream distancias;
        distancias.open("distancias"+to_string(dimension)+".txt");
        for(double a:distanciaPunto){
            distancias<<a<<endl;
        }
    }
    
}