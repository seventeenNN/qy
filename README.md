# 器件型号
STM32F407ZGT6 (霸天虎v2)

# keil5下载
提示：1.英文路径
      2.安装路径与其他的keil不能冲突
      3.keil5必须添加MCU库
      
安装keil5（https://www.keil.com/download/product/)

安装stm32芯片包（keil5不自带MCU）

keil5文件类型：.uvprojx后缀名文件（主要在project文件夹下）

# 使用DAP仿真器下载程序
1.连接

2.仿真器配置(魔术棒)
  a.debug：
  b.utilities
  c.debug settings
  d.选择目标板
  
3.下载程序
    编译（build）->下载（load）
    出现“Application runnning ...”表示成功
