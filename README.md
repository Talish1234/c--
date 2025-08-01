# C-- Language Prototype

A C++-based prototype that brings **JavaScript-like syntax and behavior** into C++ using **operator overloading**, macros, and a modular architecture. C-- supports dynamic arrays, flexible typing, console I/O, and useful algorithms — all inspired by JavaScript and modern scripting languages.

---

## Features

- `let` keyword (JavaScript-style variable declaration)
- `function` support
- Mixed-type arrays: `{string, number, bool}`
- `console.log()` for output
- `readline()` for input
- Operator overloading:
  - `"hello" + name`
  - `"age: " + 21`
- Array methods:
  - `push(val)`, `pop()`, `front()`, `reverse()`, `sort()`, `back()`, `at(index)`, `erase(firstIndex, lastIndex)`, `insert(index, val)`, `size()`, `capacity()`, `empty()`
- Built-in algorithms:
  - `swap(a, b)`, `min(a, b)`, `max(a, b)`
- Clean, modular structure for scalability

---

## Why C--?

C-- is designed to simulate the ease and style of JavaScript in a statically typed language like C++. It's ideal for experimentation, DSL design, or educational use cases.

---

## 📦 Getting Started

### Clone the Repository

```bash
git clone https://github.com/Talish1234/c--
cd c--
```

### Include in Your Project

Simply include the `c--.cpp` file in your own `.cpp` file:

```cpp
#include "c--.cpp"

int main() {
    let name = "Talish";
    let age = 21;

    console.log("Name: " + name);
    console.log("Age: " + age);

    console.log("Enter your city:");
    let city = readline();

    console.log("Welcome from " + city);

    return 0;
}
```

---

## Supported Features & Syntax

### ✅ Operator Overloading

| Expression              | Result                  |
|------------------------|-------------------------|
| `"Hi " + "there"`      | `"Hi there"`            |
| `"Age: " + 25`         | `"Age: 25"`             |

### ✅ Array Methods

```cpp
let arr = {1, 2, 3};
arr.push(4);           // [1, 2, 3, 4]
arr.pop();             // [1, 2, 3]
console.log(arr.front()); // 1
arr.reverse();         // [3, 2, 1]
arr.sort();            // [1, 2, 3]
arr.size();            // 3
arr.insert(0,0)        // [0,1,2,3]
arr.empty()            // []
```

### ✅ Built-in Algorithms

```cpp
let a = 10, b = 20;
swap(a, b);
console.log("Min:", min(a, b));
console.log("Max:", max(a, b));
```

---

## 🗂️ Project Structure

```
c--/
├── Stream/            # Stream utilities
├── algorithms/        # Custom algorithms (swap, min, max)
├── arrayfunction/     # Array methods: push, pop, sort, etc.
├── classes/           # let and Stream classes
├── converter/         # Type converters (e.g., string <-> int)
├── operators/         # Operator overloading logic
└── c--.cpp            # Core logic entry point
```

---

## Full Example

```cpp
#include "c--.cpp"

int main() {
    let user = "Talish";
    let numbers = {5, 2, 9};

    console.log("User: " + user);

    numbers.push(1);
    numbers.sort();
    console.log("Sorted numbers:");
    for (let num : numbers) {
        console.log(num);
    }

    let x = 100, y = 200;
    swap(x, y);
    console.log("x:", x, "y:", y);

    return 0;
}
```

---

## Future Scope

Here are some exciting features planned for upcoming versions of C--:

- **`typeof` operator**: To determine variable types at runtime.
- **Array iterators & functional methods**: Add `map()`, `filter()`, `reduce()`.
- **Lambda expression support**: Arrow functions (`=>`) style syntax.
- **Class & OOP extensions**: Add full support for defining classes with methods and constructors.
- **Import system**: Support for importing custom modules/files.
- **Error handling syntax**: Try/catch/finally pattern.
- **WebAssembly bridge**: Compile C-- to WebAssembly to run in browsers.
- **CLI REPL**: Interactive console for real-time testing (like Node.js).
- **JS-to-C-- transpiler**: Compile JavaScript code into equivalent C-- code.
- ** Type Generalization using void* **: Replace all primitive data types with void* to allow dynamic typing and generalized value storage (e.g., int, string, double, bool, etc.), simulating JavaScript-like flexibility.
---

## Contributing

Want to extend with more JS-like features like `map`, `filter`, or `typeof`?
- Fork the repo
- Add your feature/module
- Create a pull request with a brief explanation

---

## Author

**Mohd Talish Ansari**  
🔗 [GitHub Profile](https://github.com/Talish1234)
