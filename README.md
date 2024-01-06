# Laser-communication
This is a test version of a system to transport letter and words through laser
这是一个通过激光传输信息的测试系统，这只是一个实例，在不同的arduino上可能无法运行。
基本原理：通过光线传感器获取亮度，检测激光是否打到传感器，在激光持续时间小于450毫秒时判定为0，大于450时判定为1，通过ASCII转换为字符。

实现语言：C++

开发板：一块老旧的Makeblock MBot板子，鬼知道为什么要用这块，也许是因为板载的光线传感器罢，其他板子修改代码内引脚即可
