//讲构造函数和非成员函数虚拟化
//当有一个指针或者引用，但是不知道其只想对象的真是类型是什么时，可以通过调用虚函数来
//完成特定类型的行为，这就是动态多态。
//那么，虚拟构造函数什么作用呢？ 虚拟构造函数是指能够根据输入数据的不同而建立不同类型的对象,
//但是注意这里的虚拟构造函数不是说构造函数是虚函数，而是行为类似于构造行为的函数
//虚拟拷贝构造函数：self-clone,返回调用对象的一份拷贝
//
//
//TODO
//实现虚拟的构造函数，模拟operator<<，定义虚拟函数和一个非虚拟函数来完成操作。
