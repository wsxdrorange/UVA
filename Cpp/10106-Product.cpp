#include<iostream>

using namespace std;

struct Bigint {
    string a; // to store the digits
    int sign; // sign = -1 for negative numbers, sign = 1 otherwise

    Bigint() {} // default constructor
    Bigint( string b ) { (*this) = b; } // constructor for string
    
    Bigint normalize( int newSign ) { // removes leading 0, fixes sign
        for( int i = a.size() - 1; i > 0 && a[i] == '0'; i-- )
            a.erase(a.begin() + i);
        sign = ( a.size() == 1 && a[0] == '0' ) ? 1 : newSign;
        return (*this);
    }

    void operator = ( string b ) { // assigns a string to Bigint
        a = b[0] == '-' ? b.substr(1) : b;
        reverse( a.begin(), a.end() );
        this->normalize( b[0] == '-' ? -1 : 1 );
    }
    
    bool operator == ( const Bigint &b ) const { // operator for equality
        return a == b.a && sign == b.sign;
    }
    Bigint operator * ( Bigint b ) { // multiplication operator overloading
        Bigint c("0");
        for( int i = 0, k = a[i] - 48; i < a.size(); i++, k = a[i] - 48 ) {
            while(k--) c = c + b; // ith digit is k, so, we add k times
            b.a.insert(b.a.begin(), '0'); // multiplied by 10
        }
        return c.normalize(sign * b.sign);
    }
};


int main()
{
    string s1,s2;
    Bigint a,b,c;
    while(cin>>s1>>s2)
    {
        a=s1;
        b=s2;
        c=a*b;
        c.print();
        cout<<endl;
    }
    return 0;
}
