```markdown
# 🧠 stack vm in C

A minimal, fast, and educational **stack-based virtual machine (VM)** written entirely in **C**.  
This VM reads a custom bytecode format and executes it using a stack-oriented architecture — inspired by the JVM, but simplified for clarity, extensibility, and learning.

> ✅ Built for developers who want to understand how virtual machines work from the ground up.

---

## 📁 Project Structure

c-stack-vm/
├── include/ # Public headers
├── src/ # C source files (implementation)
├── programs/ # Sample bytecode programs
├── test/ # Unit tests (optional)
├── docs/ # VM architecture, ISA, bytecode spec
├── Makefile # Build system
└── README.md # You're here!
```

### 🔧 include/

- `vm.h` — VM lifecycle, initialization, main struct
- `stack.h` — Operand stack (push, pop, peek)
- `instructions.h` — Opcode enum, instruction metadata
- `bytecode.h` — Bytecode format + loader
- `memory.h` — (Optional) heap/global memory management
- `debug.h` — Instruction tracing, stack dump, debug output

### ⚙️ src/

- `main.c` — CLI entry point to run bytecode programs
- `vm.c` — Main fetch-decode-execute loop
- `instructions.c` — Implementations of opcodes
- `stack.c` — Stack manipulation logic
- `bytecode.c` — Parses and loads `.vmcode` bytecode
- `memory.c` — (Optional) heap memory support
- `debug.c` — Instruction dump, stack tracing, etc.

### 📦 programs/

> Run these directly on your VM for testing

- `factorial.vmcode` — Bytecode to compute factorial
- `fibonacci.vmcode` — Bytecode to compute Fibonacci series

### 🧪 test/

Unit tests for core components (stack, VM behavior)

---

## 🚀 Getting Started

### 🛠 Build the Project

```bash
make
```

This will build the VM binary and place it in the `bin/` directory.

### ▶️ Run a Bytecode Program

```bash
./bin/vm programs/factorial.vmcode
```

---

## 💡 Instruction Set

See [`docs/instruction_set.md`](docs/instruction_set.md) for the full list of opcodes and behavior.

### Example Instructions:

| Opcode     | Description             |
| ---------- | ----------------------- |
| `PUSH n`   | Push constant `n`       |
| `ADD`      | Add top two values      |
| `SUB`      | Subtract top two values |
| `MUL`      | Multiply top two values |
| `DIV`      | Divide top two values   |
| `PRINT`    | Print top of stack      |
| `JMP addr` | Unconditional jump      |
| `JZ addr`  | Jump if zero            |
| `HALT`     | Stop execution          |

---

## 📚 Documentation

- [`docs/vm_architecture.png`](docs/vm_architecture.png) — Stack VM design and flow
- [`docs/bytecode_format.md`](docs/bytecode_format.md) — Bytecode file layout
- [`docs/instruction_set.md`](docs/instruction_set.md) — Instruction Set Architecture (ISA)

---

## 🧪 Testing

Compile and run tests:

```bash
gcc -o test_vm test/test_vm.c src/*.c -Iinclude
./test_vm
```

---

## 📦 Bytecode Format

Each `.vmcode` file follows a simple format:

```
[Header]      → Magic number, version
[Instructions]→ Series of binary-encoded opcodes and operands
```

See [`docs/bytecode_format.md`](docs/bytecode_format.md) for a detailed spec.

---

## 🌟 Goals

- ✅ Simple, readable, hackable
- ✅ Under 2000 lines of high-quality C
- ✅ Zero dependencies
- ✅ Designed to be used as a backend target for custom compilers
- ✅ Easy to extend: add instructions, memory model, or tracing

---

## 🤝 Contributions

PRs and issues are welcome. Build your own language or compiler on top of this VM!

---

## 📜 License

MIT License.

---

## ✨ Credits

Inspired by the JVM, Lua VM, and various toy VMs built for education and fun.

---
