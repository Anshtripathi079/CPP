### DIFFERENT COMPILERS FOR C++

 The source code is written in a high-level language.

To make the computer understandable, we need a translation or interpreter. The compiler is the most user-friendly method of communication with it. An object file is created after compiling each C++ file. The pre-processor is performed by the compiler first, then the compilation phase takes place as well as the object file is produced. There are hundreds of lines of templates programming in C++ programmes. Because of this, the user must increase their productivity.

### Procedure for Compiling C++
A header file (.h) alongside a source code make up a C++ programme (.cpp). In addition, the <include> command is used to connect open source libraries or files to C++ programmes.

There are three phases involved in compiling the C++ programme:

Preprocessing: In this step, the source CPP file's included files are utilised, and the code is changed there. This procedure doesn't involve using header files. Similarly, preprocessing replaces the code of macros and inline functions when they are called before they are used.
Compile: After the file has been preprocessed, it is compiled to create an object file with the extension ".o".
Linking: The connecting procedure involves linking the object file to any third party applications and functions that the application makes use of. The software will eventually run correctly.

### Top C++ compilers for hosted environments
#### 1. Microsoft Visual C++ compiler
Microsoft included this C++ and C compilers within Visual Studio. The present compiler edition, 19.28.29914, that is included with Microsoft Visual 2019 version 16.10, fully supports the C++17 core language enhancements including the C++17 library elements and partly supports the C++20 elements.

The anticipated inclusion of a Visual C++ compilers in Visual Studio 2022, which is presently available in preview form, will enable complete support for the C++20 features. The Visual C++ compiler may be used to create native Linux programmes, even though it is usually used it for Windows development utilising the Windows Subsystem for Linux (WSL) interface.

#### 2. The GNU compiler collection
Probably one of the best open-source applications is the GNU compiler collection, or GCC. In addition to C and C++, it is a toolset that would be used to assemble many other languages. Both the C++17 core language and C++17 library features are fully supported by GCC 11, the most recent version of GCC. Aside from a few minor enhancements in Modules, it also offers experimental evidence for practically each of the C++20 languages and library features. Notably, GCC 11 also incorporates parts of the draught C++23 standard's characteristics, which is the C++ standard's 23rd iteration and follows C++20.

#### 3. Clang/LLVM
GCC and Clang were contrasted in one of my most current blog postings. I had outlined the compiler's design in depth and the way the LLVM backend made it simple to incorporate new optimizations. C++17 is fully supported by the most recent version of Clang/LLVM, 12.0, and C++20 is experimentally supported. As you read this page, you'll see why many other C++ compilers choose to build their software on this open-source framework.

#### 4. MinGW
It is an open-source programme that doesn't need any other components and integrates nicely with Microsoft Windows development. It includes GCC compilers for the programming languages C, C++, and Fortran. The customer prefers this compiler over many others because of the high degree of portability provided by ANSI Compliance in GCC. Using Windows 32 or min32, a customised project may be incorporated, along with other packages, and is licenced for use in a certain version. We have full access to the source code thanks to G++. Its quickness and ease of use, which call for DLL libraries, are major advantages.

#### 5. Intel C++ compiler
For applications that need a lot of work, I have utilised the Intel C++ compiler (specifically, the Intel® oneAPI DPC++/C++ Compiler), and I've been quite pleased with how well it performs. Contrary to Visual Studio, which supports WebView2 support for web-based applications as well as MFC (Microsoft foundation classes) for computer application development, Intel's compiler supports Data Parallel C++ (DPC++) and Threading Building Blocks (presently open-sourced as oneAPI), demonstrating the difference in focus. Where Intel Compiler excels is in computational cost programs with parallel computing (with parallel STL), support for Field-programmable gate array (FPGA), and support for graphics processing units (GPU). The C++17 standard is compatible with the most recent release of the Intel C++ compiler.
