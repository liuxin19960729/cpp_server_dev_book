## pimpl
```
1.隐藏实现细节
2.main.cpp 引用了 CSocketClient.hpp
  
  1.要编译成执行文件,只要  CSocketClient.hpp 不修改 
  CSocketClient.cpp 任意修改 只需要重新编译

  static library 全部重新连接
  dylib  不需要做任何修改

```