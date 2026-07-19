#include <pybind11/pybind11.h>

long long reverse_cpp(long long x) {
    long long sign = (x < 0) ? -1 : 1;
    x = (x < 0) ? -x : x;
    long long rev = 0;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return sign * rev;
}

PYBIND11_MODULE(reverse_int, m) {
    m.def("reverse", &reverse_cpp, "Reverse integer");
}