# ft_printf 🖨️

ft_printf is a reimplementation of the famous C printf function. It allows you to print formatted strings to the standard output (stdout) using format specifiers similar to the original function.

---

## Contents

- Features
- Installation
- Usage
- Examples
- Contributions
- License

---

## Features

- Supports the following format specifiers:
  - `%c` : Character
  - `%s` : String
  - `%p` : Pointer
  - `%d` / `%i` : Signed integer
  - `%u` : Unsigned integer
  - `%x` / `%X` : Hexadecimal integer (lowercase and uppercase)
  - `%%` : Prints the '%' character
- Basic error handling and NULL pointer handling
- Behavior similar to the original printf from the standard library

---

## Installation

1. Clone the repository:

```bash
git clone https://github.com/dajose-p/ft_printf.git
cd ft_printf
```

2. Compile the library:

```bash
make
```

This will generate `libftprintf.a`.

---

## Usage

To use `ft_printf` in your project, link the compiled library:

```bash
cc main.c -L. -lftprintf -o my_program
```

Make sure to include the header:

```c
#include "ft_printf.h"
```

---

## Examples

```c
#include "ft_printf.h"

int main(void)
{
    int x = 42;
    ft_printf("Hello %s, the value is %d\n", "world", x);
    ft_printf("Pointer: %p\n", &x);
    ft_printf("Hexadecimal: %x\n", x);
    return 0;
}
```

Expected output:

```text
Hello world, the value is 42
Pointer: 0x7ffee3b4c6ac
Hexadecimal: 2a
```

---

## Contributions

This project is part of the 42 curriculum, so external contributions are not accepted.  
However, you are encouraged to experiment and extend its functionality for educational purposes.

---

## License

This project is free for educational use. All rights to the original code belong to its author.
