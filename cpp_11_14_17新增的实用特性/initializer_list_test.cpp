#include <iostream>
#include <initializer_list>
using namespace std;
class A
{
public:
    A()
    {
        cout << " A()" << endl;
    }

    explicit A(int a)
    {
        cout << "A(int a)" << endl;
    }
    explicit A(int a, int b)
    {
        cout << " A(int a, int b)" << endl;
    }
    // A(initializer_list<int> list)
    // {
    //     cout << " A(initializer_list<int> list)" << endl;
    // }
};

int main(int argc, char const *argv[])
{

    A a1{};
    A a2{1};                // A(initializer_list<int> list)
    A a3{1, 3};             // A(initializer_list<int> list)
    // A a4 = {1, 2, 3};          // A(initializer_list<int> list)
    // A a5 = {1, 2, 3, 4, 5, 4}; // A(initializer_list<int> list)
    return 0;
}
