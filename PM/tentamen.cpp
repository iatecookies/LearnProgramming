#include <iostream>
#include <cmath>

using namespace std;

int x, y;

int ot (int r) { r += 2; return r; }//ot
int sien (int u, int v) {
	int i; y++; for ( i = 0; i <= 1000; i++ ) u += ot (v);
	v = v + 6; cout << i << "," << u << "," << v << endl; return u + v + 7;
}//sien




int main (){
x = 4; y = 0; cout << sien (x,y) << ","; cout << x-1 << "," << y << endl;
	return 0;
}
