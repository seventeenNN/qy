# 固件库模版
## 一个文件包含：
### startup启动文件：
startup 启动文件是一个关键的组件，它通常是一个汇编语言文件（.s 或 .asm），负责在系统启动时执行一些初始化任务。这些任务包括设置堆栈指针、初始化全局变量、配置中断向量表、以及跳转到主程序入口点等。

以下是 startup 启动文件的一些主要功能和内容：

**设置堆栈指针：**

在系统启动时，需要设置堆栈指针（SP），以便为函数调用和局部变量分配内存空间。

**初始化全局变量：**

在某些架构中，全局变量需要在启动时进行初始化，以确保它们具有正确的初始值。

**配置中断向量表：**

中断向量表包含了中断处理程序的入口地址。启动文件需要设置中断向量表，以便在发生中断时能够正确地跳转到相应的处理程序。

**跳转到主程序入口点：**

启动文件在完成所有初始化任务后，会跳转到主程序的入口点（通常是 main 函数），开始执行用户代码。

**复位处理程序：**

启动文件通常包含一个复位处理程序，它在系统复位时执行，负责重新初始化系统。

**异常和中断处理：**

启动文件可能还包含异常和中断处理程序的定义，以便在发生异常或中断时进行处理。

### CMSIS
CMSIS（Cortex Microcontroller Software Interface Standard）是由 ARM 公司开发的一套标准接口，旨在为基于 Cortex-M 处理器的微控制器提供一致的软件开发接口。CMSIS 文件通常包括以下内容：

1. **CMSIS Core**：
   - 提供了一个标准的软件接口，用于访问 Cortex-M 处理器的核心功能，如中断控制、系统时钟配置、异常处理等。
   - 相关的文件通常包括 `core_cmX.h`（如 `core_cm3.h`、`core_cm4.h` 等），其中 `X` 代表 Cortex-M 处理器的版本。

2. **Device Specific Files**：
   - 包括特定微控制器系列的启动文件（如 `startup_xxx.s`）、系统初始化文件（如 `system_xxx.c`）和头文件（如 `xxx.h`）。
   - 这些文件通常由微控制器制造商提供，并包含在 CMSIS 包中。

3. **CMSIS DSP Library**：
   - 如果项目中使用了数字信号处理功能，CMSIS DSP Library 提供了大量的数学、变换、滤波和矩阵运算函数。
   - 相关的文件通常包括 `arm_math.h` 和其他 `.c` 和 `.h` 文件。

4. **CMSIS RTOS API**：
   - 如果项目中使用了实时操作系统（RTOS），CMSIS RTOS API 提供了一组标准的接口，用于管理线程、信号量、消息队列等。
   - 相关的文件通常包括 `cmsis_os.h` 和其他 `.c` 和 `.h` 文件。

5. **CMSIS Driver API**：
   - 提供了一组标准的接口，用于访问外设，如UART、SPI、I2C等。
   - 相关的文件通常包括 `cmsis_driver.h` 和其他 `.c` 和 `.h` 文件。

CMSIS 文件通常被组织在一个特定的目录结构中，以便于管理和使用。例如，STM32 微控制器的 CMSIS 文件可能被组织在以下目录结构中：

```
CMSIS/
├── Device
│   └── ST
│       └── STM32F4xx
│           ├── Include
│           │   ├── stm32f4xx.h
│           │   ├── system_stm32f4xx.h
│           │   └── startup_stm32f4xx.s
│           └── Source
│               └── system_stm32f4xx.c
├── Include
│   ├── core_cm3.h
│   ├── core_cm4.h
│   └── arm_math.h
└── Lib
    └── ARM
        ├── arm_cortexM4lf_math.lib
        └── arm_cortexM4bf_math.lib
```

在项目中使用 CMSIS 文件时，通常需要在编译器设置中包含这些文件的路径，并在代码中包含相应的头文件。例如：

```c
#include "stm32f4xx.h"
#include "core_cm4.h"
#include "arm_math.h"
```

通过使用 CMSIS 文件，开发者可以简化软件在不同 Cortex-M 微控制器之间的移植，并提供一个标准的接口，使得第三方软件和中间件可以更容易地集成到项目中。

### STM32F4xx_StdPeriph_Driver

STM32F4xx_StdPeriph_Driver 是 STMicroelectronics 为 STM32F4 系列微控制器提供的一套标准外设驱动库。这个库包含了用于访问和控制 STM32F4 系列微控制器各种外设的函数和数据结构。

以下是 STM32F4xx_StdPeriph_Driver 的一些主要特点和内容：

**外设驱动：**

提供了对各种外设的驱动程序，如 GPIO、UART、SPI、I2C、ADC、定时器、DMA 等。

**硬件抽象：**

通过提供一组函数接口，抽象了硬件的底层细节，使得开发者不需要直接操作寄存器，而是通过调用库函数来控制外设。

**一致的接口：**

库中的函数接口遵循一致的命名和参数规范，这有助于减少学习曲线，并使得代码更易于维护和移植。

**示例代码：**

通常伴随着示例代码，这些示例展示了如何使用库函数来实现常见的任务。

**文档：**

库的文档详细说明了每个函数的功能、参数和返回值，帮助开发者理解和使用库。

**优化：**

库的代码通常经过优化，以确保高效利用硬件资源，如最小化代码大小和内存占用，以及提高执行速度。

在 STM32F4xx_StdPeriph_Driver 文件夹中，你通常会找到以下类型的文件：

头文件（.h）：定义了外设的结构体、枚举和函数声明。例如，stm32f4xx_gpio.h 定义了 GPIO 相关的函数和数据结构。

源文件（.c）：包含了外设驱动的实现代码。例如，stm32f4xx_gpio.c 包含了 GPIO 驱动的实现。

### USER

user 文件通常指的是用户代码文件，这些文件包含了开发者编写的应用程序代码。在 Keil MDK（Microcontroller Development Kit）或其他类似的开发环境中，user 文件夹或 user 文件可能包含以下内容：

**主程序文件：**

通常是 main.c 文件，包含了应用程序的主函数 main()，这是程序的入口点。

**用户定义的函数和模块：**

其他 .c 和 .h 文件，包含了用户定义的函数、模块和数据结构。

**配置文件：**

可能包含一些配置文件，用于设置应用程序的参数或选项。

**用户资源文件：**

可能包含一些资源文件，如图片、字符串表等。

### DOC
说明文件

## 配置模版
1. 第一步：开外设时钟

```c
RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);
```

2. 第二步：定义一个初始化结构体

```c
GPIO_InitTypeDef GPIO_InitStruct;
```
 
3. 第三步：配置外设初始化结构体的成员

```c
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_6;
	GPIO_InitStruct.GPIO_Mode  = GPIO_Mode_OUT;
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStruct.GPIO_Speed  = GPIO_Low_Speed;
  GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;
```

4. 第四步：调用初始化函数，把配置好的结构体成员的参数写入寄存器

```c
GPIO_Init(GPIOF, &GPIO_InitStruct);
GPIO_ResetBits(GPIOF, GPIO_Pin_6);
```

