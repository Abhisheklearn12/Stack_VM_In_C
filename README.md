
# Stack-based VM in C
 test
A clean, minimal, and modular stack-based virtual machine written in C, inspired by the Java Virtual Machine (JVM).  
This project is built **purely for learning purposes**, to deeply understand virtual machines from the ground up.

---

## 🚀 Project Goals

- Understand the inner workings of virtual machines.
- Learn systems-level C programming through hands-on implementation.
- Build components like:
  - Bytecode parser
  - Class loader
  - Instruction set interpreter
  - Operand and call stacks
  - Heap memory manager and garbage collector
  - A basic standard library (I/O, Math)

---

## 📁 Project Structure

```bash
stack-vm-c/
├── include/                   # Header files (VM API and internals)
│   ├── vm.h                   # VM definition and lifecycle
│   ├── class_loader.h         # Class file loading
│   ├── bytecode.h             # Bytecode format & parser
│   ├── instructions.h         # Opcode definitions
│   ├── stack.h                # Operand stack, call frames
│   ├── heap.h                 # Object memory, allocations
│   ├── gc.h                   # Garbage collector
│   ├── types.h                # Enums, constants, types
│   ├── runtime.h              # Runtime orchestration
│   ├── interpreter.h          # Fetch-decode-execute loop
│   ├── stdlib/
│   │   ├── io.h               # println, input
│   │   └── math.h             # math operations
│   └── utils.h                # Logging, error helpers
│
├── src/                       # Core VM implementation
│   ├── vm.c
│   ├── class_loader.c
│   ├── bytecode.c
│   ├── instructions.c
│   ├── stack.c
│   ├── heap.c
│   ├── gc.c
│   ├── runtime.c
│   ├── interpreter.c
│   ├── stdlib/
│   │   ├── io.c
│   │   └── math.c
│   └── utils.c
│
├── tests/                     # Unit and integration tests
│   ├── test_vm.c
│   ├── test_stack.c
│   ├── test_gc.c
│   ├── test_instructions.c
│   └── test_bytecode.c
│
├── examples/                  # Compiled example programs
│   ├── HelloWorld.myclass
│   ├── Fibonacci.myclass
│   └── Benchmark.myclass
│
├── tools/                     # Tooling for bytecode
│   ├── assembler.c            # Converts .myasm → .myclass
│   ├── disassembler.c         # Converts .myclass → readable form
│   └── bytecode_defs.h        # Shared opcode definitions
│
├── build/                     # Build artifacts (ignored in VCS)
│
├── docs/                      # Technical documentation
│   ├── architecture.md
│   ├── bytecode_spec.md
│   ├── vm_memory_model.md
│   └── instruction_set.md
│
├── Makefile                   # Build configuration
├── README.md                  # Project overview
└── LICENSE                    # MIT License
````

---

## 🛠️ Build

Use `make` to compile the entire project:

```bash
make
```

The binary will be placed under the `build/` directory.

---

## 🧪 Run Tests

To run unit tests:

```bash
make test
```

Tests validate core components like stack behavior, instruction execution, and GC.

---

## 📦 Examples

Sample bytecode programs in `examples/`:

* `HelloWorld.myclass`: prints output
* `Fibonacci.myclass`: recursive call test
* `Benchmark.myclass`: stress test

You can write `.myasm` and convert them using the custom assembler.

---

## 📚 Documentation

Docs are available in the `docs/` folder:

* `architecture.md`: High-level VM design
* `bytecode_spec.md`: Instruction format
* `vm_memory_model.md`: Heap, stack, GC details
* `instruction_set.md`: Full opcode reference

---

## ⚙️ Tools

Tools available under `tools/`:

* `assembler`: Converts human-readable `.myasm` to `.myclass`
* `disassembler`: Dumps `.myclass` into readable text

---

## ✅ Requirements

* C compiler (GCC or Clang)
* POSIX-compliant OS (Linux/macOS preferred)
* C99 or later

---

## 📌 Disclaimer

> This VM is not production-ready and is designed **solely for educational purposes**.
> The goal is clarity, simplicity, and a deeper understanding of how real VMs work.

---

## 📄 License

This project is licensed under the [MIT License](./LICENSE).

---

## 🙏 Acknowledgments

* Inspired by the Java Virtual Machine, Lua VM, and CPython internals.
* Thanks to the open-source community for learning resources.

---

## 🧠 My Intent For this Project

This project is for anyone who wants to:

* Truly understand what happens "under the hood" of programming languages
* Build their own VM, bytecode format, or compiler someday
* Get hands-on experience in systems-level C programming

---

