# StriX, the ultimate Open Source library for maths and data management
StriX is an Open Source library for maths and data management, it contains multiple functions such as the popular algorithm Merge Sort, you can download this library to use it in your maths, physics and data projects.

### How can I install StriX in my computer?
You can install StriX by various ways, these are the ways you can install it in Windows, MacOS X and GNU/Linux.

#### Windows
Go to releases and download the installer for the last varsion aviable, the execute it and click next to all to install StriX in your computer or you can type this on CMD as administrator.
```batch
git clone https://github.com/HDB-PROGRAMMING/StriX.git
cd StriX\WinMake
install
```
#### Mac OS X
```zsh
git clone https://github.com/HDB-PROGRAMMING/StriX.git
cd StriX
sudo make install
```
#### GNU/Linux
```bash
git clone https://github.com/HDB-PROGRAMMING/StriX.git
cd StriX
sudo make install
```

### How can I use StriX in my project?
The first thing you need to do is install StriX, then go to the file you want to include StriX and type `#using <StriX.dll>` and you've done, you've already included StriX in your project.

#### Python
The first thing you need to do is install StriX, then go to the file you want to include StriX and type these two lines:
```python
from ctypes import cdll
StriX = cdll.LoadLibrary('[StriX dir]')
```
And you've done, StriX library is identified as an object, in this case it's called StriX but you can call it whatever you want.

If you want to contact me, click [here](mailto:hdbprogramming@gmail.com).