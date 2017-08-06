#include <iostream>

using namespace std;

void printBinary( int num )
{
    unsigned mask = 0x80000000;
    while( mask > 0 )
    {
        if( mask & num )
            cout << "1";
        else
            cout << "0";
        mask >>=1;
    }
}

int main() 
{
	int a = 30;
	
    cout << "Initial num is: " << a << endl;
    cout << "And its equivalent Binary is: ";
    printBinary(a);
    cout << endl;
    
    unsigned int mask = 0x11111111;
    int b = 0;

    {
        int temp = mask & a;
        b |= temp << 3;
        mask <<= 1;
    }
    {
        int temp = mask & a;
        b |= temp << 1;
        mask <<= 1;
    }
   {
        int temp = mask & a;
        b |= temp >> 1;
        mask <<= 1;
    }
    {
        int temp = mask & a;
        b |= temp >> 3;
        mask <<= 1;
    }

    cout << "Now num is: " << b << endl;
    cout << "And its equivalent Binary is: ";
    printBinary(b);
    cout << endl;
  
	return 0;
}
