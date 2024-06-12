# Notes C++20
### Why not make all functions inline and defined in a header file?

There are a few good reasons:

 - It can increase your compile times. When a function in a code file changes, only that code file needs to be recompiled. When an inline function in a header file changes, every code file that includes that header (either directly or via another header) needs to recompiled. On large projects, this can have a drastic impact.
 - It can lead to more naming collisions since you’ll end up with more code in a single code file.
 - **Reference:** [Inline Function - Learn Cpp](https://www.learncpp.com/cpp-tutorial/inline-functions-and-variables/)
---

