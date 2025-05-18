# 📦 `Printf` Implementation

A lightweight implementation of the standard `printf` function in C, supporting several format specifiers. Built as a static library (`libftprintf.a`) with a clean and portable `Makefile`.

---

## ✅ Features

- Custom implementation of `printf`
- Supports the most common format specifiers:
  - `%c` – character
  - `%s` – string
  - `%d`, `%i` – signed integers
  - `%x`, `%X` – hexadecimal (lowercase/uppercase)
  - `%p` – pointer address
- Handles variable arguments (`stdarg.h`)
- Built as a static library using a `Makefile`

---

## 🛠️ Build Instructions

To compile the library:

```bash
make
```
To clean objects:

```bash
make clean
```
To clean and remove library:

```bash
make fclean
```
