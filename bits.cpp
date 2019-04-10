#include <iostream>

using namespace std;

struct Byte
{
    unsigned int b0:1;
    unsigned int b1:1;
    unsigned int b2:1;
    unsigned int b3:1;
    unsigned int b4:1;
    unsigned int b5:1;
    unsigned int b6:1;
    unsigned int b7:1;

    void setBits(int n0, int n1, int n2, int n3, int n4, int n5, int n6, int n7)
    {
        b0 = n0;
        b1 = n1;
        b2 = n2;
        b3 = n3;
        b4 = n4;
        b5 = n5;
        b6 = n6;
        b7 = n7;
    }

    void printBits()
    {
        cout << b0 << " " << b1 << " " << b2 << " " << b3 << " "
             << b4 << " " << b5 << " " << b6 << " " << b7 << endl;
    }
};

//  b0 = 1;     to set bit
//  b0 = 0;     to clear bit
//  b0 =         !b0;
//  b0 =         ~b0;
//  b0 ^= 1;     /* all work */

Byte OR(Byte b1, Byte b2);
Byte AND(Byte b1, Byte b2);

int main()
{
    Byte byte1;
    byte1.setBits(0,0,1,0,1,1,1,0);
    byte1.printBits();

    Byte byte2;
    byte2.setBits(1,1,0,0,0,1,0,0);
    byte2.printBits();

    Byte byte3 = AND(byte1, byte2);
    byte3.printBits();
}

Byte OR(Byte b1, Byte b2)
{
    Byte result;
    result.b0 = b1.b0^b2.b0;
    result.b1 = b1.b1^b2.b1;
    result.b2 = b1.b2^b2.b2;
    result.b3 = b1.b3^b2.b3;
    result.b4 = b1.b4^b2.b4;
    result.b5 = b1.b5^b2.b5;
    result.b6 = b1.b6^b2.b6;
    result.b7 = b1.b7^b2.b7;

    return result;
}

Byte AND(Byte b1, Byte b2)
{
    Byte result;
    result.b0 = b1.b0&b2.b0;
    result.b1 = b1.b1&b2.b1;
    result.b2 = b1.b2&b2.b2;
    result.b3 = b1.b3&b2.b3;
    result.b4 = b1.b4&b2.b4;
    result.b5 = b1.b5&b2.b5;
    result.b6 = b1.b6&b2.b6;
    result.b7 = b1.b7&b2.b7;

    return result;
}



