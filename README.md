# Student Record System in C 

A lightweight, terminal-based database application built in C that manages a student roster using a dynamic **Doubly Linked List** data structure. The project implements full CRUD functionality alongside optimized pointer manipulations like in-place list reversal, a custom Merge Sort engine, and automated file persistence.

## Features

- **Full Data Management (CRUD):** Easily add, look up, modify, or delete student records dynamically in memory.
- **Advanced List Operations:** - Dual-key sorting (by **Name** or **Percentage**) using an optimized **Merge Sort** algorithm.
  - In-place structural **List Reversal** without cloning node data.
- **Robust System Maintenance:** Dynamic disk persistence that automatically loads records on application boot and flushes updates safely to local files.
- **Anti-Buffering Validation:** Cleaned stdin handling loops to prevent menu skipping or trailing character input leaks.

## 🛠️ System Architecture & Data Structure

The application completely moves away from rigid arrays, leveraging a dynamic **Doubly Linked List** (`st`) instead. This allows for O(1) node insertion and seamless deletion handling without costly data shifting.

       +------+      +---------+      +---------+
NULL <-| prev |<---->|  prev   |<---->|  prev   |
       | Node |      | Student |      | Student |
       | head |----->|  next   |----->|  next   |-> NULL
       +------+      +---------+      +---------+
