## c++11
```cpp
auto
统一初始化列表
final
=default
=delete
线程 时间 等标准库的支持

MSCV VC++12 开始支持(vs2013)
vs2015(c++14部分支持)
vs2017(c++14+c++17 部分支持)
vs2019(c++17大部分支持)

gcc/g++4.8 c++11支持
g++ 4.9 c++14
g++ 7.3 c++ 17 大部分支持
```

## c++11 开始添加了通用的注解标签
```
注解用于修饰  函数  任意类型 和 enumeration

c++ 17 新增修饰 namespace  enumerator

```
## c++17 注解标签
[注解.cpp](./%E6%B3%A8%E8%A7%A3.cpp)
```cpp
[[noreturn]] void terminate();告诉编译器没有返回值

c++ 14 
告诉边缘弃用编译的时候发出警告或编译错误
[[deprecate]] void xxx();
```

## final
```
 class A final{

}

防止A被继承
```
## override
```
写在一个函数后面 指定该函数的基类函数是虚函数用于对虚函数的重写

目的让编译器检查我们重写的函数是否是基类的虚函数
如果不是编译器发出警告
```
