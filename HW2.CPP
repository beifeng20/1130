#include <iostream>
class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {
        simplify();
    }
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
    void simplify() {
        int divisor = gcd(numerator, denominator);
        numerator /= divisor;
        denominator /= divisor;
    }
    int getNumerator() const {
        return numerator;
    }
    int getDenominator() const {
        return denominator;
    }
    double toDouble() const {
        return static_cast<double>(numerator) / denominator;
    }
    Fraction operator+(const Fraction& other) {
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }
    Fraction operator*(const Fraction& other) {
        int num = numerator * other.numerator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }
};
std::ostream& operator<<(std::ostream& out, const Fraction& frac) {
    out << frac.getNumerator() << "/" << frac.getDenominator();
    return out;
}
std::istream& operator>>(std::istream& in, Fraction& frac) {
    char slash;
    int num, den;
    in >> num >> slash >> den;
    frac = Fraction(num, den);
    return in;
}
int main() {
    Fraction f1(1, 2);
    Fraction f2(1, 3);
    Fraction sum = f1 + f2;
    std::cout << "sum: " << sum << std::endl;
    Fraction product = f1 * f2;
    std::cout << "Product: " << product << std::endl;
    double decimalValue = f1.toDouble();
    std::cout << "decimal value: " << decimalValue << std::endl;
    return 0;
}