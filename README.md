﻿# EEX6363-Compiler-Construction
### source the env file in terminal

```bash
# Remove old path
$oldPath = $env:PATH -split ';' | Where-Object { $_ -notlike "*Program Files*" }
$env:PATH = $oldPath -join ';'

# Add new path
$env:PATH += ";C:\GnuWin32\bin"

# Verify installation
bison --version

```
### git env path
```bash
$env:Path += ";C:\Program Files\Git\cmd"
```
