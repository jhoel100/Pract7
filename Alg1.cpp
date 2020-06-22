//g++ orden.cpp -std=c++11 -lpthread -o orden.out
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <chrono>
#include <time.h>
#include <bits/stdc++.h>
#include <fstream>
#include <thread>

#define MX 2000000000

using namespace std;

int contador;

void imprimir(unsigned int arreglo[],int longitud){
	for(int i=0;i<longitud;i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
}

int main(){

	 int n=8000;
	 int medio;
	 float promedio=0;

    // X, Y valores de los puntos a graficar
	 unsigned int * valores;
	 valores = new unsigned int [n];
	 int j;
	 int previo;
	 
	 for(int i=0;i<n;i++){
			promedio=0;
			for(j=0;j<n;j++){
				valores[j]=rand()%MX;
				promedio=promedio+valores[j];
			}
			promedio=promedio/n;

			medio=valores[0];
			for(j=1;j<n;j++){
				if(valores[j]<promedio && medio<valores[j]){
					previo=medio;
					medio=valores[j];
				}
			}

			if(n%2==0){
				medio=floor((previo+medio)/2);
			}
		
			//cout<<i<<"  "<<medio<<"  "<<promedio<<endl;
			//imprimir(valores,n);
	 }



	 delete [] valores;

   return 0;

}
