# Comparative research of approaches to Reverse-Int problem

## Overview

This repository contains a comparative performance and memory analysis of different approaches to reversing the decimal digits of a signed integer. The study compares three implementations:

1. **String Slicing (Python)** — uses Python's string reversal (`[::-1]`). The most Pythonic and readable approach.
2. **Arithmetic Loop (Python)** — extracts digits using `% 10` and `// 10` in a loop. Demonstrates Python's arithmetic overhead due to integer immutability.
3. **C++ Extension (pybind11)** — implements the same arithmetic logic in C++ and exposes it to Python via `pybind11`.

The research includes:
- Execution time benchmarks (scalability from 1 to 100 digits)
- Memory consumption analysis (peak memory per call)
- Readability and use-case recommendations

## Repository Structure

```
reverse_int/
├── reverse_int.ipynb          # Main Jupyter Notebook with full analysis
├── reverse_int.html           # Exported HTML report (ready to view)
├── requirements.txt           # Python dependencies
├── README.md                  # This file
├── reverse_int.cpp            # C++ source code (for transparency)
├── CMakeLists.txt             # CMake build configuration
└── reverse_int.so             # Shared library (Linux, Python 3.12)
```

## Dependencies

Install Python dependencies:

```bash
pip install -r requirements.txt
```

## Building the C++ Library

### Prerequisites

- C++ compiler with C++11 support (g++, clang, or MSVC)
- Python development headers (`python3-dev` on Ubuntu)
- `pybind11` (automatically downloaded if not present)

### Build with CMake (recommended for cross-platform)

```bash
mkdir build && cd build
cmake ..
make
```

The compiled library will be named `reverse_int.so` (Linux/macOS) or `reverse_int.pyd` (Windows).

## Usage

```python
import reverse_int

# Reverse a positive integer
print(reverse_int.reverse(12345))   # Output: 54321

# Reverse a negative integer
print(reverse_int.reverse(-987))    # Output: -789
```

## Running the Benchmarks

Open `reverse_int.ipynb` in Jupyter and run all cells:

```bash
jupyter notebook reverse_int.ipynb
```

Or view the pre-exported HTML report (`reverse_int.html`) directly in your browser.