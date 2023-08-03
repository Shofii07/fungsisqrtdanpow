# include <catdlib>
# include <iostream>
# include <cmath>
using namespase std;
int main ()
{
	double x, Akar, Pangkat;
	cout << "Masukkan Nilai x: ";
	cin >> x;
	
	Akar = sqrt (x);
	Pangkat = pow(x, 2);
	
cout <<  "Akar dari " << x << " = " << Akar << endl;
cout <<"Pangkat dari "<< x << " = " <<Pangkat<< endl;

 system ("PAUSE");
 return 0;
}
