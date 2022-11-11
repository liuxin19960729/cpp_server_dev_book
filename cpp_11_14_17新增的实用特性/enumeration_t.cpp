// enum Color 不限作用域的定义
// enum Color
// {
//     black,
//     white,
//     read,
// };
// bool white = true; // c++11 以前无法编译前面已经定义
//2 c++ 11支持 white 只在 Color class 作用域才可以见到
enum class Color
{
    black,
    white,
    read,
};
bool white = true; 
int main(int argc, char const *argv[])
{

    return 0;
}
