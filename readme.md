ComAddDemo
============
64位进程调用32位DLL详解！
（from: https://blog.csdn.net/nie2314550441/article/details/49867735）
微软公司的官方网站针对这个问题描述如下：
在64位的windows系统中，一个64位进程不能加载一个32位dll，同理一个32位进程也不能加载一个64位dll。
但是，64位windows支持64位和32位进程（包括本机或跨机）间进程间通信（RPC）。
在64位windows中，一个进程外32位COM服务器能够与64位客户端进行通信，
同样一个进程外64位COM服务器也能与32位客户端进行通信。
因此，如果你有一个32位COM无法识别的DLL，
你可以将它封装到一个进程外COM服务器中并在一个64位进程中用COM配置调用DLL。

工作流程：
1.创建一个进程外COM服务器(EXE)。
2.将32位dll的接口函数封装为COM服务器的相关接口。
3.注册COM服务器*.exe /regserver  (注销 *.exe /unregserver)。
4.64位进程调用32位COM服务器接口，成功。从而曲线实现了64位进程调用32位dll。

具体步骤：
创建了一个简单的32位dll工程，只输出一个函数int c = Add(int a,int b); 生成lib和dll
然后创建一个进程外COM(EXE类型)，添加方法Method: ComServiceAdd(LONG num1, LONG num2, LONG* sum)编译生成。
然后注册COM，*.exe /regserver
最后创建一个64位WIN32工程验证64位环境下方法调用是否正确，经验证正确！！！

结论：以上方法可以解决64位进程调用32位dll的问题

32位进程调用64位dll应该也可以通过这种方法解决，原因64位windows系统下安装了32位和64位两套COM系统

 