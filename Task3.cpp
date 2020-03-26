#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a = 0;
    float average = 0;
 float **mas = new float* [2]; 
    for (int i = 0; i < 2; i++){
        mas[i] = new float [5]; 
    }
    
    for(int i = 0; i<2; i++){
        for(int j = 0; j<5; j++){
            a =  (rand()%201-100);
            mas[i][j] = a/100;
            average+=mas[i][j];
        }
    }
    average = average/10;

 for (int i = 0; i < 2; i++){
     for(int j = 0; j<5; j++){
         cout<<mas[i][j]<<" ";
     }
     cout<<endl;
 }
 
 for (int i = 0; i < 2; i++){
     for(int j = 0; j<5; j++){
         if(mas[i][j]<(-0.5)){
             mas[i][j] = average;
         }
     }
 }
 
 cout<<endl;
 cout<<"Average number of massives: "<<average<<endl;
 
 for (int i = 0; i < 2; i++){
     for(int j = 0; j<5; j++){
         cout<<mas[i][j]<<" ";
     }
     cout<<endl;
 }
 for(int i = 0; i<2;i++){
     delete []mas[i];
 }
 
}