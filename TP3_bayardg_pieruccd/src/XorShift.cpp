#include <climits>

#include "XorShift.h"
#include "time.h"
#include "cmath"

XorShift::XorShift() {
    seed = time(NULL);
    a1 = 21;
    a2 = 35;
    a3 = 4;
}

XorShift::XorShift(long a1, long a2, long a3) {
    a1 = a1;
    a2 = a2;
    a3 = a3;
}

XorShift::XorShift(const XorShift& orig) {
}

XorShift::~XorShift() {
}

long XorShift::getA1() const {
    return a1;
}

long XorShift::getA2() const {
    return a2;
}

long XorShift::getA3() const {
    return a3;
}

void XorShift::setA1(long a1) {
    this->a1 = a1;
}

void XorShift::setA2(long a2) {
    this->a2 = a2;
}

void XorShift::setA3(long a3) {
    this->a3 = a3;
}

std::vector<double> XorShift::generate() {
    std::vector<double> result;
    result.resize(dimension);
    for (int i = 0; i < dimension; i++) {
        seed = seed ^ (seed << a1);
        seed = seed ^ (seed >> a2);
        seed = seed ^ (seed << a3);
        result[i] = std::abs((double) seed / (double) LONG_MAX);
    }
    return result;
}




