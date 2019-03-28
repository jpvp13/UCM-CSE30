
#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

double area;
double n = 0;
const double pi = 3.1415926535897;

int main (){
    cin >> n;
    
    area = pi * n * n;
    
    cout << area << endl;
    return 0;
}
