/in-memory-db
|-- src/
|   |-- main.cpp                // Main entry point
|   |-- db.cpp                  // Implementation of the in-memory database logic (insert, remove, query)
|   |-- db.h                    // Header file for the in-memory database
|   |-- snapshot.cpp            // Implementation of snapshot persistence logic
|   |-- snapshot.h              // Header file for snapshot logic
|   |-- memory_allocator.cpp    // Custom memory allocator, if applicable
|   |-- memory_allocator.h      // Header for custom memory allocator
|   |-- utilities.cpp           // Utility functions (e.g., file I/O, logging)
|   |-- utilities.h             // Header for utilities
|
|-- data/                       // Directory for storing snapshots and other persistent files
|   |-- db_snapshot.dat         // Persistent snapshot file
|
|-- build/                       // Build directory (output of compilation)
|
|-- CMakeLists.txt              // CMake file for building the project
|-- README.md                   // Documentation
