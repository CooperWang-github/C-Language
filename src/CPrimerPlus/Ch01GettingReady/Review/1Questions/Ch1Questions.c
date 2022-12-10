/** Ch1 Review Questions
 * @file Ch1Questions.c
 * @brief 
 * @author WANGHUI (479058251@qq.com)
 * @version 1.0
 * @date 2022-12-10
 * 
 * @copyright Copyright (c) 2022 
 * 
 */

/*
    1. What does portability mean in the context of programming? 
        - portability 移植性
        因计算机系统的硬件系统在指令系统和编码风格上有很大的差异，开发的应用程序无法在所有平台上运行。
        同一个程序在不同系统上需要修改源代码后重新编译，这样才能生成与目标系统适配的可执行应用程序。
        编程语言的可移植性意味着通过编译器，将源代码编译、生成对应目标系统可执行的应用程序。

    2. Explain the difference between a source code file, object code file, and executable file. 
        - source code file 源代码文件
            由高级编程语言编写的指令文件。
        - object code file 目标代码文件
            在C语言编译过程中，首先将源代码编译成一种叫做目标代码文件的中间代码文件，目标代码中部分标准库函数的代码部分临时空缺，
            在链接阶段为目标代码文件添加对应的系统标准启动代码和库代码组合，最终生成可执行文件。
        - executable file 可执行文件
            由机器语言组成的指令文件，能够被计算机系统识别和执行。
    
    3. What are the seven major steps in programming? 
        C 语言编程的7个主要步骤
        （1）定义程序的目标
        （2）设计程序
        （3）编写代码
        （4）编译
        （5）运行程序
        （6）检测和调试代码
        （7）维护和修改代码
    
    4. What does a compiler do? 
        compiler 编译器
        编译器的主要作用：把使用高级程序设计语言编写的源代码，编译为目标代码的过程。
        目标代码不是一个完整的可执行文件，其中还缺少库代码和启动代码。
        目标代码文件必须通过链接器将中间代码和其他运行库代码合并后才能形成目标平台的可执行文件。
    
    5. What does a linker do?
        linker 链接器
        链接器的主要作用：将编译器形成的中间代码、编译系统原有的系统代码和其他一些第三方代码库合并，形成目标平台的可执行文件。
 */