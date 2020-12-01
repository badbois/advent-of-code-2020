#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[]){
    int tab[200];
    ifstream fichier("./input.txt");

    if(fichier){
        string line;
        int nbLine=0;
        while (getline(fichier, line)){
            tab[nbLine]= stoi(line,NULL, 10);
            nbLine+=1;
        }
    }else{
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture."<< endl;
    }
    fichier.close();

    for(int i=0; i<200; i++){
        for (int j=i+1; j<200; j++){
            for(int k=j+1; k<200; k++){
                if(tab[i]+tab[j]+tab[k]==2020){
                    cout <<tab[i]*tab[j]*tab[k];
                }
            }       
        }
    }

    return EXIT_SUCCESS;
}
