#include <cstdlib>
#include <iostream>
#include <string>

template <typename T>
T sum(T* arr, const size_t size) {
    T s = T();
    for (size_t i = 0; i < size; ++i) {
        s += arr[i];
    }
    return s;
}

template <typename T>
class Algorithm {
public:
    static T f(const T& t1, const T& t2) {
        return t1 + t2;
    }
};

template <>
class Algorithm<std::string> {
public:
    static std::string f(const std::string& t1, const std::string& t2) {
        return t1 + ' ' + t2;
    }
};

template <>
class Algorithm<float> {
public:
    static float f(const float& t1, const float& t2) {
        return t1 * t2;
    }
};

template <typename T, typename C = Algorithm<T>>
T fun(const T& t1, const T& t2) {
    return C::f(t1, t2);
}

int main() {
    // const size_t size = 10;
    // int arr[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // const int result = sum<int>(arr, size);

    // float arr2[size] = {0.0f, 1.0f, 2.0f, 3.0f, 4.0f,
    //                     5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
    // const int result = sum<float>(arr2, size);

    int result = fun<int>(2, 14);
    float result2 = fun<float>(2, 14);
    std::string result3 = fun<std::string>("HOLA", "MUNDO");
    std::cout << result << std::endl;
    std::cout << result2 << std::endl;
    std::cout << result3 << std::endl;
    return 0;
}
