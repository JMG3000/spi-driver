# spi-driver

A C-based SPI (Serial Peripheral Interface) driver.

## Development with VS Code

This repository includes a pre-configured [VS Code](https://code.visualstudio.com/) workspace.

### Prerequisites

- [VS Code](https://code.visualstudio.com/)
- GCC or compatible C compiler
- CMake 3.15+
- GDB (for debugging)

### Getting Started

1. Open the repository folder in VS Code:
   ```bash
   code .
   ```

2. When prompted, install the **recommended extensions** (or open the Extensions view and filter by `@recommended`). Key extensions:
   | Extension | Purpose |
   |-----------|---------|
   | C/C++ Extension Pack (`ms-vscode.cpptools-extension-pack`) | Full C/C++ tooling bundle (IntelliSense, debugging) |
   | CMake Tools (`ms-vscode.cmake-tools`) | CMake integration |
   | CMake (`twxs.cmake`) | CMake language support |
   | Cortex-Debug (`marus25.cortex-debug`) | Embedded/ARM debugging |

3. Configure and build using the built-in tasks (**Terminal → Run Task…**):
   | Task | Description |
   |------|-------------|
   | `Configure (CMake)` | Generate the build system (`cmake -S . -B build`) |
   | `Build` *(default)* | Compile the project (`cmake --build build`) |
   | `Clean` | Remove build artifacts |

   Or use the keyboard shortcut **`Ctrl+Shift+B`** to run the default **Build** task.

4. Debug with **`F5`** using the **Debug (GDB)** launch configuration.

### Workspace Settings

The `.vscode/settings.json` file configures:
- Format on save
- 4-space indentation
- C11 / C++17 language standards
- File associations for `.c` / `.h` files