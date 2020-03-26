#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main(int argc, char* argv[])
{
    //ex 1
 int *x = new int;
 *x = 9;
 cout << "х = " << *x << endl << endl;
 delete x;
    //ex 2: 1-d
    srand(time(NULL)); 
 float *mass = new float [10];
 for (int i = 0; i < 10; i++)
 mass[i] = (rand() % 10 + 1) / float((rand() % 10 + 1));
 cout << "mass = "<< endl;
 for (int i = 0; i < 10; i++)
 cout << setprecision(2) << mass[i] << endl;
 delete [] mass; 
 cout << endl << endl;
    //ex 3: 2-d
    srand(time(NULL)); 
 float **mass2 = new float* [2]; 
 for (int count = 0; count < 2; count++)
 mass2[count] = new float [5]; 
 for (int i = 0; i < 2; i++)
 for (int j = 0; j < 5; j++)
 mass2[i][j] = (rand() % 10 + 1) / float((rand() % 10 + 1));
 for (int i = 0; i < 2; i++)
 {
 for (int j = 0; j < 5; j++)
 cout << '\t' <<setprecision(2) << mass2[i][j] << '\t';
 cout << endl;
 }
 for (int count = 0; count < 2; count++)
 delete [] mass2 [count];

}