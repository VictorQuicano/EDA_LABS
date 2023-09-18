#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//Genera el punto con la dimension que se le envía
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
//Calcula las distancias entre todos los puntos y los almacena en otro vector
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
}
//Funcion principal, Main recibe como argumentos las dimensiones con las que se desea trabajar
int main(int argc, char *argv[])
{
    for(int i=1;i<argc;i++){
        int dimension=atoi(argv[i]);
        vector<vector<double>> puntosAleatorios;
        //Se generan 100 puntos aleatorios con la dimension que se le envía
        for (int i=0;i<100;i++){
            puntosAleatorios.push_back(genPuntoDimension(dimension));
        }
        //este vector alamacenará las distancias
        vector<double> distanciaPunto;
        calcularDistancias(puntosAleatorios,distanciaPunto);
        //ordenamiento de distancias
        sort(distanciaPunto.begin(),distanciaPunto.end());
        //generación de archivo de texto con las distancias
        ofstream distancias;
        distancias.open("distancias"+to_string(dimension)+".txt");
        for(double a:distanciaPunto){
            distancias<<a<<endl;
        }
    }
    
}