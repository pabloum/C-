#include <cstdlib>
#include <iostream>
#include <string>

template <typename T>
class IContainer {
public:
    virtual size_t size() const = 0;
    virtual bool empty() const = 0;
    virtual void push_back(const T& src) = 0;
    virtual const T& front() const = 0;
};

template <typename T>
class Vector : IContainer<T> {
public:
    T* mVec;
    size_t mMax;
    size_t mSize;

    Vector() : mSize(0) {
        mMax = 3;
        mVec = new T[3];
    }

    ~Vector() {
        delete[] mVec;
    }

    T& get_val(size_t position) {
        return mVec[position];
    }

    size_t size() const {
        return mSize;
    }

    size_t capacity() const {
        return mMax;
    }

    bool empty() const {
        return !mSize;
    }

    void push_back(const T& src) {
        if (mSize < mMax) {
            mVec[mSize++] = src;
        } else {
            T* storage = new T[mMax * 2];
            for (size_t i = 0; i < mMax; i++) {
                storage[i] = mVec[i];
            }
            delete[] mVec;
            mVec = storage;
            mVec[mSize++] = src;
            mMax *= 2;
        }
    }

    const T& front() const {
        return mVec[0];
    }
};


class MyClass {
public:
    MyClass() {}
    MyClass(int val) : val(val) {}
    int val;
};

std::ostream& operator<<(std::ostream& os, const MyClass& c) {
    return os << "MyClass: " << c.val;
}

int main() {
    Vector<MyClass> vec;
    // vec.push_back("HOLA");
    // vec.push_back("MUNDO");
    // vec.push_back("ASDFGH");
    // vec.push_back(":D");
    vec.push_back(MyClass(0));
    vec.push_back(MyClass(1));
    vec.push_back(MyClass(2));
    vec.push_back(MyClass(3));

    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec.get_val(i) << std::endl;
    }

    return 0;
}
