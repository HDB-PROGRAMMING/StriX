# StriX, the ultimate Open Source framework for maths and data management
**StriX** is an Open Source framework for maths and data management, it contains multiple functions such as the popular algorithm Merge Sort, you can download this library to use it in your maths, physics and data projects.

## How can I install StriX in my computer?
You can install StriX by various ways, these are the ways you can install it in Windows, MacOS X and GNU/Linux. First, you need to download ready to compile source from the last release and then, follow the instructions below:

#### Windows
Go to releases and download the installer for the last varsion aviable, the execute it and click next to all to install StriX in your computer or you can type this on CMD as administrator.
```batch
cd StriX\win
install
```
#### Mac OS X
```zsh
cd StriX
vim Makefile
# To edit the Makefile

sudo make install
```
#### GNU/Linux
```bash
cd StriX
vim Makefile
# To edit the Makefile

sudo make install
```

## How can I use StriX in my project?
You've got 3 options, which are locate StriX in your project via linking your project with the StriX dll, locate StriX source in your project's source and then include it or locate StriX's source in your compiler's include folder.

### Linking your project with the StriX dll
The first thing you need to do is install StriX, then go to the file you want to include StriX and follow the instructions below for your programming language, StriX dll is aviable for C/C++ and Python with ctypes (cdll).

#### C/C++
```c++
#using <StriX.dll>
```
#### Python
```python
from ctypes import cdll
StriX = cdll.LoadLibrary('[StriX dir]')
```
And you've done, StriX library is identified as an object, in this case it's called StriX but you can call it whatever you want.

### Locating StriX's source in your project's source
First, go to the releases and download the latest release's source code as a .zip or .tar.gz file and decompress it, then go to your project and copy StriX's source folder (the folder named src) content to a folder in your project's source named StriX, then go to the file you want to include StriX and type this/these lines of code at the beginning of the file:

#### C/C++
```c++
#include "StriX/StriX.h"
// To include the whole framework

#include "StriX/Console.h"
#include "StriX/Data.h"
#include "StriX/Maths.h"
#include "StriX/Physics.h"
// To include every module separated
``` 
And StriX will be included in your C/C++ project.

### Locating StriX's source in your compiler's include folder
First, go to the releases and download the latest release's source code as a .zip or .tar.gz file and decompress it, then open your terminal in the decompressed folder and follow the instructions bellow for your operative system:

#### Windows
```batch
cd win
locate
```
#### Mac OS X
```zsh
sudo make locate
```
#### GNU/Linux
```bash
sudo make locate
```

If you want to contact me, click [here](mailto:hdbprogramming@gmail.com).