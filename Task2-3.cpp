#include <iostream>

using namespace std;

void frame(int a, int b, int c){
    for(int i = 0; i<b; i++){
        for(int j = 0; j<a; j++){
            cout<<"*";

            for(int z = 0; z<c; z++){
                cout<<" ";
            }
        }

        cout<<endl;
    }
}

int main()
{
    frame(2, 3, 3);
}
