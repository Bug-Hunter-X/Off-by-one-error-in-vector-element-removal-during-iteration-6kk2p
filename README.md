# C++ Vector Removal Bug
This repository demonstrates a common off-by-one error when removing elements from a std::vector in C++ during iteration.
The `bug.cpp` file contains the erroneous code. The `bugSolution.cpp` file provides a corrected version.
The problem arises when removing an element while iterating using an index.  The standard library's `erase()` method invalidates iterators, which causes issues.
The solution uses a reverse iterator or a different approach to safely remove elements while iterating.