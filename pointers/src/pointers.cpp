#include <iostream>
#include <memory>

using namespace std;

void print(auto p, const char* s)
{ 
    cout << "// " << s << '\n';

    cout << "p: address of p\t\t" << p << endl; // decay to pointer to first element
    cout << "&p: address of p\t" << &p << endl;
    cout << "&p[0]: addr of elem 0\t" << &p[0] << endl;
    cout << "&p[1]: addr of elem 1\t" << &p[1] << endl;
    cout << "&p[2]: addr of elem 2\t" << &p[2] << endl;
    cout << "*p: value of elem 0\t" << *p << endl;
    cout << "p[0]: value of elem 0\t" << p[0] << endl;
    cout << "p[1]: value of elem 1\t" << p[1] << endl;
    cout << "p[2]: value of elem 2\t" << p[2] << endl;
    cout << endl;
}

int main()
{
    int a[] = {1, 2, 3};
    print(a, "int a[]");

    int* p = a; // implicit conversion, pointer decay
    print(p, "int*");

    int(*pa)[3] = &a;
    print(pa, "int(*pa)[]");

    pa = nullptr;
    print(pa, "int(*pa)[] = nullptr");

    return 0;
}
