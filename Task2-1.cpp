#include <iostream>
#include <math.h>
using namespace std;

int index(int x[], int y, int n){
    for(int i = 0; i<y; i++){
        if(x[i]==n){
            return i;
        }
    }
    return -1;
}

int main()
{
    int y = 8;
    int *x = new int[y];
    
    for(int x = 0; i<y; i++){
        x[i] = rand()%10;
    }
    for(int x = 0; i<y; i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;   
    cout<<"Index: "<<index(x, y, 3);
    
}
