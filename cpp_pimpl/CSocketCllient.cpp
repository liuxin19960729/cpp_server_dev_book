//编译为 .a or .so 等库
#include "CSocketCllient.hpp"
#include "iostream"
using namespace std;
//细节相关实现
struct CSocketCllient::Impl
{
    int a = 100;
};

void CSocketCllient::Say()
{
    cout << "a: " << _impl->a << endl;
}

CSocketCllient::CSocketCllient()
{
    _impl = new Impl();
}

CSocketCllient::~CSocketCllient()
{
    delete _impl;
}
