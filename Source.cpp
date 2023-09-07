#include <iostream>
#include <cstdlib>

using namespace std;

class Fraction
{
private:
    double numerator;
    double denominator;

public:
    void init(double a, double b)
    {
        numerator = a;
        denominator = b;
    }

    void InitRand() {
        numerator = 1 +rand() % 5;
        denominator = 5 + rand() % 10;
    }

    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }

    void SetterNum(double a) {
        numerator = a;
    }
    void SetterDenom(double a) {
        denominator = a;
    }


    double GetterNum() {
        return numerator;
    }
    double GetterDenom() {
        return denominator;
    }

    
    Fraction add(Fraction b)
    {
        Fraction result;
        if (denominator == b.denominator)
        {
            result.numerator = numerator  + b.numerator;
            result.denominator = denominator= b.denominator;
        }
        else {
            result.numerator = numerator * b.denominator + b.numerator * denominator;
            result.denominator = denominator * b.denominator;
        }
        
        return result;
    }

    Fraction subtract(Fraction b) {
        Fraction result;
        if (denominator == b.denominator)
        {
            result.numerator = numerator - b.numerator;
            result.denominator = denominator= b.denominator;
        }
        else {
            result.numerator = numerator * b.denominator - b.numerator * denominator;
            result.denominator = denominator * b.denominator;
        }
        return result;
    }

    Fraction multiply(Fraction b)
    {
        Fraction result;
        result.numerator = numerator * b.numerator;
        result.denominator = denominator * b.denominator;
        return result;
    }

    Fraction division(Fraction b)
    {
        Fraction result;

        if (b.numerator == 0) 
        {
            cout << "Division by zero is impossible!" << endl;

            result.numerator = 0;
            result.denominator = 0;

            return result;
        }
        else {
            result.numerator = numerator * b.denominator;
            result.denominator = denominator * b.numerator;
        }
        

        return result;
    }
};

int main()
{
    srand(time(0));

    Fraction a;
    Fraction b;
    Fraction result;


    a.init(3, 5); 
    a.print();

    b.InitRand(); 
    b.print();

    result = a.add(b); 
    cout << "add: ";
    result.print();

    result = a.subtract(b);
    cout << "subtract: ";
    result.print();

    result = a.multiply(b); 
    cout << "multiply: ";
    result.print();

    result = a.division(b); 
    cout << "division: ";
    result.print();


    return 0;
}
