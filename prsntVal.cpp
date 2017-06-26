// Name: Ali Bayati 
// Present Value  

#include<iostream>
#include<iomanip>
using namespace std;
float  presentVal(float,int ,float);


int main()

{
	float  p,f,r;
	int n,e=1;
	while (e != 0)
	{
		cout << fixed << setprecision(2);


		cout << "Enter the future value :               $";
		cin >> f;
		cout << "Enter the annual interest %:            ";
		cin >> r;

		cout << "Enter the number of years :             ";
		cin >> n;

		p = presentVal(f, n, r / 100);

		cout << "The Amount need to be deposit today :  $" << p << endl;

		cout << "Enter any number to start another session or 0 to exit ! : ";
		cin >> e;
		cout << endl << endl;

		
	}
	return 0;

}

float presentVal(float f  , int n, float r)
{
	float x;
	
	x = f / pow((1 + r), n);

	return x;
	
}

/*Output

Enter the future value :               $25000
Enter the annual interest %:            4.5
Enter the number of years :             10
The Amount need to be deposit today :  $16098.20
Enter any number to start another session or 0 to exit ! : 1


Enter the future value :               $85000
Enter the annual interest %:            6.25
Enter the number of years :             20
The Amount need to be deposit today :  $25283.67
Enter any number to start another session or 0 to exit ! : 0


Press any key to continue . . .*/

