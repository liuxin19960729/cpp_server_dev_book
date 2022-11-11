#include <iostream>
using namespace std;

void test_fallthrough(int type);
// 不能 test_nodirscard();,返回值必须接收 不能丢弃
//  int c= test_nodirscard();
[[nodiscard]] int test_nodirscard();

//废弃注解
[[deprecated("please use a_instead() fun")]] void a();

/**
有些编译器对未使用到的变量或函数 发出警告
[[maybe_unused]] 忽略某个变量函数的警告 
 */
void test_maybe_unused([[maybe_unused]] int c);

int main(int argc, char const *argv[])
{
    test_maybe_unused(1);
    return 0;
}

void test_maybe_unused(int c)
{
    cout << c << endl;
}

int test_nodirscard()
{
    return 100;
}
void test_fallthrough(int type)
{
    /**
     * [[fallthrough]]
     * 如果 某个 case执行完毕 没有 break 编译器会发出警告
     * 为了让编译器不发出警告 [[fallthrough]] 告诉边缘器故意的
     */
    switch (type)
    {
    case 1:
        cout << "1" << endl;
        break;
    case 2:
        cout << "2" << endl;
        [[fallthrough]];
    default:
        cout << "default" << endl;
        break;
    }
}

// void a(){

// }