# ft_printf

`ft_printf` is a project in the 42 curriculum that involves recreating the `printf` function in C. This project helps you understand variadic functions, formatted output, and strengthens your C programming skills.

## Overview

`ft_printf` is a custom implementation of the standard `printf` function. It handles various format specifiers and provides formatted output capabilities. This project covers a wide range of concepts, including parsing, memory management, and handling variable arguments.

## Features

- **Basic Conversion Specifiers:** Implement support for `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, and `%X`.
- **Flags Handling:** Support for flags such as `-` (left-justify), `0` (zero-padding), `.` (precision), and width specifiers.
- **Modifiers:** Handle length modifiers like `hh`, `h`, `l`, and `ll`.

## Getting Started

To get started with `ft_printf`, clone the repository and compile the library using the provided Makefile:

```bash
git clone https://github.com/BenjaminLarger/ft_printf.git
cd ft_printf
make
./ft_printf
