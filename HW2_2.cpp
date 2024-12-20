#include <iostream>
#include <vector>
class Vector {
private:
    std::vector<double> elements;
public:
    Vector(const std::vector<double>& values) : elements(values) {}
    double getElement(int index) const {
        return elements[index];
    }
    void setElement(int index, double value) {
        elements[index] = value;
    }
    friend std::ostream& operator<<(std::ostream& out, const Vector& vec) {
        for (const auto& element : vec.elements) {
            out << element << " ";
        }
        return out;
    }
    friend std::istream& operator>>(std::istream& in, Vector& vec) {
        for (double& element : vec.elements) {
            in >> element;
        }
        return in;
    }
    Vector& operator+=(const Vector& other) {
        for (size_t i = 0; i < elements.size(); ++i) {
            elements[i] += other.elements[i];
        }
        return *this;
    }
    Vector operator+(const Vector& other) const {
        Vector result = *this;
        result += other;
        return result;
    }
    Vector operator-(const Vector& other) const {
        Vector result = *this;
        for (size_t i = 0; i < elements.size(); ++i) {
            result.elements[i] -= other.elements[i];
        }
        return result;
    }
    Vector operator*(double scalar) const {
        Vector result = *this;
        for (double& element : result.elements) {
            element *= scalar;
        }
        return result;
    }
    double operator*(const Vector& other) const {
        double scalarProduct = 0.0;
        for (size_t i = 0; i < elements.size(); ++i) {
            scalarProduct += elements[i] * other.elements[i];
        }
        return scalarProduct;
    }
};
int main() {
    Vector v1({1.0, 2.0, 3.0});
    Vector v2({4.0, 5.0, 6.0});
    Vector sum = v1 + v2;
    Vector difference = v1 - v2;
    Vector scaled = v1 * 2.0;
    double dotProduct = v1 * v2;
    std::cout << "Vector 1: " << v1 << std::endl;
    std::cout << "Vector 2: " << v2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Scaled by 2: " << scaled << std::endl;
    std::cout << "Dot product: " << dotProduct << std::endl;
    return 0;
}