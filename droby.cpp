#include <iostream>

using namespace std;

class Fractions {
private:
    double numerator, denominator;

public:
    
    Fractions() 
    {
        numerator = 1;
        denominator = 1;
    }

    Fractions(int a, int b) 
    {
        if (b == 0) 
        {
            cout << "Error: Denominator cannot be zero" << endl;
            numerator = 0;
            denominator = 1;
        }
        else 
        {
            numerator = a;
            denominator = b;
        }
    }

    
    void init(int x, int y) 
    {
        if (y == 0) {
            cout << "Error: Denominator cannot be zero" << endl;
            numerator = 0;
            denominator = 1;
        }
        else 
        {
            numerator = x;
            denominator = y;
        }
    }

   
    void printFraction() 
    {
        cout << numerator << " / " << denominator << endl;
    }

    
    Fractions Sum(Fractions& b) 
    {
        Fractions rez(numerator + b.numerator, denominator + b.denominator);
        return rez;
    }

    Fractions Minus(Fractions& b) 
    {
        Fractions rez(numerator - b.numerator, denominator - b.denominator);
        return rez;
    }

    Fractions Multiplication(Fractions& b) 
    {
        Fractions rez(numerator * b.numerator, denominator * b.denominator);
        return rez;
    }

    Fractions Divide(Fractions& b) 
    {
        Fractions rez(numerator / b.numerator, denominator / b.denominator);
        return rez;
    }

    void setNumerator(int a) 
    {
        numerator = a;
    }

    void setDenominator(int b) 
    {
        if (b == 0) {
            cout << "Error: Denominator cannot be zero" << endl;
            denominator = 1;
        }
        else 
        {
            denominator = b;
        }
    }

    int getNumerator() 
    {
        return numerator;
    }

    int getDenominator() 
    {
        return denominator;
    }
};

int main() 
{
    Fractions obj1(4, 7);
    Fractions obj2(1, 9);

    Fractions result = obj1.Sum(obj2);
    result.printFraction();

    return 0;
}