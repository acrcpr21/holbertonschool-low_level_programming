# File I/O

This project implements various file input/output operations in C using system calls.

## Overview

File I/O operations are fundamental to systems programming. This project demonstrates how to work with files at the system level using low-level file descriptors and system calls like `open()`, `read()`, `write()`, and `close()`.

## Files

### Header Files
- `main.h`: Header file containing all function prototypes and required includes

### Helper Functions
- `_putchar.c`: Writes a single character to standard output

### Core Functions

#### 0. Read Text File
- **File**: `0-read_textfile.c`
- **Function**: `read_textfile`
- **Description**: Reads a text file and prints it to the POSIX standard output
- **Returns**: The actual number of letters it could read and print, or 0 on failure

#### 1. Create File
- **File**: `1-create_file.c`
- **Function**: `create_file`
- **Description**: Creates a file with permissions `rw-------` (0600) and writes text content to it
- **Returns**: 1 on success, -1 on failure

#### 2. Append Text to File
- **File**: `2-append_text_to_file.c`
- **Function**: `append_text_to_file`
- **Description**: Appends text at the end of an existing file
- **Returns**: 1 on success, -1 on failure

#### 3. Copy File
- **File**: `3-cp.c`
- **Program**: `cp`
- **Description**: Copies the content of one file to another with proper error handling
- **Usage**: `cp file_from file_to`
- **Exit Codes**:
  - 97: Incorrect number of arguments
  - 98: Cannot read from source file
  - 99: Cannot write to destination file
  - 100: Cannot close a file descriptor

## Compilation

All files are compiled on Ubuntu 20.04 LTS using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

#### Key Concepts

- File descriptors and low-level file operations
- System calls: `open()`, `read()`, `write()`, `close()`
- File permissions and modes
- Error handling in file operations
- Buffer management for efficient file I/O
