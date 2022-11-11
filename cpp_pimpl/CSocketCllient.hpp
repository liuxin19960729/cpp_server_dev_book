#pragma once
//作为第三方库来提供接口堆外提供接口

class CSocketCllient
{
private:
    class Impl; //定义为内部类
    Impl *_impl;

private:
public:
    void Say();
    CSocketCllient(/* args */);
    ~CSocketCllient();
};
