#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 int *mas = new int[10];
 for (int i = 0; i < 10; i++){
 mas[i] = rand() % 10 + 1;
 }
 for (int i = 0; i < 10; i++){
 cout<<mas[i]<<" ";
 }
 cout<<endl;
 
    for(int i = 1; i < 10; ++i){
		for(int j = 0; j < 9; j++){
			if(mas[j] < mas[j+1]){
				int temp = mas[j];
				mas[j] = mas[j+1];
				mas[j+1] = temp;
			}
		}
	}
    
    for (int i = 0; i < 10; i++){
 cout<<mas[i]<<" ";
 }
    delete []mas;
}
