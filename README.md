# C

## Dissasemble

`objdump -d path/to/binaryfile`

## Install c compiler Windows

1. Install [MSYS2](https://github.com/msys2/msys2-installer/releases/download/2021-06-04/msys2-x86_64-20210604.exe)
2. In MSYS window: `pacman -Syu`
3. Open MSYS2 MSYS and run `pacman -Su`
4. `pacman -S --needed base-devel mingw-w64-x86_64-toolchain`
5. Add `\mingw64\bin` to env vars

### VS code
6. Install vscode extension "C/C++"
7. Add `C:\msys64\mingw64\include\**` to `configurations.includePath`
