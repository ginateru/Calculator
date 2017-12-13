//פאיכ program.cpp 

#include "stdafx.h"
#include <iostream>
#include "funcs.h"

using namespace std;

int main()
{
	double a, b;
	int n;

	cout << "Vvedite a: ";
	cin >> a;
	cout << "Vvedite b: ";
	cin >> b;

	cout << "Vvedite nomer operacii. 1 - slojenie, 2 - vichitanie, 3 - umnojenie, 4 - delenie" << endl;
	cin >> n;


	switch(n)
		{  
         case 1:  
            cout << "Summa ravna " <<  MySum(a,b) << endl;  
            break;

         case 2:  
            cout << "Raznost ravna " << MyRaznost(a,b) << endl;  
            break;

		case 3:  
            cout << "Proizvedenie ravno " << MyMult(a,b) << endl;  
            break;

		case 4:  
            cout << "Funkciya v razrabotke " << endl;  
            break;

         default:  
            break;  
      }  

system("pause");
return 0;
}
