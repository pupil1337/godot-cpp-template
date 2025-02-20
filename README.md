# godot-cpp-template

# Windows
## Development environments
vistual studio, visual studio code, llvm

[visual studio](https://visualstudio.microsoft.com/zh-hans/downloads/#build-tools-for-visual-studio-2022): for msvc build.  
[visual studio code](https://code.visualstudio.com/Download#): main work in this.  
[llvm](https://releases.llvm.org/): for clangd language server.  

## Setp-By-Step
### install
- install [visual studio build tool](https://visualstudio.microsoft.com/zh-hans/downloads/#build-tools-for-visual-studio-2022), this is build-tool not include IDE front-end. (if needed you can install [visual studio](https://visualstudio.microsoft.com/zh-hans/downloads/#visual-studio-community-2022)).  
Workloads 'Desktop development with C++' should selected in the installer.

- install [visual studio code](https://code.visualstudio.com/Download#)(recommend install 'System Installer' version).

- install [llvm](https://releases.llvm.org/).

- clone this repository, include submodule godot and godot-cpp.

- double-click 'demo.code-workspace' in root folder to open workspace.  
then install workspace recommend extensions.

### run demo
> Those step is base on open 'visual studio code' workspace(double-click 'demo.code-workspace').
1. **Compile:** Click vscode Menu Bar **Terminal**->**Run Task...**->**editor&game [debug]**, this operate will compile the whole code: godot,godot-cpp,game(game was compiled together with godot-cpp)

2. **Launch:** Recommend run **editor.bat** to Open **Editor**.  
Recommend Click vscode Activity Bar **Run and Debug(Ctrl+Shift+D)**->**game [edbug] - cppvsdbg**->**Start Debugging(F5)** to Run **Game**, because this operate will debug our game.

# Linux
## Development environments
clang, lld

## Setp-By-Step
### install
See [Godot Docs: Compiling for Linux, *BSD](https://docs.godotengine.org/en/stable/contributing/development/compiling/compiling_for_linuxbsd.html)

### run demo
> Those step is base on open 'visual studio code' workspace(double-click 'demo.code-workspace').
1. **Compile:** Click vscode Menu Bar **Terminal**->**Run Task...**->**editor&game [debug]**, this operate will compile the whole code: godot,godot-cpp,game(game was compiled together with godot-cpp)

2. **Launch:** Recommend run **editor.sh** to Open **Editor**.  
Recommend Click vscode Activity Bar **Run and Debug(Ctrl+Shift+D)**->**game [edbug] -- lldb**->**Start Debugging(F5)** to Run **Game**, because this operate will debug our game.
