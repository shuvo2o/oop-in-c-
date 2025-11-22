# oop-in-c++

Minimal example code and exercises demonstrating object-oriented programming (OOP) concepts in C++: classes, inheritance, polymorphism, encapsulation, and RAII.

## Contents
- Overview of OOP concepts used
- How to build and run examples
- Project layout and recommended coding conventions
- Small examples and extension ideas

## Quick start

Requirements
- A C++17-capable compiler (g++, clang++, MSVC)
- Make or CMake (optional)

Build with g++ (single-file example)
```bash
g++ -std=c++17 -Wall -Wextra -O2 src/main.cpp -o bin/run
./bin/run
```

Build with CMake (recommended for multi-file projects)
```bash
mkdir -p build && cd build
cmake ..
cmake --build .
./oop-in-cpp   # or the produced executable name
```

## Project layout (suggested)
- src/
    - main.cpp
    - classes/      # individual class implementations (.cpp/.h)
    - examples/     # small demo programs for each concept
- include/        # public headers (if using a library layout)
- tests/          # unit tests (optional)
- bin/            # compiled executables (ignored by VCS)
- README.md

## Recommended contents for examples
- Basic class with encapsulated data and public getters/setters
- Constructor / destructor demonstrating RAII
- Inheritance example: Base and Derived with virtual methods
- Polymorphism example: container of Base* calling virtual functions
- Rule of Five example (copy/move ctor & assignment, destructor)
- Simple factory or smart-pointer usage (unique_ptr/shared_ptr)

## Coding style & guidelines
- Use header files (.h/.hpp) for declarations and .cpp for definitions
- Prefer std::unique_ptr/std::shared_ptr over raw pointers where ownership matters
- Mark override on overridden virtual methods
- Keep functions small and single-responsibility
- Prefer const-correctness for methods and parameters

## Testing
- Use a simple testing framework (Catch2, GoogleTest) in tests/
- Add CI later to run unit tests and static analysis

## Extending this repository
- Add more examples demonstrating SOLID principles
- Add CMake targets for building each example separately
- Add small exercises with expected outputs and unit tests

## License
Add a license file (e.g., MIT) to clarify reuse and distribution.

----
