# kintsugi-stack-dsa-cpp: THEORY

> "Data Structures and Algorithms (DSA) should be viewed as essential tools, akin to the finely tuned parts of a Formula 1 car. The act of problem-solving with DSA serves as a crucial platform to exhibit both intelligence and creative thinking. The coding challenges themselves are simply various permutations of external factors; like the weather, track, wind, and rain in an F1 race. Ultimately, what dictates success in both domains; coding and Formula 1; is the mastery of planning, strategizing, maintaining flow, and ensuring precise code orchestration." - Siddhant Bali

- Author: [Kintsugi-Programmer](https://github.com/kintsugi-programmer)

> Disclaimer: The content presented here is a curated blend of my personal learning journey, experiences, open-source documentation, and invaluable knowledge gained from diverse sources. I do not claim sole ownership over all the material; this is a community-driven effort to learn, share, and grow together.

## Table of Contents
- [kintsugi-stack-dsa-cpp: THEORY](#kintsugi-stack-dsa-cpp-theory)
  - [Table of Contents](#table-of-contents)
  - [About](#about)
    - [Overview](#overview)
  - [Arrays](#arrays)
    - [RAM](#ram)
    - [Static Arrays](#static-arrays)
    - [Dynamic Arrays](#dynamic-arrays)
    - [Stacks](#stacks)
  - [Linked Lists](#linked-lists)
    - [Singly Linked Lists](#singly-linked-lists)
    - [Doubly Linked Lists](#doubly-linked-lists)
    - [Queues](#queues)
  - [Recursion](#recursion)
    - [Factorial](#factorial)
    - [Fibonacci](#fibonacci)
  - [Sorting](#sorting)
    - [Insertion Sort](#insertion-sort)
    - [Merge Sort](#merge-sort)
    - [Quick Sort](#quick-sort)
    - [Bucket Sort](#bucket-sort)
  - [Binary Search](#binary-search)
    - [Search Array](#search-array)
    - [Search Range](#search-range)
  - [Tree](#tree)
    - [Binary Tree](#binary-tree)
    - [Binary Search Trees (BST)](#binary-search-trees-bst)
    - [BST Insert and Remove](#bst-insert-and-remove)
    - [DFS](#dfs)
    - [BFS](#bfs)
    - [BST Sets and Maps](#bst-sets-and-maps)
  - [Backtracking](#backtracking)
    - [Tree Maze](#tree-maze)
  - [Prompt for Notes Formatting](#prompt-for-notes-formatting)


## About

### Overview
- **Course Overview: Fundamental Data Structures and Algorithms**
    - **Primary Objectives**
        - The course covers all **fundamental data structures and algorithms** required for knowledge in the field.
        - There is a specific **focus on coding interviews**.
    - **Target Audience**
        - The content is designed for **beginners**.
        - It is also intended for **anyone who needs a refresher**.
    - **Core Areas of Study**
        - The course explores four main aspects of common data structures and algorithms:
            - **Design**: How they are conceptualized.
            - **Implementation**: How they are built.
            - **Tradeoffs**: The pros and cons of different approaches.
            - **Analysis**: How to evaluate their performance.
    - **Key Skills for Professional Success**
        - Students will learn to:
            - **Solve problems efficiently**.
            - **Analyze** problems effectively.
            - **Discuss tradeoffs** regarding different solutions.
            - **Communicate ideas** clearly to others.
    - **Value and Impact**
        - Mastering these skills can lead to a **difference of hundreds of thousands of dollars in compensation**.
        - The **problem-solving skills** learned are intended to serve a student for their **entire career**.
    - **Next Steps**
        - For further details on what the course covers, users should **scroll down**.
        - Users are encouraged to **get started** when they are ready.

## Arrays

### RAM

- **Introduction to Data Structures and RAM**
  - A **data structure** is defined as a specific way of **structuring data**.
  - In the context of computer science, this data is structured and stored inside of **RAM** (Random Access Memory).
  - RAM serves as the primary location where all **variables** are stored during the execution of code.
  - **Arrays** are the first data structure covered in this study.
  - When an array, such as one containing the values 1, 3, and 5, is used in code, that information must be stored within the RAM.

- **RAM Measurement and Binary Basics**
  - **RAM size** is measured in units called **bytes**.
  - It is common for modern computers to possess approximately **8 gigabytes** of RAM.
  - The term **"giga"** represents approximately **10 to the power of 9**, which is roughly **one billion**.
  - A single **byte** is composed of exactly **eight bits**.
  - A **bit** is a storage position for a single digit, with the restriction that the digit must be either a **0 or a 1**.
  - These zeros and ones constitute the fundamental **language of computers**.
  - Storage is hierarchical: individual bits form groups of bits, which form bytes, which collectively form RAM.
  - This RAM structure is then used to house more **advanced data structures**.

- **Representing Integers in Memory**
  - To store an integer like "1" in RAM, it must be represented in terms of bytes.
  - It is a common standard for **integers** to be represented by **four bytes** rather than a single byte.
  - Since one byte is eight bits, a four-byte integer is represented by **32 bits**.
  - To represent the integer **1** using 32 bits, the computer uses **31 zeros** followed by a single **1** at the very end.
  - Once the data is converted into this byte-based representation, it can be placed into RAM.

- **RAM Structure: Values and Addresses**
  - RAM can be visualized as a **contiguous block of data**.
  - RAM consists of two primary components: **values** and **addresses**.
  - Every value is stored at a **distinct location**, which is referred to as its **address**.
  - In technical diagrams, addresses are often distinguished from values by placing a **dollar sign ($)** in front of the address number.
  - The first address in a sequence is typically **0**.

- **Memory Properties of Arrays**
  - Arrays are considered the **most simple data structure** because they are stored in memory in the same way they are represented conceptually.
  - A defining characteristic of arrays is that they are always **contiguous**.
  - **Contiguous** means that values are stored one after another with **nothing in between** them.
  - For an array, the value 1 is stored first, followed immediately by 3, and then 5, without any gaps in the memory sequence.
  - While a programmer does not always choose the specific starting location of an array in RAM, the values will remain in a continuous block.

- **Data Sizes and Address Increments**
  - Because **32-bit integers** take up **four bytes**, the memory addresses for an integer array must **increment by four** for each new element.
  ```text
  Example Integer Array Memory Map:
  Address: $0 -> Value: 1
  Address: $4 -> Value: 3
  Address: $8 -> Value: 5
  ```
  - If the addresses were incremented by only one ($0, $1, $2) for integers, there would not be enough room, as each integer requires a full four-byte slot.
  - Other data types, such as **characters** (e.g., 'A', 'B', 'C'), have different size requirements.
  - **ASCII characters** typically take up only **one byte** of memory.
  - Consequently, the addresses for a character array increment by **one** for each element.
  ```text
  Example Character Array Memory Map:
  Address: $0 -> Value: 'A'
  Address: $1 -> Value: 'B'
  Address: $2 -> Value: 'C'
  ```
  - The general rule for storing values contiguously is that the address must increment by the **size of the value** being stored.

- **Theory vs. Practice**
  - Understanding how memory and addresses work provides the necessary **theoretical foundation** for data structures.
  - However, the primary focus of this study is **practical knowledge**.
  - This includes understanding how arrays are used in real-world scenarios, as well as their specific **properties and tradeoffs**.

Storing data in RAM is like a **long row of lockers** in a school hallway; each locker has a unique number (the address), and depending on what you are storing, you might occupy just one locker (a character) or a block of four lockers (an integer), but you always make sure your items are in a row without any empty lockers between them.

### Static Arrays

- **Static Arrays Overview**
  - **Definition and Memory Storage**
    - An array is a **contiguous block of data**.
    - In RAM, it is stored exactly this way: as one continuous block.
    - Data structures generally involve two primary operations: **reading** and **writing**.

  - **Reading Data from an Array**
    - **The Concept of Indices**
      - Programmers use variables (e.g., `my array`) to represent the allocated array.
      - To read the first element, the intuitive action is to go to the first memory address and read the value.
      - Programmers do not need to know exact memory addresses for every value because they use **indexes**.
      - **Index 0** is always the first value; it does not start at one,.
      - Subsequent values follow in order: index 1, index 2, and so on.
    - **Efficiency of Reading**
      - Any index in an array can be automatically mapped to a location in memory.
      - This allows for **instant reading** of any value as long as the index is known.
      - This operation is called **Big O of 1** (constant time).
      - Even as an array grows larger, reading a specific index happens in the same amount of time in the worst case.
    - **RAM Properties (Random Access Memory)**
      - The ability to go to an arbitrary address and read it instantly is a property of **Random Access Memory (RAM)**.
      - "Random access" means any part of the memory can be accessed in constant time without starting from the beginning and looking through it sequentially.
      - If you want the third value, you do not need to go through the first and second values first.

  - **Looping Through an Array**
    - To read every value from start to finish, a programmer starts at index 0.
    - In code, this is typically represented as `my array[i]`.
    - The process involves:
      1. Starting with index `i = 0`.
      2. Reading the value at `i`.
      3. Incrementing `i` to 1, then 2, etc..
      4. Stopping when `i` equals the **length of the array**.
    - This is usually implemented using a **for loop** or a **while loop**.

  - **The Fixed Size Property of Static Arrays**
    - **Static arrays are of fixed size**.
    - If you declare an array of three values, it remains that size.
    - **Challenges with Adding Values:**
      - If you want to add a fourth value (e.g., the number 7) to an array of size three, it must be **contiguous** to the existing data.
      - Example: If the array ends at address 11, the new value must be at address 12.
      - However, programmers cannot always decide where RAM is allocated.
      - The next spot in RAM might be:
        - Occupied by another array.
        - Used by the Operating System for another purpose.
      - If you put the new value anywhere else in memory, the array is no longer contiguous, which breaks the definition of an array.
      - If the values are not contiguous, incrementing an index (e.g., going from index 2 to 3) would not lead the computer to the correct memory spot where the value is stored.
    - **Language Differences:**
      - Languages like **Python or JavaScript** often use **dynamic arrays** as the default, so users rarely encounter these fixed-size limitations,.
      - Static arrays are the specific focus of this limitation.

  - **Writing and Removing Data**
    - **Initialization:**
      - When an array is first allocated, it might be empty but must store something.
      - Languages may initialize it to all zeros, or it may contain random, arbitrary "garbage" values.
    - **Basic Writing:**
      - Adding a value to an empty spot is an **instant operation (Big O of 1)**.
      - Because indices map directly to RAM positions, the computer knows exactly where to write the value.
    - **Removing Values:**
      - You cannot technically "delete" or deallocate a single spot in memory within a static array.
      - "Removing" a value involves **overwriting** it,.
      - Common methods include replacing the value with a 0, a -1, or another "irrelevant" marker,.
      - Overwriting/removing is a **Big O of 1** (constant time) operation because it just involves going to that specific memory position and changing it.

  - **Inserting at Arbitrary Positions (Beginning or Middle)**
    - Arrays are **ordered values**; the position matters.
    - Inserting at the end (if space is available) is efficient (O(1)).
    - Inserting in the middle or beginning is **inefficient** because the order must be preserved.
    - **Example: Inserting 4 before 5 and 6**
      - If the array has `[5, 6, _]` and you want to insert 4 at the start to get ``:
        1. You cannot just overwrite 5 with 4, or you lose the 5.
        2. You must **shift** the existing values to the right.
        3. Step 1: Move the value at index 1 (6) to index 2 (1 + 1).
        4. Step 2: Move the value at index 0 (5) to index 1 (0 + 1).
        5. Step 3: Insert the value 4 into the now-empty index 0.
    - **Complexity of Shifting:**
      - In a long array, inserting at the beginning requires moving **every single value**.
      - This is a **Big O of N** operation, where N is the number of elements (length) of the array.
      - **Worst Case Scenario:**
        - Big O notation refers to the **worst case**.
        - If you insert in the middle, you only shift the values to the right of that point.
        - If you insert at the very beginning, you shift **all N values**.
        - To generalize for the worst case, we say the time complexity is **Big O of N**.

  - **Removing from Arbitrary Positions**
    - Removing a value from the middle and wanting to "close the gap" (so the first value is the new start) requires shifting.
    - **Example: Removing the first element from ``**
      - To make 6 the new first value:
        1. Shift the value at index 1 (6) to the left to index 0 (1 - 1).
        2. Shift the value at index 2 (7) to the left to index 1 (2 - 1).
      - The result is ``. The original memory spot for 7 might still hold a value, but we treat it as non-existent or overwrite it with 0.
    - Like insertion, this is a **Big O of N** operation in the worst case because we may have to shift every subsequent value.

  - **Summary of Static Array Operations**
    - **Reading:** `O(1)` (Constant time).
    - **Writing/Overwriting (at a known index):** `O(1)` (Constant time).
    - **Inserting at the end:** `O(1)` (Assuming space is available).
    - **Removing from the end:** `O(1)`.
    - **Inserting in the middle/beginning:** `O(N)` (Worst case due to shifting).
    - **Removing from the middle/beginning:** `O(N)` (Worst case due to shifting).

  - **Coding Logic for Access and Loops**
    ```
    // To read an element at index i
    my_array[i]

    // To loop through an array
    for (i = 0; i < length; i++) {
        print(my_array[i]);
    }
    ```

### Dynamic Arrays
- DYNAMIC ARRAYS OVERVIEW
  - **Dynamic arrays** are much more common and useful than **static arrays**.
  - They solve the **fixed size problem** inherent in static arrays.
  - **Language Defaults**:
    - In **Python** and **JavaScript**, dynamic arrays are the default array type.
    - In **Java**, they are implemented as an **ArrayList**.
    - In **C++**, they are called a **Vector**.
  - **Initialization**:
    - You do not necessarily have to specify a size when creating one.
    - If no size is specified, it initializes to a **default size**.
    - Example: In Java, the default size of an ArrayList is typically 10, though this number is arbitrary.

- INTERNAL MECHANISMS AND TERMINOLOGY
  - **Capacity (Size)**: The total number of slots allocated in memory (e.g., a size of 3).
  - **Length**: The actual number of elements currently stored in the array (e.g., an empty array of size 3 has a length of 0).
  - **Pointers**:
    - The implementation maintains a **pointer** or variable that tracks the index of the **last element**.
    - Example: If the first element is at index 0 and the next is at index 1, the pointer identifies index 1 as the last element.
    - The **length** is calculated using this pointer; if the pointer is at index 1, the length is 2 (since indices start at 0).

- CORE OPERATIONS
  - **Pushing**:
    - This refers to adding an element to the **end** of the array at the next empty spot.
    - It is a **Big O(1)** time operation because the system knows exactly where the next spot is via the pointer.
  - **Popping**:
    - This refers to removing the last value from the end of the array.
    - It is a **Big O(1)** time operation because the pointer identifies the last element immediately.
    - After removing the value, the pointer shifts left by one index to mark the new end.

- THE RESIZING PROCESS (GROWING THE ARRAY)
  - **The Problem**: When the array runs out of space (e.g., capacity is 3 and you try to push a fourth element), you cannot simply allocate more memory right next to the existing array.
  - **The Solution**: The dynamic array must allocate a brand new array to contain all elements.
  - **Steps for Resizing**:
    1. **Allocation**: A new array is created in a different, random location in memory.
    2. **Capacity Doubling**: The new array's size is typically **double** the original capacity.
       - Example: An original size of 3 becomes size 6. An original size of 6 becomes size 12.
    3. **Copying**: All original values are copied from the old array to the new array starting at the beginning (index 0 to 0, index 1 to 1, etc.).
    4. **Insertion**: The new value (the one that triggered the resize) is added to the new space.
    5. **Deallocation**: The original array is **deallocated** or "freed," telling the operating system it is no longer in use so the memory can be reused.

- TIME COMPLEXITY AND AMORTIZATION
  - **Resizing Complexity**:
    - Allocating new memory takes **O(N)** time, where N is the size of the memory allocated.
    - Copying every value from the old array to the new one is also an **O(N)** operation.
  - **Amortized Time Complexity**:
    - Although a push that triggers a resize takes O(N), resizing is **infrequent**.
    - Because we double the capacity each time, most pushes are simple O(1) operations.
    - **Amortized complexity** is essentially the **average time** of an operation.
    - Pushing a value to a dynamic array has an **amortized time complexity of O(1)**.
  - **Mathematical Explanation (The Power Series)**:
    - If you push 8 elements into an array that started at size 1:
      - Total operations = 8 (last allocation/moves) + 4 + 2 + 1 = 15 operations.
    - This calculation is **dominated by the last term**.
    - The sum of all previous terms will always be less than or equal to the last term.
    - Therefore, the total operations for N elements is always **less than or equal to 2 * N**.
    - In Big O, **O(2 * N)** simplifies to **O(N)**.
    - Since it takes O(N) total time to push N elements, the average (amortized) time per push is **O(1)**.

- BIG O NOTATION AND CONSTANTS
  - **Constants are Ignored**:
    - We do not care about constants multiplied by N (like O(2 * N)) or added to N (like O(N + 8)).
    - Whether the constant is 10, 100, or 1000, it is simplified to O(N).
  - **Why Constants are Ignored**:
    - Big O focuses on **growth rates** as input sizes (N) become very large.
    - We care about how the runtime grows: is it linear (O(N)) or quadratic (O(N^2))?.
    - **Interaction of Functions**: 
      - A faster-growing function like $N^2$ will always eventually intersect and surpass a slower-growing function like $N$ or $2N$, regardless of the starting constant.
      - We ignore small input sizes (like 1, 8, or 1000) because only very large inputs significantly slow down a CPU.

- DYNAMIC ARRAY PERFORMANCE SUMMARY
  - **Accessing an Element**: **O(1)** (can access any index anywhere in constant time).
  - **Push/Pop at the End**: **O(1)** (pushing is O(1) amortized).
  - **Resizing**: Allows for growth even when initial space is full.
  - **Inserting/Removing in the Middle**: **O(N)**.
    - This is the downside of dynamic arrays.
    - You must shift every subsequent value over to make room or fill a gap.
    - There is **no amortization** for this; it is always O(N) in the worst case.

- ANALOGY
  - Imagine a dynamic array as a growing dinner party table. You start with a small table (the original capacity). When more guests arrive than there are chairs, you don't just squeeze them in; you move the entire party to a new room with a table twice as big. While the move itself (copying elements) takes a lot of effort, it happens so rarely compared to guests just sitting down (pushing elements) that on average, seating a guest is still a very quick process.

### Stacks

- **Stacks Overview**
    - A stack is a common data structure in programming that typically supports three specific operations.
    - **Core Operations**
        - **Push**: Adding an element to the end of the stack.
        - **Pop**: Removing an element from the end of the stack.
        - **Peek**: Looking at the last element in the stack to read it without removing it, unlike a pop operation.
    - **Efficiency Requirements**
        - These operations must run efficiently in **constant time**.
        - Pushing should be a constant time operation.
        - Popping should be a constant time operation.
        - Peeking at the last element should be a constant time operation.

- **Implementation with Dynamic Arrays**
    - There is no need to design a stack data structure from scratch because **dynamic arrays** satisfy all efficiency requirements.
    - A stack can be implemented using a dynamic array.
    - In standard programming, developers typically use the default dynamic array provided by the language they are using.
    - **Space Management**
        - Because stacks are implemented with dynamic arrays, users do not need to worry about running out of space.
        - The system will automatically allocate more space when needed.

- **Visual and Physical Representation**
    - **Array Representation**: A stack is essentially an array where elements are pushed onto the end.
    - **Vertical Representation**: Some visualize stacks as vertical structures where values are "thrown" into the top.
        - If the stack is empty, the first element goes to the bottom.
        - Subsequent elements are added to the "top," which is considered the "end" of the array.
    - **Tracking Elements**
        - A **pointer** or a count of the number of elements added so far is maintained.
        - This allows the system to know exactly where to push the next element into the next empty spot.

- **The Popping Mechanism**
    - Elements can only be removed from the end of the array (the top of the stack).
    - Removing from the end is an efficient process.
    - **Internal Memory Handling**
        - When an element is popped, the system does not necessarily delete that portion of memory.
        - Instead, it internally updates the marker to indicate a new "end" of the array or a new "top" of the stack.

- **LIFO (Last-In-First-Out) Principle**
    - **Definition**: Stacks are a **LIFO** data structure, meaning "Last In, First Out".
    - **The Reverse Order Property**: The order in which elements are inserted is the reverse of the order in which they are removed.
        - The last element added is the first element removed.
        - The second-to-last element inserted is the second-to-last removed if all elements are popped.
    - **Step-by-Step Example**
        - 1. Push a **1**.
        - 2. Push a **2**.
        - 3. Push a **3**.
        - 4. Pop the **3**.
        - 5. Pop the **2**.
        - 6. Pop the **1**.
    - This sequence demonstrates that the order of removal (3, 2, 1) is the reverse of the insertion order (1, 2, 3).

- **Use Cases**
    - **Reversing Sequences**: Because of the LIFO property, stacks can be used to reverse a sequence of values, such as numbers or a string of characters like "ABC".
    - **Complex Problem Solving**: Stacks are used for many other complex programming use cases and problems.

**Analogy for Understanding:**
Think of a **stack of cafeteria trays**. When you add a new tray, you place it on the very top (Push). When someone needs a tray, they take the one that was most recently placed on top (Pop). The tray at the very bottom of the stack—the first one placed there—will be the very last one to be used.

## Linked Lists

### Singly Linked Lists
- **Singly Linked Lists Overview**
    - Linked lists have significant overlap with arrays but also many differences.
    - They are comprised of **list nodes**, sometimes simply called **nodes**.

- **List Node Definition and Structure**
    - A list node is an object that encapsulates at least two specific things:
        - **Value**: This can be an integer, a character, another object, or anything else (e.g., the value 4).
        - **Next**: This is a **pointer** that indicates what the next list node in the linked list is.
    - This pointer system is the method for connecting multiple list nodes together to form a linked list.
    - If a `next` pointer points at **null**, it means it points at nothing, signifying the end of the list or a single-node list.

- **Building and Connecting a Linked List**
    - **Initialization**:
        - To build a list, you first create a list node (e.g., a node with the string value "red").
        - By default, the `next` pointer is empty or set to **null**, meaning it is not yet connected to another node.
    - **Memory Allocation**:
        - When a node object is created, it is stored somewhere in memory.
        - Programmers do not necessarily control the exact memory location.
        - Multiple nodes (e.g., "red", "blue", and "green") can be created separately in memory.
    - **Implementation of Connections**:
        - In most programming languages, the `next` pointer is implemented as a **reference** to another list node object.
        - To connect nodes in code, you set the `next` property of one node to the variable representing the next node.
        - **Example**: `ListNode1.next = ListNode2`.
    - **Low-Level Mechanics**:
        - Under the hood, the second node (e.g., "blue") is stored at a specific memory address (e.g., "xx") while the first node is at another (e.g., "y").
        - The pointer tells the system the specific address of the next node.
        - Programmers usually use references to objects and do not need to worry about manual address management.

- **Memory Layout Differences**
    - **Linked Lists**: Nodes may be stored in **random order** in memory and are only connected via pointers.
        - A "red" node can point to a "blue" node even if the blue node is stored "behind" it or elsewhere in a "big mess" in memory.
    - **Arrays**: Arrays are stored in memory in the exact same sequence as they are used by the programmer.

- **Traversing a Linked List**
    - **Goal**: Start at the beginning and loop through every node until the end is reached.
    - **Detection of End**: The end is identified when a node's pointer points to **null**.
    - **Traversal Logic and Code**:
        - A variable named `cur` (current) is initialized to the first node.
        - A `while` loop runs as long as `cur` is not pointing at **null**.
        ```
        cur = head
        while cur != null:
            cur = cur.next
        ```
    - **Step-by-Step Execution Example**:
        1. `cur` starts at the "red" node.
        2. The condition `cur != null` is true, so the loop enters.
        3. `cur` is set to `cur.next`, following the pointer to the "blue" node.
        4. The condition `cur != null` is checked again; it is still true.
        5. `cur` is set to `cur.next`, moving to the "green" node.
        6. The condition is checked; it is still true.
        7. `cur` is set to `cur.next`, which is **null** (the green node points to nothing).
        8. The condition `cur != null` becomes false; the loop terminates.

- **Complexity and Edge Cases**
    - **Infinite Loops**: If a node's `next` pointer points back to a previous node (e.g., the third node points back to the first), the program will loop forever and eventually crash.
    - **Time Complexity of Traversal**: Traversing the entire list is **O(n)**, where **n** is the size of the linked list. This is identical to array traversal.

- **Head and Tail Management**
    - It is helpful to keep track of two specific pointers:
        - **Head**: The first element of the list.
        - **Tail**: The last element of the list.
    - In a list of **size one**, both the Head and Tail pointers point to the same single node.

- **Operations: Insertion at the End**
    - **Scenario**: Adding a new node (e.g., "purple") to the end of the list.
    - **Steps**:
        1. Create the new node.
        2. Set the current `tail.next` to the new node (`tail.next = ListNode4`).
        3. Update the `tail` pointer to the new node (`tail = ListNode4` or `tail = tail.next`).
    - **Time Complexity**: This is a **constant time operation O(1)** because the tail pointer allows direct access without iterating through the list. This is the same as an array.

- **Operations: Removal of Nodes**
    - **Constant Time Removal O(1)**: Removing a node (beginning or end) is **O(1)**, provided there is a pointer to the **previous node** of the one being removed.
    - **Procedure for Middle Removal**:
        - To remove a node between "head" and a third node, set `head.next` to `head.next.next`.
        - This "chains" the fields: `head.next` refers to the second node, and `head.next.next` refers to the third node.
        - By setting the head's next pointer to the third node, the second node is bypassed.
    - **Memory Management**:
        - In languages with **garbage collection**, the system automatically frees the memory of a node once no pointers are pointing to it.
    - **Comparison to Arrays**: Linked list removal is beneficial because it does not require shifting all subsequent elements like an array does.
    - **Arbitrary Removal**: If you must find a specific element first without a pointer, removal takes **O(n)** time because you must search the list.

**Analogy for Understanding**
A singly linked list is like a **scavenger hunt**. Each location (node) contains a prize (value) and a slip of paper (pointer) telling you exactly where to find the next location. You can't jump straight to the third location unless you go to the first and second locations to get the clues. Even if the locations are scattered randomly across a city (memory), the clues keep them in a specific logical order.

### Doubly Linked Lists

- **DOUBLY LINKED LISTS**
    - **Overview and Structure**
        - A doubly linked list is a variation of a singly linked list.
        - The primary difference is the presence of two pointers, known as **double pointers**.
        - Each node contains:
            - A **next pointer** that points to the next node in the list.
            - A **previous pointer** that points to the previous node in the list.
        - **Structural Example with Three Nodes (1, 2, 3):**
            - The next pointers connect each node to the one following it.
            - The previous pointers connect each node to the one before it.
            - **Boundary Pointers:**
                - The first node has no previous node, so its previous pointer is set to **null**.
                - This null value indicates the beginning of the list.
                - The last node has its next pointer set to **null**, indicating the end of the list.
        - **Navigation Pointers:**
            - Like singly linked lists, doubly linked lists typically use a **head** pointer for the first node and a **tail** pointer for the last node.

    - **Operations: Adding a New Node to the End**
        - Adding a node to the end of a doubly linked list is very similar to doing so in a singly linked list.
        - **Example: Adding Node 4 to a list ending at Node 3:**
            - 1. Take the next pointer of the current tail (Node 3) and assign it to the new node (Node 4).
            - 2. Set the previous pointer of the new node (Node 4) to point at the current tail (Node 3) to preserve doubly linked properties.
            - 3. Shift the tail pointer to the new node (Node 4).
        - **Importance of Order:**
            - The order of operations is critical.
            - The pointers must be connected (setting the previous pointer to the current tail) **before** updating the tail pointer to the new node.
        - **Code Logic for Addition:**
            - `tail.next = newNode`
            - `newNode.prev = tail`
            - `tail = tail.next` (or `tail = newNode`)

    - **Operations: Removing the Last Node**
        - Removing the last node is easier with a doubly linked list because it allows looking backwards.
        - **Efficiency Advantage:**
            - In a singly linked list, you would have to start at the beginning and iterate forward to reach the second-to-last node.
            - In a doubly linked list, if you have a pointer to the tail, you can simply follow the previous pointer to find the preceding node.
        - **Example: Removing Node 3 from a list of three nodes:**
            - 1. Start at the tail (Node 3) and follow its previous pointer to reach the previous node (Node 2).
            - 2. Take the next pointer of Node 2 and set it to **null**.
            - 3. Update the tail pointer to point at Node 2.
        - **Post-Removal State:**
            - The list size is reduced (e.g., from three nodes to two).
            - Technically, the removed node (Node 3) might still exist in memory with its previous pointer still pointing to Node 2.
            - However, because there are no references to it from the list and the tail has been moved, it is effectively gone.
            - Depending on the programming language, **garbage collection** may delete this node automatically.
        - **Code Logic for Removal:**
            - `node2 = tail.prev`
            - `node2.next = null`
            - `tail = node2`

    - **Time Complexity Analysis**
        - **End Operations:**
            - Both inserting and removing a value at the end are **constant time operations (O(1))**.
            - These operations do not require looping through the entire list regardless of its size.
        - **Accessing Elements:**
            - Accessing an arbitrary or random element (e.g., the second, third, or seventh element) is a **linear time operation (O(n))**.
            - You cannot jump to an index; you must follow pointers from the beginning (or end) until you reach the desired element.
        - **Middle Operations:**
            - Inserting or removing from the middle is technically a **constant time operation (O(1))** once you are at the location.
            - Unlike arrays, you do not need to shift all subsequent elements; you only change the pointers to skip or include a node.
            - **The Caveat:** To perform this O(1) removal or insertion, you must first arrive at that element. Since arriving usually requires iterating from the start, the total process is typically a **linear time operation (O(n))**.

    - **Comparison: Linked Lists vs. Dynamic Arrays**
        - **Stacks:**
            - Stacks can be implemented with linked lists because they support O(1) push and pop at the end.
            - However, dynamic arrays are much more common for stacks because they offer the same efficiency for end operations while also allowing arbitrary element access.
        - **Summary Table of Complexities:**
            - **Arrays:**
                - Accessing any arbitrary index: **O(1)**.
                - Insert/Remove at end: **O(1)**.
                - Insert/Remove in middle: **O(n)** (requires shifting elements).
            - **Linked Lists (Singly or Doubly):**
                - Accessing arbitrary element: **O(n)**.
                - Insert/Remove at end: **O(1)**.
                - Insert/Remove in middle: **O(n)** (due to the need to iterate to the element first).
        - **Utility:**
            - Arrays are generally more useful for problem-solving because efficient arbitrary access is highly important.
            - Linked lists have a slight theoretical benefit for middle operations, but this is often negated by the need to iterate through the list to find the insertion/removal point.

**Analogy to Solidify Understanding**
Think of a **Singly Linked List** like a **one-way train** where each car only knows the car in front of it; if you want to find the person second-to-last, you have to walk from the engine all the way down. A **Doubly Linked List** is like a **train with walkie-talkies between every car**; every car knows who is in front *and* who is behind. If you are at the very last car (the tail) and need to unhook it, you can just talk to the car right behind you to tell it that it's now the new end of the train.

### Queues

- Queues
    - Definition and Overview
        - Queues are an important data structure that share similarities with stacks.
        - The defining characteristic of a queue is that it follows the FIFO principle, which stands for "First In First Out".
        - Under FIFO, the first element added to the queue is the first element that is removed.
        - Elements are always removed in the same order they were originally added to the queue.
    - Core Operations
        - Enqueue (NQ)
            - This operation refers to adding elements to the queue.
            - Enqueuing is similar to the "push" operation used in stacks.
            - When you enqueue an element, you add it to the end of the queue.
        - Dequeue (DQ)
            - This operation refers to removing a value from the queue.
            - Unlike a stack, dequeuing involves removing the element from the beginning of the queue rather than the end.
    - Efficiency and Time Complexity
        - A primary goal is to perform queue operations efficiently.
        - Adding an element to the end of the queue should ideally be done in constant time, O(1).
        - Removing an element from the beginning of the queue should also be done in constant time, O(1).
    - Comparison: Arrays vs. Linked Lists
        - Array Implementation
            - Constant time removal from the beginning is not possible with standard arrays.
            - If an element is removed from the beginning of an array, every other element must be shifted over to fill the gap.
            - This shifting process results in a Big O of N (O(n)) time operation.
            - While it is technically possible to build a queue with an array, the implementation is significantly more complicated.
        - Linked List Implementation
            - Linked lists can achieve O(1) constant time for both adding and removing elements.
            - Implementing a queue is much simpler using a linked list compared to an array.
    - Step-by-Step Linked List Implementation
        - Initial State
            - Start with an empty queue where the current pointer is set to null.
            - To manage the queue, two specific pointers are maintained: a head pointer and a tail pointer.
        - Adding the First Element
            - Example: Adding the value "red" to the queue.
            - Create a list node for the value.
            - Both the head and tail pointers are set to point at this initial node.
            - The current pointer is set to this node because it is the only element in the queue.
        - Adding Subsequent Elements
            - Example: Adding the value "blue" to the queue.
            - To insert the new node, take the "next" pointer of the current tail node and set it to point to the new node.
            - The head pointer remains at the first element added.
            - The tail pointer is updated to point at the newest node, which is now the end of the queue.
        - Removing Elements (Dequeue)
            - Removing from the head of the list is a simple and efficient process.
            - To dequeue, take the current pointer (the head) and set it to `current.next`.
            - By moving the pointer to the next node, the original first node is bypassed and can be treated as if it no longer exists in the list.
            - This method allows for constant time removal from the beginning.
    - Usage
        - Queues are a very commonly used data structure in computer science.

**Analogy:** Think of a queue like a line at a grocery store checkout. The first person to join the line is the first person served and the first to leave (FIFO). If the store had to shift every single person forward physically every time the person at the front left (like an array implementation), it would be very inefficient. Instead, the cashier just looks at whoever is next in line (like moving a head pointer in a linked list), which is a quick and constant process regardless of how long the line is.

## Recursion

### Factorial

- **Recursion and Factorial Fundamentals**
    - Recursion is a vital concept for data structures and algorithms that will be used throughout the course.
    - It is often difficult to understand initially, so it is introduced using **one branch recursion** through a math formula: **n factorial**.
    - **Definition of n Factorial:**
        - It is a shorthand for writing $n * (n - 1) * (n - 2)$ all the way until reaching the base number, which is 1.
        - **Example:** 5 factorial (5!) is $5 * 4 * 3 * 2 * 1$, which equals 120.
        - While recursion is useful for learning, you do not strictly need it for this calculation; a loop is often the easiest way.

- **The Logic of Recursion and Sub-problems**
    - Recursion is centered on the idea of **sub-problems**.
    - A complex problem is broken down into a slightly smaller version of the same problem.
    - **Example Logic:** 5 factorial is the same as $5 * 4!$ because 4 factorial is $(4 * 3 * 2 * 1)$.
    - **General Equation:** $n! = n * (n - 1)!$.
    - By using this equation, a big problem (n!) is reduced to a smaller sub-problem ((n - 1)!).

- **Visualizing Recursion with Decision Trees**
    - The best way to represent recursion is through a **decision tree**.
    - In the case of factorials, it is called **one branch recursion** because there is only one decision/path to follow at each step.
    - To compute 5!, the tree shows that we must first solve the sub-problem of 4! before we can multiply it by 5.

- **Recursive Implementation and Code Structure**
    - A recursive function for factorials typically takes an integer and returns an integer.
    - **The Recursive Step:**
        - This is when the function calls itself to solve the sub-problem.
        - In the code, this looks like calling the same function you are currently inside.
        - **Logic:** `return n * factorial(n - 1)`.
    - **The Base Case:**
        - This is the point where the series ends and the multiplication stops.
        - In math, **1 factorial is mapped to the constant 1**, so no further calculation is needed at that point.
        - **Math Note:** 0 factorial is also defined as 1.
        - **Importance:** Without a base case, the function would call itself infinitely, leading to increasingly negative numbers, and it would never return to compute the original result.
    - **Recursive Code Example:**
        ```python
        def factorial(n):
            # Base Case
            if n <= 1:
                return 1
            
            # Recursive Step
            return n * factorial(n - 1)
        ```
        - The `n <= 1` condition is used to handle both the base case of 1 and the zero case.

- **Step-by-Step Execution Trace (Using 5 Factorial)**
    - **1. Going Down (The Calls):**
        - Input 5: Not <= 1, so it calls `5 * factorial(4)`.
        - Input 4: Not <= 1, so it calls `4 * factorial(3)`.
        - Input 3: Not <= 1, so it calls `3 * factorial(2)`.
        - Input 2: Not <= 1, so it calls `2 * factorial(1)`.
        - Input 1: **Base Case reached**. It returns 1.
    - **2. Going Back Up (The Returns):**
        - The call for 2! receives 1, calculates $2 * 1$, and returns **2** to its parent.
        - The call for 3! receives 2, calculates $3 * 2$, and returns **6** to its parent.
        - The call for 4! receives 6, calculates $4 * 6$, and returns **24** to its parent.
        - The original call for 5! receives 24, calculates $5 * 24$, and returns the final result: **120**.

- **Complexity Analysis**
    - **Time Complexity:**
        - The complexity is **Big O of N (O(n))**, where n is the input value.
        - This is because there are n total steps or multiplications to perform.
        - This is identical to the time complexity of a standard for or while loop.
    - **Memory (Space) Complexity:**
        - The recursive solution has **Big O of N (O(n)) memory complexity**.
        - This is **worse** than a loop because each function call must be saved in memory.
        - Every function call is "put on hold" while waiting for its sub-problem to return.
        - When the code reaches the base case (1!), all n function calls are "alive" and taking up space in memory at the same time.
        - Each function call stores its own input parameter and tracking information.

- **Iterative (Non-Recursive) Solution**
    - The non-recursive approach is more memory-efficient as it typically uses a single variable.
    - **Iterative Logic:**
        - Initialize a `result` variable to 1.
        - Use a `while` loop that runs as long as `n > 1`.
        - Multiply the `result` by `n`, then decrement `n` by 1 in each iteration.
        - This calculates $n * (n-1) * (n-2)...$ until n reaches 1.
    - **Iterative Code Example:**
        ```python
        def factorial_iterative(n):
            result = 1
            while n > 1:
                result = result * n
                n = n - 1
            return result
        ```
    - This approach avoids the O(n) memory overhead of the recursive call stack.

### Fibonacci

- **TWO-BRANCH RECURSION: THE FIBONACCI EXAMPLE**
    - **General Mathematical Formula**
        - To calculate the nth Fibonacci number, the formula is: $F(n) = F(n-1) + F(n-2)$.
        - This means you take the $n-1$ Fibonacci number and the $n-2$ Fibonacci number and add them together to get the nth value.
    - **The Necessity of Base Cases**
        - Without base cases, calculating a Fibonacci number (like the fifth one) would continue forever.
        - **Defined Base Cases**:
            - The zeroth Fibonacci number is 0.
            - The first Fibonacci number is 1.
        - **Example: Calculating the Second Fibonacci Number (F(2))**:
            - Formula: $F(2) = F(2-1) + F(2-2)$.
            - This simplifies to $F(1) + F(0)$.
            - Using the base cases: $1 + 0 = 1$.
            - Therefore, the second Fibonacci number is 1.
        - **Example: Calculating the Third Fibonacci Number (F(3))**:
            - Formula: $F(3) = F(3-1) + F(3-2)$.
            - This simplifies to $F(2) + F(1)$.
            - Since $F(2) = 1$ and $F(1) = 1$, the calculation is $1 + 1$.
            - Therefore, the third Fibonacci number is 2.
    - **Recursion vs. Looping**
        - Fibonacci numbers can be calculated in a straightforward way by looping through them, which allows for calculating values as high as desired.
        - The recursive solution is actually less efficient than looping, but it is used to illustrate "two-branch recursion".
    - **The Recursive Decision Tree for F(5)**
        - A decision tree is used to visualize the recursive subproblems.
        - **Level 1**: To compute $F(5)$, the problem is broken into $F(4)$ and $F(3)$.
        - **Level 2 (Left Path)**: $F(4)$ is broken into $F(3)$ and $F(2)$.
        - **Level 2 (Right Path)**: $F(3)$ is broken into $F(2)$ and $F(1)$.
        - **Further Breakdown**:
            - $F(3)$ breaks into $F(2)$ and $F(1)$.
            - $F(2)$ breaks into $F(1)$ and $F(0)$.
        - This process continues until every branch reaches a base case ($0$ or $1$).
    - **Code Implementation and Logic**
        - **Base Case Code**:
            - Individual cases: `if n == 0: return 0` and `if n == 1: return 1`.
            - **Condensed version**: `if n <= 1: return n`.
            - This works because if $n$ is 1, it returns 1, and if $n$ is 0, it returns 0.
        - **Recursive Case Code**:
            - The function must compute the $n-1$ and $n-2$ values, add them together, and return that integer value.
            ```python
            # Representative logic based on the description
            if n <= 1:
                return n
            return recursive_fib(n - 1) + recursive_fib(n - 2)
            ```
    - **Executing the Recursive Steps for F(5)**
        - The code executes down the tree and returns values back up once base cases are hit.
        - **Calculating F(2)**: Reaches base cases $F(1)$ (returns 1) and $F(0)$ (returns 0). Adding them ($1 + 0$) returns 1.
        - **Calculating F(3)**: Uses results from $F(2)$ (which is 1) and $F(1)$ (which is 1). Adding them returns 2.
        - **Calculating F(4)**: Uses results from $F(3)$ (which is 2) and $F(2)$ (which is 1). Adding them returns 3.
        - **Calculating F(5)**: Uses results from $F(4)$ (which is 3) and $F(3)$ (which is 2). Adding them returns the final result: 5.
    - **Time Complexity Analysis**
        - **Loop Technique**: The time complexity is $O(N)$.
        - **Recursive Technique**: The complexity is much higher and requires analyzing the decision tree.
        - **Tree Height**:
            - The height of the tree (number of levels) is $n$.
            - For $F(5)$, the longest path is $5 \to 4 \to 3 \to 2 \to 1$, resulting in roughly 5 levels.
        - **Branching and Doubling**:
            - Each node generally breaks into two subproblems because there are two branches in the recursive tree.
            - Theoretically, the number of terms doubles at every level: $1 \to 2 \to 4 \to 8...$.
            - The number of values in the last level is roughly $2^n$.
        - **The Power Series and Upper Bounds**:
            - In a series where values double (1, 2, 4, 8), the series is dominated by the last term.
            - The last term ($2^n$) is greater than or equal to all previous terms combined.
            - Therefore, $2^n$ serves as an upper bound for the total number of values in the decision tree.
        - **Big O Constants**:
            - Precise values like $n+1$ or $n-1$ in the exponent do not matter in Big O notation.
            - Multiplying by a constant (like $2 \times 2^n$) also results in the same Big O complexity.
            - **Final Complexity**: The recursive solution is bounded by $O(2^n)$.

## Sorting

### Insertion Sort

- **Introduction to Sorting**
    - Sorting is a fundamental topic used frequently with various algorithms, each having specific tradeoffs.
    - It is most commonly applied to **arrays**, but can also be used for **linked lists** and other data structures.
    - The goal is typically to arrange elements in **ascending order** (increasing, e.g., 1, 2, 3) or **decreasing order** (e.g., 6, 4, 3).
    - **Example target:** Transform an unsorted array into a sorted one like.

- **Main Algorithm Idea: Subproblems**
    - The algorithm works by breaking the problem into subproblems.
    - **Step 1:** Consider the first element of the array. Any array consisting of only one value is considered sorted by default.
    - **Step 2:** Sort the first two values.
    - **Step 3:** Sort the first three values.
    - **Step 4:** Continue this process, increasing the sorted portion by one element each time, until the entire array is sorted.
    - **Implementation:** While this could be solved using recursion, it is more effectively done **iteratively** using loops.

- **The Insertion Process**
    - The name "insertion sort" comes from taking one value and inserting it into an already sorted array.
    - **Iteration start:** The loop starts at the **second element** (index 1) because the first element (the subarray of size one) is already sorted.
    - **Assumption:** At any point in the loop, every value before the current position is already in sorted order.
    - **Goal:** Determine where to put the current value relative to the sorted subarray.
    - **Comparison logic:**
        - Compare the current value to its left neighbor.
        - **If the value is larger:** It stays where it is.
        - **If the value is equal:** It also stays where it is; it will be sorted either way, whether in ascending or descending order.
        - **Important optimization:** If the current value is greater than its immediate left neighbor, it is automatically greater than all values to the left of that neighbor (since they are already sorted). No further comparisons are needed for that iteration.

- **Detailed Step-by-Step Logic**
    - **Pointers:**
        - `i`: The outer loop pointer, starting at index 1 and moving to the end of the list.
        - `j`: The inner pointer used to compare the current value to its neighbors on the left.
    - **Inner Loop Conditions:**
        - The algorithm checks if `j` is within bounds (e.g., `j >= 0`) to avoid index out of bounds errors.
        - It checks if the value at `j + 1` is less than the value at `j`.
    - **The Swap Mechanism:**
        - If the value at `j + 1` is less than the value at `j`, a swap is performed.
        - **Step A:** Place the value originally at `j + 1` into a **temporary variable**.
        - **Step B:** Move the value at `j` to the `j + 1` position.
        - **Step C:** Move the value from the temporary variable to the `j` position.
        - **Step D:** Decrement `j` by one to continue comparing the value with the next neighbor to the left.
    - **Termination:** The inner loop stops when the value is no longer smaller than its left neighbor or when `j` moves out of bounds (becomes less than zero).

- **Supported Data Types**
    - Insertion sort can be applied to any set of values as long as there is a way to compare two values.
    - **Integers:** Sorted numerically.
    - **Characters:** Sorted alphabetically (e.g., A, B, C).
    - **Strings:** Sorted the same way a dictionary sorts words (e.g., "apple" comes before "banana").

- **Stability in Sorting**
    - **Definition of Stable Sorting:** An algorithm that preserves the original relative order of equal values when there is a tie.
    - **Definition of Unstable Sorting:** There is no guarantee that the original relative order of equal values will be preserved.
    - **Example:** In an array, a stable sort ensures the first '7' remains before the second '7' in the final sorted list.
    - **Insertion Sort Stability:** Insertion sort is a **stable** algorithm.
        - During comparison, if two values are equal, the algorithm does not swap them.
        - Because ties do not trigger swaps, the original relative order is maintained.

- **Time Complexity Analysis**
    - **Best-Case Time Complexity:**
        - Occurs when the input array is **already sorted**.
        - The outer loop iterates through the list once.
        - The inner `while` loop condition is never met because every value is already greater than its left neighbor.
        - Result: **Big O(N)** (linear time).
    - **Worst-Case Time Complexity:**
        - Occurs when the input array is in **reverse order**.
        - For every value the algorithm iterates through, the inner loop must execute the maximum number of times to shift the value all the way to the left.
        - The number of operations follows a pattern like 1 + 2 + 3 + ... + (n-1).
        - **Visualizing Worst Case:**
            - If we imagine an N x N grid (N squared), the work done by insertion sort is approximately **half of N squared** (N^2 / 2).
            - In Big O notation, constants like "1/2" are ignored.
        - Result: **Big O(N^2)** (quadratic time).

- **Summary of Characteristics**
    - **Type:** Iterative sorting algorithm.
    - **Stability:** Stable.
    - **Best-Case Runtime:** O(N).
    - **Worst-Case Runtime:** O(N^2).
    - **Tradeoff:** While simple and stable, other sorting algorithms exist with better worst-case time complexities than N squared.

### Merge Sort

- Merge Sort Overview
    - Merge sort is one of the most common and efficient sorting algorithms.
    - The main idea is to take an input array and split it into two approximately equal halves.
    - These halves are then split again into smaller approximately equal halves.
    - This splitting continues until the array can no longer be split, resulting in individual elements.
    - The goal is to break the original problem of sorting the entire array into smaller subproblems.
    - Example:
        - For an array like, you cannot split it exactly in half because there is an odd number of values.
        - It is split approximately into a first half (3, 2) and a second half (4).
        - These subarrays are then treated as subproblems to be sorted.

- Divide and Conquer Technique
    - Merge sort uses a technique called "divide and conquer".
    - This means taking the original problem, dividing it into subproblems, and solving those subproblems before solving the original problem.
    - This problem naturally lends itself to recursion because of the way it splits into subproblems until it reaches a base case.
    - It is specifically a "two-branch recursion" because the array is split into two halves at each step.
    - Dividing by two at each step is what makes the algorithm efficient.

- The Base Case
    - The base case occurs when a subarray has a single element.
    - A single element is technically already a sorted array.
    - Length check:
        - The length of a subarray is calculated as: `(ending index - starting index) + 1`.
        - If the length is less than or equal to 1, it is a base case and the array is returned.
        - Example: If an element is at index 0, the calculation is `(0 - 0) + 1 = 1`.

- The Merging Process
    - Once you have two sorted arrays (even if they are single elements), you merge them back together in sorted order.
    - This merging step is why the algorithm is called "merge sort".
    - Step-by-Step Merging Example (Left Side):
        - Start with. Split into individual elements and.
        - Compare the two values: 2 is smaller than 3.
        - Place 2 in the first position and 3 in the second.
    - Two-Pointer Technique:
        - To merge two sorted halves into the original array, use two pointers.
        - One pointer starts at the beginning of the left array and another starts at the beginning of the right array.
        - Smallest values are at the beginning of each sorted array.
        - Compare the values at the pointers.
        - The smaller value is inserted into the next position of the original array.
        - Shift the pointer of the array that provided the value to the next position.
        - A third pointer is used in the output (original) array to track where to insert the next element.
    - Handling Out-of-Bounds:
        - Continue the algorithm until one pointer goes out of bounds (runs out of elements).
        - Once one array is empty, fill in all remaining elements from the non-empty array into the remaining spots of the original array.
        - Example: If the right array has 6, 7, and 8 left after the left array is exhausted, just move 6, 7, and 8 over.

- Implementation Logic
    - The function typically takes the array, a starting index (`s`), and an ending index (`e`).
    - Using indices prevents the need to create new variables for every subarray split.
    - Calculating the Middle:
        - Find the middle index (`m`) by: `(starting index + ending index) / 2`.
        - Most programming languages round this result down.
        - Example: For indices 0 and 1, `(0+1)/2 = 0.5`, which rounds down to 0.
    - Recursive Calls:
        - Call `mergeSort` for the left half: from `s` to `m`.
        - Call `mergeSort` for the right half: from `m + 1` to `e`.
        - After these calls, the two halves are expected to be sorted.
    - Final Merge Call:
        - Merge the left half (`s` to `m`) and the right half (`m + 1` to `e`).
    - Memory Management:
        - During the merge step, extra memory is required.
        - Temporary arrays (copies) of the left and right halves are created so original values are not lost during the overwrite process.

- Time Complexity Analysis
    - Depth of Recursion (Levels):
        - The number of levels is determined by how many times a number `n` can be divided by 2 until it reaches 1.
        - Algebraically: $n / 2^x = 1$, which rearranges to $n = 2^x$.
        - Solving for $x$ (the number of levels) using logarithms: $x = \log_2 n$.
        - Therefore, there are $\log n$ levels in the algorithm.
    - Work Per Level:
        - At each level, the merge step requires iterating through every element of the input array to put them back in order.
        - This results in $O(n)$ time complexity for each level.
    - Total Time Complexity:
        - Multiply the number of levels by the work per level: $\log n \times n$.
        - Overall Big O time complexity is $O(n \log n)$.
        - This is much more efficient than $O(n^2)$ algorithms like insertion sort.
        - Comparison: $n \log n$ vs $n$:
            - Decrementing a value (linear) is much slower than repeatedly dividing it by 2.
            - Example: With a value of 8, decrementing takes 8 steps to reach 1 ($8, 7, 6, 5, 4, 3, 2, 1$), while dividing by 2 takes only 3 steps ($8 \rightarrow 4 \rightarrow 2 \rightarrow 1$).

- Space Complexity
    - The memory complexity is $O(n)$.
    - This is because extra memory is needed for the temporary arrays used during the merge step, which is roughly the size of the original input array.

- Stability
    - Merge sort is a **stable** sorting algorithm.
    - A stable algorithm preserves the original order of elements when there is a tie (equal values).
    - To ensure stability in code:
        - When comparing elements from the left and right arrays during a merge, if the values are equal, choose the element from the **left** array.
        - Logic: An element in the left array appeared before the element in the right array in the original order.
        - Code condition: `if left_element <= right_element`, then insert the left element.

### Quick Sort

- **Introduction to Quicksort**
    - Quicksort is a common sorting algorithm that shares many similarities with merge sort.
    - Unlike merge sort, which splits arrays into equal halves, quicksort uses a random value called a **pivot** to partition the array.
    - For convenience, the **rightmost value** in the input array is usually selected as the pivot value.
    - The core idea is to iterate through every value before the pivot and compare them to it.
    - Values that are **less than or equal to the pivot** are moved to the **left partition**,.
    - Values that are **greater than the pivot** are moved to the **right partition**.

- **The Partitioning Process**
    - Partitioning can be performed **in place**, meaning it does not require allocating extra memory or arrays,,.
    - The process uses **two pointers**:
        - One pointer scans through the input array,.
        - A second pointer (the left pointer) tracks the position where the next value less than or equal to the pivot should be inserted,.
    - **Step-by-Step Logic**:
        - The left pointer starts at the beginning of the array (index `s`),,.
        - As the iteration pointer moves, if it finds a value less than or equal to the pivot, that value is swapped with the value at the left pointer,.
        - After such a swap, the left pointer shifts one position to the right,.
        - If the current value is greater than the pivot, the iteration pointer moves on, but the left pointer stays put,,.
        - Once the iteration reaches the pivot index, one final swap is performed between the pivot and the value at the current left pointer,.
    - **Outcome of Partitioning**:
        - The pivot value is now in its **correct sorted position**,.
        - Everything to the left of the pivot is less than or equal to it,.
        - Everything to the right of the pivot is greater than it,.
        - Note: The left and right sides are not necessarily sorted yet; they are only partitioned.

- **Walkthrough Example**
    - Input Array: `` with pivot `3`,,.
    - 1. Compare 6 to 3: 6 is not less than or equal to 3. Do nothing. Iteration pointer moves.
    - 2. Compare 2 to 3: 2 is less than or equal to 3. Swap 6 and 2. Array becomes ``. Left pointer moves to the second spot.
    - 3. Compare 4 to 3: 4 is not less than or equal to 3. Do nothing.
    - 4. Compare 1 to 3: 1 is less than or equal to 3. Swap 6 and 1. Array becomes ``. Left pointer moves to the third spot.
    - 5. Reach pivot: Swap pivot `3` with value at left pointer `4`. Array becomes ``.
    - 6. Result: Pivot `3` is in place. Left partition is ``, right partition is ``.

- **Recursion and Base Case**
    - Quicksort is a recursive algorithm.
    - After the initial partition, quicksort is called recursively on the left side and the right side,.
    - The pivot itself is excluded from these recursive calls because it is already in its final position,.
    - **Base Case**: If the length of a subarray is less than or equal to one, the array is already sorted, and the function returns.
    - The process continues until the subproblems reach individual elements, which are sorted by definition,.

- **Time Complexity**
    - **Average Case: O(n log n)**,.
        - This occurs when the pivot splits the array into roughly equal halves,.
        - Each level requires iterating through the input (O(n)), and there are log n levels,.
    - **Worst Case: O(n^2)**,.
        - This occurs when the input is already sorted (or reverse sorted) and the rightmost element is always chosen as the pivot,.
        - In this scenario, the height of the recursion tree becomes `n` because the partitions are highly unequal.
    - **Optimizations**:
        - To avoid the worst case, one can use a more sophisticated pivot selection, such as choosing the middle value among the leftmost, rightmost, and center elements.

- **Space Complexity and Stability**
    - **Space Complexity**: Quicksort is more advantageous than merge sort because it does not require extra memory for arrays; it performs swaps **in place**,.
    - **Stability**: Quicksort is generally **not stable**,.
        - It does not preserve the relative order of duplicate values.
        - **Example of Instability**:
            - If you have two "7" values (Red 7 and Yellow 7) and a pivot of 5, the partitioning process may swap them such that Yellow 7 ends up before Red 7, changing their original relative order,.

- **Code Logic for Partitioning (Python-style logic)**
    ```python
    # Logic based on the sources
    def partition(arr, s, e):
        pivot = arr[e] # Naive way: rightmost element
        left_ptr = s 
        
        for i in range(s, e):
            if arr[i] <= pivot:
                # Swap current element with left_ptr element
                temp = arr[left_ptr]
                arr[left_ptr] = arr[i]
                arr[i] = temp
                left_ptr += 1
        
        # Final swap of pivot to the correct index
        arr[e] = arr[left_ptr]
        arr[left_ptr] = pivot
        return left_ptr
    ```
   ,,.

- **Summary Comparison**
    - Better than insertion sort in general efficiency.
    - Average efficiency is comparable to merge sort (O(n log n)), but worst case is worse (O(n^2)),.
    - Most people consider it an efficient algorithm despite the theoretical O(n^2) worst case.

- **Analogy for Understanding**
    - Imagine a teacher organizing students by height. The teacher picks one student (the pivot) and tells everyone shorter to stand on the left and everyone taller to stand on the right. The pivot student then stands exactly between those two groups. The teacher then repeats this for the group on the left and the group on the right until every single student is in the correct order.

### Bucket Sort

- **BUCKET SORT OVERVIEW**
    - **Definition and Efficiency**
        - Bucket sort is a unique sorting algorithm because it can run in **big O of n** ($O(n)$) time, even in the worst-case scenario.
        - It is considered super efficient compared to other algorithms that run in $O(n \log n)$ time.
    - **The "Forbidden Technique" and Constraints**
        - Bucket sort is referred to as a "**forbidden technique**" or "forbidden jutsu" because it is very rare that you are actually able to use it.
        - It can only be used if the problem has specific constraints on the values being sorted.
        - The primary constraint is that all values must fit within a **finite range**.
        - Example constraint: If you are guaranteed the only values in the array are 0, 1, and 2, you can use bucket sort.

- **RANGE REQUIREMENTS**
    - The range of values is the difference between the minimum and maximum possible values, such as 0 and 2.
    - While standard 32-bit or 64-bit integers have a range (approximately $-2^{31}$ to $2^{31}$), this range is usually too large for bucket sort to be practical.
    - Typical ranges that qualify for bucket sort are relatively small, such as 0 to 100, 1,000, 10,000, or even 100,000.

- **THE BUCKET SORT PROCESS**
    - **Creating Buckets**
        - For every single value in the specified range, you create a "bucket".
        - The name "bucket sort" comes from this process of creating a bucket for every possible value.
        - In an example with values 0, 1, and 2, you create an array of three buckets where the indexes represent the values.
        - Values map to positions; for example, 0 maps to index 0, 1 maps to index 1, and 2 maps to index 2.
        - Mapping is not always a direct 1:1 match to the index; for instance, a value like 4 could be arbitrarily mapped to a specific spot in the count array.
    - **Phase 1: Counting Occurrences**
        - You iterate through the input array to count how many times each value appears.
        - Each bucket (index) in your counts array will store the number of times that specific value occurs in the input.
        - **Steps for counting:**
            - 1. Initialize the `counts` array with zeros for every possible value in the range.
            - 2. Use an index pointer `i` to move from the beginning to the end of the input array.
            - 3. For each value encountered, go to that value's index in the `counts` array and increment it by one.
            - 4. Example: If the first value is 2, increment `counts`. If the next is 1, increment `counts`.
        - You only need to pass through the input array **one time** to finish counting.
    - **Phase 2: Overwriting the Input Array**
        - Once counting is complete, the original input values are no longer needed.
        - Unlike other sorting algorithms, bucket sort **does not swap** values; it simply overwrites them.
        - You fill the original array in order: first all the zeros, then all the ones, then all the twos.
        - **Algorithm logic for overwriting:**
            - Use an outer loop with a variable `n` to iterate through every position in the `counts` array.
            - Use an inner loop to iterate a number of times equal to the value stored in `counts[n]`.
            - Use a third pointer `i` (starting at 0) to track where to fill the next value in the original array.
            - **Example step-by-step:**
                - If `counts` is 2, the inner loop runs twice. It puts the value 0 into `arr` and `arr`, then increments `i` each time.
                - Move to the next bucket where `n` is 1. If `counts` is 1, the inner loop runs once, placing the value 1 at `arr` and incrementing `i`.
                - Move to the next bucket where `n` is 2. If `counts` is 3, the inner loop runs three times, placing the value 2 at `arr`, `arr`, and `arr`.
        - When the outer loop pointer `n` goes out of bounds of the counts array, the sorting is finished and the array is returned.

- **COMPLEXITY ANALYSIS**
    - **Time Complexity**
        - The overall time complexity is **big O of n** ($O(n)$).
        - Although the overwriting phase uses nested loops, it is not $O(n^2)$.
        - The inner loop only executes a total of $n$ times across the entire process because the `i` pointer only moves from the beginning of the array to the end once.
        - Total time is $O(n)$ for the counting pass plus $O(n)$ for the overwriting pass, which equals $O(2n)$ and reduces to **$O(n)$** because constants are ignored.
    - **Space Complexity**
        - Bucket sort requires extra memory for the `counts` array.
        - The size of this array is determined by the **range** of values (from $m$ to $n$).
        - If the range is a fixed constant size, the extra memory is considered **big O of 1** ($O(1)$) space complexity.

- **STABILITY AND PRACTICALITY**
    - **Stability**
        - Bucket sort is **not a stable** sorting algorithm.
        - It does not care about the relative order of identical values because it overwrites them based on counts rather than moving the original elements.
        - **Making it stable:** It is technically possible to make it stable by using a **linked list** for each bucket.
        - Instead of just counting, you would add each encountered element to a linked list for that bucket, then reconstruct the array from those lists.
        - However, bucket sort is rarely used with anything other than a standard array.
    - **When to Use**
        - Use bucket sort if you are given an input where values are guaranteed to be within a specific, small range.
        - In this specific case, it is more efficient than any other sorting algorithm.
        - For general inputs without range constraints, **Merge Sort** or **Quick Sort** are preferred, with Merge Sort being more common.

- **ALGORITHM SUMMARY (PSEUDOCODE LOGIC)**
    ```text
    // Phase 1: Counting
    For each value in input_array:
        counts[value] += 1
    
    // Phase 2: Overwriting
    i = 0
    For n from 0 to counts.length:
        For j from 0 to counts[n]:
            input_array[i] = n
            i += 1
    ```
   
- **ANALOGY**
    - Bucket sort is like sorting a collection of colored tokens (red, blue, yellow) by simply counting how many of each you have. Instead of rearranging the actual tokens, you throw them away and lay out new ones in the right order based on your count: all red first, then all blue, then all yellow. You end up with a sorted line, but you don't care which specific red token was which.

## Binary Search

### Search Array

- Binary Search Overview
  - Binary search is an algorithm that is very closely related to sorting.
  - This algorithm can only run on an input that is already in some type of sorted order.
  - It is much more efficient than looking through every single value in an input.

- Intuition and Concept
  - Linear Search Comparison:
    - In a standard search, you might have to look at every single value to find what you are looking for in the worst case.
    - For example, if you were looking for the number 8 and it was at the very end of the array, you would have to look through all positions before finding it.
  - The Dictionary Example:
    - Massive lists of words are placed in alphabetical order in dictionaries.
    - If you are looking for the word "banana," you might start at the halfway point.
    - If you find words starting with "J" at the halfway point, you know "B" comes before "J".
    - Therefore, you eliminate the second half of the dictionary and only search the first half.
  - The Number Guessing Game:
    - If you need to guess a number between 1 and 100, and you are told if your guess is "too big" or "too small," the best strategy is to guess 50.
    - If 50 is "too small," the answer is between 51 and 100.
    - If 50 is "too big," the answer is between 1 and 49.
    - This approach eliminates half of the possibilities every single time, reducing the search space.
    - Guessing the halfway point is less risky because it guarantees at least half the possibilities are eliminated regardless of the feedback.

- Algorithm Requirements and Goals
  - Input Type: Binary search is most commonly run on an array.
  - Sorted Order: It is very important for the input to be in sorted order.
  - If the input is not sorted, the best possible search time is Big O of N (O(n)), where you look at every element individually.
  - Target: The value you are searching for.
  - Goal: To return the index where the target value appears.
  - Solution Not Found: If the target does not exist in the input, the algorithm usually returns -1 to indicate an invalid index.

- Algorithm Mechanics and Pointers
  - Search Space: The portion of the array currently being considered. At the start, the search space is the entire array.
  - Boundaries (Pointers):
    - Left Pointer (or Low Pointer): Initialized to index 0.
    - Right Pointer (or High Pointer): Initialized to the length of the array minus one.
  - Midpoint Calculation:
    - The middle index (m) is found by adding the two boundaries together and dividing by two.
    - Usually, this result is rounded down.
    - Example: index 0 + index 7 divided by 2 equals 3.5, which rounds down to index 3.

- The Binary Search Logic (Pseudo-code Steps)
  - 1. Initialize the Left pointer to 0 and Right pointer to length - 1.
  - 2. Start a loop that continues as long as the Left pointer is less than or equal to the Right pointer.
  - 3. Calculate the midpointer.
  - 4. Check the value at the midpointer against the target:
    - Case A: Target is greater than the value at mid.
      - The target must be to the right.
      - Set the Left pointer to mid + 1.
      - This eliminates the mid index and everything to its left.
    - Case B: Target is less than the value at mid.
      - The target must be to the left.
      - Set the Right pointer to mid - 1.
      - This eliminates the mid index and everything to its right.
    - Case C (Else): The target is equal to the value at mid.
      - The target is found.
      - Return the mid index.
  - 5. If the loop finished and the target was not found, return -1.

- Detailed Example Walkthrough: Target 5
  - Setup: A sorted array with indices 0 through 7. Target is 5.
  - Iteration 1:
    - Left is 0, Right is 7. Mid is 3 (Value at index 3 is 4).
    - 5 is greater than 4.
    - Update Left to mid + 1 (Left = 4).
  - Iteration 2:
    - Left is 4, Right is 7.
    - Mid calculation: (4 + 7) / 2 = 5.5, rounded down is 5 (Value at index 5 is 6).
    - 5 is less than 6.
    - Update Right to mid - 1 (Right = 4).
  - Iteration 3:
    - Left is 4, Right is 4. The search space is now a single value.
    - Mid calculation: (4 + 4) / 2 = 4 (Value at index 4 is 5).
    - 5 is equal to 5.
    - Return index 4.

- Example of a Failed Search: Target 9
  - If the search space reaches a single element (e.g., index 7 with value 8) and the target is 9:
    - 9 is greater than 8.
    - Left pointer is updated to mid + 1 (Left = 8).
    - Now Left (8) is greater than Right (7).
    - The search space is empty, and the loop terminates.
    - Return -1.

- Complexity Analysis
  - Time Complexity:
    - With every iteration of the loop, at least half of the search space is eliminated.
    - This continues (n -> n/2 -> n/4...) until the search space is size 1.
    - The number of times a value (n) can be divided by 2 until it equals 1 is represented by the formula: log base 2 of n.
    - Worst-case runtime: O(log n).
    - Log N is much more efficient than the O(N) required for a linear scan.
  - Memory Complexity:
    - Only a few pointers (Left, Right, Mid) are allocated.
    - No additional data structures or variable-length arrays are created.
    - Memory complexity: Big O of 1 (constant space).

***

To think of binary search simply, imagine you are looking for a specific page in a thick textbook; instead of flipping every single page from the front (Linear Search), you open it exactly to the middle. If the page you need is higher, you ignore the entire first half of the book and repeat the process with the remaining half until you land on the correct page.

### Search Range

- **Binary Search Variation: Search Range**
    - This is a variation of the standard binary search algorithm that often appears in interview problems.
    - It is based on the concept of guessing a number within a specific range, such as a range between 1 and 100.
    - **Key Differences from Original Binary Search**
        - You are not necessarily given an array of numbers in sorted order.
        - You are not searching for the index of a specific target value.
        - Instead, you are given a range of values and must find a correct value $n$ that satisfies specific conditions.
        - This is a more general case of binary search.
        - While the original case checked if $n$ was equal to a target, this version can involve much more complex requirements or computations.

- **The General Template**
    - This range-style binary search is very similar to the original algorithm template.
    - **Inputs**
        - A range of values defined by a lower bound and an upper bound.
        - Important: No array is provided for this search.
    - **Process**
        - Perform the search while the `low` value is less than or equal to the `high` value.
        - Calculate the midway point (`mid`) to eliminate half of the remaining possibilities in each step.
    - **The Helper Function: `isCorrect(n)`**
        - Because there is no explicit target, a helper function (often called a dummy function) decides if the guess is correct.
        - This function takes a single number as an input and computes whether the guess satisfies the requirements.
        - The function must determine not only if a guess is wrong but also if it was "too big" or "too small".
        - **Logic of the Helper Function (Example)**
            - If $n$ is greater than the desired value, return `1` (indicates the guess is too big).
            - If $n$ is less than the desired value, return `-1` (indicates the guess is too small).
            - If $n$ is exactly the desired value, return `0` (indicates the guess is correct).
            - This function can contain any algorithm or computation required by the specific problem.

- **Step-by-Step Example: Finding the Number 10 in a Range of 1 to 100**
    - **Initial State**
        - Range: 1 to 100.
        - Target value (hardcoded in this example): 10.
    - **Iteration 1**
        - Calculate mid: $(1 + 100) / 2 = 50$.
        - Call `isCorrect(50)`. Since 50 is greater than 10, it returns `1` (too big).
        - Update range: Set `high` to `mid - 1` ($50 - 1 = 49$).
        - Half of the possibilities are now eliminated.
    - **Iteration 2**
        - Calculate mid: $(1 + 49) / 2 = 25$.
        - Call `isCorrect(25)`. Since 25 is greater than 10, it returns `1` (too big).
        - Update range: Set `high` to `mid - 1` ($25 - 1 = 24$).
    - **Iteration 3**
        - Calculate mid: $(1 + 24) / 2 = 12$.
        - Call `isCorrect(12)`. Since 12 is greater than 10, it returns `1` (too big).
        - Update range: Set `high` to `mid - 1` ($12 - 1 = 11$).
    - **Iteration 4**
        - Calculate mid: $(1 + 11) / 2 = 6$.
        - Call `isCorrect(6)`. Since 6 is less than 10, it returns `-1` (too small).
        - Update range: Set `low` to `mid + 1` ($6 + 1 = 7$).
    - **Iteration 5**
        - Calculate mid: $(7 + 11) / 2 = 9$.
        - Call `isCorrect(9)`. Since 9 is less than 10, it returns `-1` (too small).
        - Update range: Set `low` to `mid + 1` ($9 + 1 = 10$).
    - **Iteration 6**
        - Calculate mid: $(10 + 11) / 2 = 10.5$, which rounds down to 10.
        - Call `isCorrect(10)`. Since 10 is the target, it returns `0` (correct).
    - **Final Result**
        - The algorithm returns the value 10.
        - The goal was to find the correct value, not an index.

- **Algorithm Complexity**
    - **Time Complexity**
        - The Big O time complexity remains **$O(\log n)$**.
    - **Definition of $n$**
        - In original binary search, $n$ represented the size of the array.
        - In range-style binary search, $n$ represents the size of the range of values (e.g., if the range is 1 to 100, $n$ is 100).

- **Conclusion**
    - This method allows the core binary search template to be extended to various types of problems by searching a space of values rather than a physical data structure.

## Tree

### Binary Tree

- Binary Trees Overview
    - General Complexity and Relationship to Other Structures
        - Binary trees are considered the most complicated data structure covered so far.
        - Understanding them requires using almost every topic previously covered in the course.
        - They are similar to linked lists because they utilize nodes containing specific values.
        - These values can be anything: integers, characters, strings, or objects.
    - Basic Structure
        - A node contains a value (for example, the integer 2).
        - Nodes use pointers to connect to each other.
        - As the name "binary" implies, each node has two pointers.
        - While linked lists use "next" and "previous" pointers, binary trees use "left" and "right" pointers.
        - Conventionally, these pointers are drawn pointing downwards to show relationships.
    - Tree Relationships
        - Parent and Child Relationships
            - If a pointer connects one node to another node below it, the lower node is called the child.
            - The node from which the pointer originates is considered the parent node.
            - A parent can have a left child and a right child.
            - Example: If a node with the value 2 points to a node with the value 1 on the left, the node with 1 is the left child of the node with 2.
        - Sibling Relationships
            - Nodes that share the same parent are considered sibling nodes.
            - Example: If a parent node has both a left child (value 1) and a right child (value 3), those two children are siblings.
        - Ancestors and Descendants
            - A descendant is any child or any node that exists beneath a specific node in the tree.
            - For the root node, every other node in the tree is considered a descendant.
            - An ancestor is any node in the parent chain above a specific node, such as its parent or grandparent.
            - The root node has no ancestors because it has no parents.
    - Key Terminology
        - Root Node
            - The single node at the very top of the binary tree is called the root node.
            - Every tree is guaranteed to have exactly one root node.
        - Leaf Nodes
            - Nodes that do not have any children (neither a left nor a right child) are called leaf nodes.
            - Their pointers point to a default value of null.
            - Every binary tree is guaranteed to have at least some leaf nodes.
        - Visualization
            - Computers draw trees "upside down" compared to nature.
            - In nature, roots are at the bottom and leaves are at the top; in computer science, the root is at the top and leaves are at the bottom.
    - Rules of Binary Trees
        - No Cycles
            - A binary tree is not allowed to have cycles.
            - You cannot have a pointer from a leaf node point back up to the root node.
            - You cannot connect two adjacent (sibling) nodes together, as this would form a cycle.
            - Even if the pointers were undirected (allowing movement in both directions), there should be no cycles in the graph.
        - Connectivity
            - All nodes in a binary tree must be connected together.
            - You cannot have a "floating" node that is not connected to the rest of the cohesive binary tree.
    - Measuring Nodes: Height and Depth
        - Height of a Node
            - Height is measured by finding the longest path from a specific node down to its lowest descendant.
            - It is calculated by counting the number of nodes in that longest path.
            - Example: A single leaf node has a height of 1.
            - Example: If a node has a descendant, and the path from that node to the descendant contains two nodes, the height is 2.
            - Example: If a node has a left path of three nodes and a right path of two nodes, the height of that node is 3 because 3 is the longest path.
            - Note: Some textbooks measure the height of a single node as 0 instead of 1.
        - Depth of a Node
            - Depth is measured as the path from a specific node up to the root node.
            - Measurement Method 1 (Node Count): Count the number of nodes in the path to the root.
                - The depth of the root node is 1.
                - The depth of a child of the root is 2.
                - The depth of a grandchild is 3.
            - Measurement Method 2 (Pointer Count): Some people count the pointers (edges) connecting the nodes instead.
                - In this case, the depth of the root node would be 0.
    - Programming Implementation
        - General Structure
            - A tree node is similar to a linked list node.
            - It contains a value property (e.g., an integer) and two pointers for the children.
        - Code Logic
            - When creating a tree node, you initialize the value.
            - The left and right pointers are initially set to null.
            - To add a child, you reassign the null pointer to a new child tree node.
        - Example Structure:
            ```
            class TreeNode {
                int value;
                TreeNode left;
                TreeNode right;

                TreeNode(int val) {
                    this.value = val;
                    this.left = null;
                    this.right = null;
                }
            }
            ```
            - To connect nodes: The root node's left pointer is assigned to the left child node, and its right pointer is assigned to the right child node.

### Binary Search Trees (BST)

- **Core Concept and Sorted Property**
    - Binary search trees, or BSTs for short, are a special type of binary tree that possess a certain sorted property.
    - While they are not literally sorted in the same way an array is, their property allows them to be used in a manner similar to a sorted array, specifically for binary search algorithms.
    - The guarantee of a BST is that for every single node in the tree, every node in the left subtree must have a value less than the root value.
    - Conversely, every single node in the right subtree must have a value greater than the root value.
    - This rule applies to subtrees, which are smaller sections of the entire BST structure.

- **Handling Duplicates and Structure Validation**
    - Generally speaking, binary search trees do not contain duplicate values, so the left and right subtrees contain values strictly less than or strictly greater than the root, respectively.
    - To determine if a structure is a valid BST, every node must be checked against these rules.
    - For example, if a tree has a root of 2, a right child of 3, and a left child of 1, it is valid because 1 < 2 and 3 > 2.
    - However, if that same tree had a node with the value 4 in the left subtree, it would be invalid because 4 is not less than 2.
    - In such a case, the 4 would need to be moved to the right subtree to satisfy the BST requirements.

- **The Recursive Definition**
    - The definition of a binary search tree is recursive, meaning the sorted property must be true for every single node in the tree, not just the root.
    - The property applies to the entire tree as well as every individual subtree.
    - From the perspective of any specific node, that node acts as its own tree; even though it has a parent, it must maintain the same sorted properties as any other BST.
    - For example, if a node has a value of 3, any value in its left subtree must be less than 3, and any value in its right subtree must be greater than 3.
    - If a value like 4 is placed in the left subtree of the node 3, it violates the recursive property because 4 is not less than 3.

- **Searching in a BST**
    - The sorted property allows for efficient searching, achieving the same benefits as a sorted array.
    - In an unsorted structure, finding a target requires looking at every individual element, resulting in $O(n)$ time complexity.
    - With a BST, searching can be done in $\log n$ time because the sorted property allows the algorithm to follow the same logic as a binary search.
    - **Step-by-Step Search Example (Target: 5)**
        - 1. Start at the root node (e.g., value 2).
        - 2. Compare the target (5) to the root (2).
        - 3. Since 5 is greater than 2, the search eliminates the root and the entire left subtree.
        - 4. Move to the right child (e.g., value 3).
        - 5. Compare the target (5) to the current node (3).
        - 6. Since 5 is greater than 3, eliminate any left children and move to the right child (e.g., value 4).
        - 7. Compare the target (5) to the current node (4).
        - 8. Since 5 is greater than 4, move to the right.
        - 9. If the next node is null, the search is complete, and the target was not found.
        - 10. The algorithm would return false if the target is not found and true if it is located.

- **Search Algorithm Implementation**
    - Because binary trees are recursive, a recursive algorithm is the easiest and most common way to traverse and search them.
    - Although recursion is not strictly required, it is preferred due to the tree's structure.
    - Searching a BST is considered "one branch recursion" because, at each node, a comparison is made and the algorithm only proceeds in one direction (left or right).
    - There is no need to explore both branches, which is what makes the search efficient.
    - **Recursive Logic Steps:**
        - The search function accepts the root of a binary tree and a target value.
        - **Base Case:** If the current node is null, return false because the search has run out of nodes without finding the target.
        - **Comparison 1:** Check if the target is greater than the current node's value; if so, recursively call the search function on the right child.
        - **Comparison 2:** Check if the target is less than the current node's value; if so, recursively call the search function on the left child.
        - **Comparison 3:** If the target is neither greater nor less than the current value, it must be equal; return true.
        - The result (true or false) is then returned back up through the parent recursive calls until the original call is resolved.

- **Time Complexity and Balance**
    - The time complexity for searching a BST is $\log n$, similar to binary search.
    - This efficiency depends on the assumption that every comparison eliminates roughly half of the remaining possibilities.
    - However, the search is only $\log n$ if the tree is "roughly balanced".
    - **Defining a Balanced Tree:**
        - A tree is balanced if, for every single subtree (including the root), the heights of the left and right subtrees differ by no more than one.
        - For example, if a root has a left subtree of height 1 and a right subtree of height 2, it is balanced because the difference is one.
        - If a leaf node has subtrees of height 0 and 0, the difference is zero, and it is balanced.
    - **Unbalanced Trees:**
        - A tree might not be balanced; for instance, it could be a long string of nodes resembling a linked list.
        - In an unbalanced tree, you cannot go "halfway" between nodes, and the search may not eliminate half the possibilities with each step.
        - In the worst case, the time complexity for an unbalanced BST is Big $O(n)$.
    - **General Complexity:**
        - Technically, the time complexity of a search is Big $O(h)$, where $h$ is the height of the tree.
        - For an imbalanced tree, $h$ equals $n$.
        - For a balanced tree, $h$ equals $\log n$ because the structure is multiplied by two at every level.

- **BST vs. Sorted Arrays**
    - A common question is why one should use a BST when a sorted array already allows for $\log n$ searches.
    - The primary downside of sorted arrays is the cost of adding or removing values while maintaining the sorted property.
    - In an array, removing or adding a value requires shifting all subsequent values, which takes $O(n)$ time.
    - In a binary search tree, both inserting and deleting values can be achieved in $\log n$ time.
    - This ability to perform insertions and deletions efficiently while maintaining search speed is the main benefit of using a binary search tree.

- **Summary Analogy**
    - Searching a balanced BST is like using a directory where every choice you make immediately throws away half of the remaining pages you don't need to look at. However, if the tree is unbalanced, it is like a directory where every page just tells you to look at the very next page, forcing you to read the whole book one page at many times until you find what you need.

### BST Insert and Remove

- **Binary Search Tree (BST) Operations: Insert and Remove**

- **Overview of BST Benefits**
    - The primary benefit of binary search trees over sorted arrays is the efficiency of operations.
    - We can insert and remove nodes in O(log n) time, provided the tree is roughly balanced.
    - In a balanced tree, the height is approximately equal to log n.

- **BST Insertion**
    - **General Strategy**
        - Inserting a node involves traversing the height of the tree.
        - The goal is to find the correct position to insert the node.
        - While there can be multiple valid BST configurations after an insertion, the preferred method is to insert the node as a **leaf node** because it is easier to implement.
        - Advanced data structures, like the **AVL tree**, can implement balanced binary search trees where insert and remove operations automatically result in a balanced tree.
    - **The Insertion Process**
        - Start at the root node.
        - Traverse the tree using the same logic as a search operation.
        - Compare the value to be inserted with the current node's value:
            - If the value is **greater** than the current node, move to the **right subtree**.
            - If the value is **less** than the current node, move to the **left subtree**.
        - Typically, duplicate values do not exist in a BST; if a value already exists, another one is not inserted.
    - **Step-by-Step Examples**
        - **Inserting 6 into a tree with root 4**:
            - Start at the root (4).
            - 6 is greater than 4, so move down to the right.
            - If the right child is null, create a new node with the value 6.
            - The parent node (4) reassigns its right pointer to the newly returned node (6).
        - **Inserting 5 into the same tree**:
            - Start at the root (4). 5 is greater than 4, go right to node 6.
            - 5 is less than 6, so go to the left subtree.
            - The left child of 6 is null, so create a node with value 5.
            - Node 6 assigns its left pointer to node 5.
        - **Inserting 2 into the same tree**:
            - Start at the root (4). 2 is not greater than 4, it is less than 4.
            - Call insert on the left subtree.
            - If the left child is null (base case), create node 2 and return it.
            - Node 4 assigns its left pointer to node 2.
    - **Recursive Implementation and Logic**
        - The function is passed a node (root) and a value.
        - **Base Case**: If the current node is **null**, create the new node and return it.
        - If not at the base case:
            - If the value is greater than the root value, call `insert` on the right subtree and assign the result back to the root's right pointer.
            - Once the insertion is done, the function returns the current node (root) up to its parent to maintain connections.
            - Only one branch (if/else if) executes per recursive call.
    - **Time Complexity of Insert**
        - The complexity is O(height of the tree).
        - Because the process only visits one node per level (either going left or right, never both), it is the same as searching.
        - In a balanced tree, this is **O(log n)**.

- **Finding the Minimum Value**
    - **Purpose**
        - Finding the minimum is required for the `remove` function.
    - **Logic**
        - In a BST, the smallest element is located all the way to the **left**.
        - Because all values less than a node are in its left subtree, traversing left repeatedly leads to the minimum.
    - **Implementation**
        - Assign a pointer to the starting node.
        - While the pointer is not null and the left child is not null, move the pointer to the left child.
        - Once the left pointer is null, the current node is the minimum; return this node.
        - This is not necessarily recursive; it can be done with a simple loop, similar to traversing a linked list.

- **BST Removal**
    - **Overview**
        - Removing a node is more complicated than inserting.
        - The process begins by searching for the node with the target value.
    - **Case 1: Zero or One Child (Simple Case)**
        - This applies if the node to be removed has no children or just a single child.
        - **Zero children**: If a node is a leaf, the function returns `null` to the parent, effectively disconnecting the node.
        - **One child**: If the node has one child, the function returns that child to the parent. The parent's pointer then bypasses the removed node and points directly to the child.
        - Example: Removing node 3 (which has child 2) from parent 4:
            - 3 is less than 4, so we find 3. 3 has node 2 on the left and null on the right.
            - Since the right pointer is null, return the left child (2) to node 4.
            - Node 4's left pointer now points directly to node 2.
    - **Case 2: Two Children (Difficult Case)**
        - This applies when the node to be removed has both a left and a right child.
        - Removing such a node directly would disconnect its descendants.
        - **Resolution Strategy**:
            - Replace the target node's value with a value from one of its descendants to maintain the BST property.
            - The best values to use for replacement are either the **minimum value from the right subtree** or the **maximum value from the left subtree**.
        - **Steps using the Right Subtree Minimum**:
            - 1. Find the minimum node in the right subtree.
            - 2. Change the value of the node-to-be-removed to the value of that minimum node.
            - 3. Recursively call the `remove` function on the right subtree to delete the original minimum node.
        - **Logic for Validity**:
            - The minimum value from the right subtree is guaranteed to be greater than all nodes in the left subtree (because it came from the right) and less than or equal to all other nodes in the right subtree.
            - The node being recursively removed (the former minimum) is guaranteed to have **at most one child** (a right child), because if it had a left child, it wouldn't be the minimum. This ensures the recursive call hits Case 1.
    - **Example: Removing the Root (4) with children 3 and 6**
        - Node 4 has two children. Find the minimum of the right subtree (e.g., node 5).
        - Update node 4's value to 5.
        - Call `remove(right_subtree, 5)`.
        - Node 5 in the right subtree is found; since it has no left child, its right child (even if null) is returned to its parent (node 6).
        - Node 4 is now effectively node 5, and the original node 5 is gone.
    - **Time Complexity of Remove**
        - In the worst case, we traverse the height of the tree twice: once to find the node and its minimum replacement, and once to perform the final removal of the replacement node.
        - Since 2 is a constant, the complexity remains **O(log n)** for a balanced tree.
        - This O(log n) performance for both insertion and removal is the key advantage of BSTs over sorted arrays.

- **Code Logic Summary for Remove**
    - ```python
      # Logic for removal branching
      if value > root.val:
          root.right = remove(root.right, value)
      elif value < root.val:
          root.left = remove(root.left, value)
      else:
          # Node found
          if not root.left:
              return root.right # Covers 0 or 1 child (right)
          elif not root.right:
              return root.left # Covers 1 child (left)
          else:
              # Case with 2 children
              min_node = findMin(root.right)
              root.val = min_node.val
              root.right = remove(root.right, min_node.val)
      return root
      ```
     

***

**Analogy for BST Insertion:**
Think of inserting a new book into a library organized by a specific system. You start at the main entrance (the root) and look at a sign. If your book's category is "higher" than the sign, you go to the right wing; if "lower," you go to the left. You keep following signs at every junction until you find an empty spot on a shelf (a null leaf position) where the book fits perfectly while keeping the whole library in order.

### DFS

- **Introduction to Tree Traversal**
    - **Goal of Traversal**
        - With a sorted array, iterating left to right is simple.
        - We want to achieve the same with a Binary Search Tree (BST): iterate through all values in sorted order.
        - This process is not as simple as an array, but the logic remains going "left to right".
    - **Inorder Traversal Concept**
        - Traversing the tree in sorted order is called "Inorder Traversal".
        - **Recursive Definition**:
            - Start at the root.
            - Smallest values are known to be in the left subtree.
            - Process the entire left subtree first.
            - Process the current value.
            - Process the right subtree (where values are greater).

- **Detailed Step-by-Step Traversal Example**
    - **Scenario**: A tree with root 4, left child 3, left-left child 2.
    - **Execution Trace**:
        - Start at Root (4). Go to left subtree (3).
        - At Node (3), go to left subtree (2).
        - At Node (2), try to go left. It is null (no values less than 2).
        - **Print Node (2)**: This is the first value processed.
        - Check right subtree of (2). It is null. Return to parent (3).
        - **Print Node (3)**: We returned from its left subtree, so now we process 3.
        - Check right subtree of (3). It is null. Return to parent (4).
        - **Print Node (4)**: We returned from its entire left subtree, so now we process 4.
        - Check right subtree of (4). It exists (Node 6). Proceed to 6.
    - **Continuing down the Right Subtree (Node 6)**:
        - Before printing 6, go to its left subtree (Node 5).
        - At Node (5), left is null (base case).
        - **Print Node (5)**.
        - Right of 5 is null (base case). Return to parent (6).
        - **Print Node (6)**: Left side of 6 is done.
        - Go to right subtree of 6 (Node 7).
        - Left of 7 is null. **Print Node (7)**. Right of 7 is null.
    - **Observation**:
        - For every node, the order was: Left -> Current Node -> Right.
        - This mimics going through an array in sorted order using pointers and recursion.

- **Inorder Traversal Implementation**
    - **Code Structure**:
        - It is a recursive function taking a `root` node.
        - **Base Case**: If the current node is `null`, return (nothing to traverse).
        - **Recursive Step 1**: Call function on `node.left`.
        - **Operation**: Print/Process `node.val`.
        - **Recursive Step 2**: Call function on `node.right`.
    - **Time Complexity**:
        - In the worst case (and pretty much every case), we must visit every single node once.
        - Time Complexity: **O(N)**, where N is the size of the tree.
        - This is equivalent to traversing a sorted array; it cannot be less than O(N).

- **Tree Sort (Sorting with BST)**
    - **Concept**:
        - If given random values in an arbitrary order, they can be sorted using a BST.
        - First, build the BST by inserting each value. Then, perform inorder traversal to get a sorted array.
    - **Time Complexity Analysis**:
        - **Building the Tree**:
            - Inserting one value into a balanced BST is O(log N).
            - Doing this for N values is **O(N * log N)**.
        - **Traversing the Tree**:
            - Inorder traversal takes **O(N)**.
        - **Total Complexity**:
            - Equation: O(N log N + N).
            - As N becomes large, N log N grows faster than N.
            - We drop the smaller term. The time complexity is dominated by **O(N log N)**.
    - **Comparison**:
        - This performance is similar to Merge Sort and Quick Sort.

- **Types of Tree Traversals (Depth First Search Variants)**
    - **1. Inorder Traversal** (Discussed above)
        - Order: Left -> Root -> Right.
        - Use: Getting values in sorted order.
    - **2. Pre-order Traversal**
        - **Definition**: Visit the root node *before* visiting its children recursively.
        - **Order**: Root -> Left Subtree -> Right Subtree.
        - **Implementation**: Swap the print line to the top, before the recursive calls.
            ```text
            function preorder(node):
                if node is null return
                print node.val        <-- Happened first
                preorder(node.left)
                preorder(node.right)
            ```
    - **3. Post-order Traversal**
        - **Definition**: Visit the children (left and right) *before* visiting the root node.
        - **Order**: Left Subtree -> Right Subtree -> Root.
        - **Implementation**: Swap the print line to the bottom, after the recursive calls.
            ```text
            function postorder(node):
                if node is null return
                postorder(node.left)
                postorder(node.right)
                print node.val        <-- Happened last
            ```
    - **4. Reverse Order Traversal**
        - **Goal**: Iterate values from largest to smallest (e.g., 7, 6, 5, 4...).
        - **Order**: Right Subtree -> Root -> Left Subtree.
        - **Implementation**:
            - Recursively do the right subtree first.
            - Print the value.
            - Recursively do the left subtree.

- **Depth First Search (DFS)**
    - **Definition**:
        - Inorder, Pre-order, and Post-order are all examples of **Depth First Search (DFS)**.
        - As the name implies, the search goes "depth first".
    - **Mechanism**:
        - Start at a node and go as deep as possible in one direction before backing up.
        - Example: Go to the left child, then that node's left child, all the way to the bottom (leaf) first.
        - You do not process a layer at a time; you plunge to the bottom of a specific branch immediately.
        - This behavior applies regardless of whether you process the node before (pre) or after (post) the children.
    - **Time Complexity**:
        - For all DFS traversals (Inorder, Pre, Post, Reverse), the complexity is **O(N)**.

- **Breadth First Search (BFS) Preview**
    - **Concept**:
        - The opposite of DFS is Breadth First Search (BFS).
    - **Mechanism**:
        - Traverses layer by layer.
        - Example: Visit the root (layer 1), then all direct children (layer 2), then all grandchildren (layer 3).
        - It does not reach the bottom immediately like DFS.

### BFS

- **Introduction to Breadth-First Search (BFS)**
    - BFS is an algorithm used to traverse trees layer by layer.
    - It can be applied to any tree, regardless of whether it has the sorted property of a binary search tree or not.
    - **Core Concept**:
        - Traverse the closest nodes first, then the next layer of closest nodes, and continue this pattern.
        - This is the opposite of Depth-First Search (DFS), which goes all the way to the bottom before traversing other nodes.
    - **Direction**:
        - Typically, BFS goes from left to right, though this is not strictly necessary.
        - For trees, left to right is the standard approach.
    - **Alternative Name**:
        - BFS is also called "Level Order Traversal" because it processes the tree level by level.

- **Traversal Logic and Challenges**
    - **Example Walkthrough**:
        - If traversing a tree with root 4, left child 3, and right child 6:
            - First, print the root: 4.
            - Move to the next layer and traverse left to right: print 3, then print 6.
        - After printing 6, the algorithm must determine how to reach the children of the previous layer (nodes 2, 5, and 7).
    - **Implementation Strategy**:
        - BFS does not suit recursion well because you do not recursively traverse one branch fully before moving to the next.
        - It requires an **iterative** approach.
    - **Process**:
        - Process a node (e.g., 4).
        - Process all children of that node from left to right (e.g., 3 and 6).
        - Process all children of those nodes (e.g., children of 3, then children of 6).

- **Data Structure Requirement**
    - As nodes are processed, their children must be stored to be processed later.
    - **The Queue**:
        - The required data structure is a **Queue** (First In, First Out).
        - When a node is processed, its children are added to the queue in left-to-right order.
        - Example: After processing 4, add 3 and 6 to the queue.
        - Since 3 was added first, it is processed first, ensuring the current level finishes before the next begins.
    - **Storage**:
        - It is important to store the actual **node** in the queue, not just the value.
        - Storing the node preserves the pointers to the left and right children, which are needed for traversal.

- **Algorithm Implementation (Python)**
    - **Setup**:
        - Use a double-ended queue (called a `deque` in Python).
        - Initialize the queue with the root node.
            - If the tree is empty, nothing is added.
    - **Level Tracking (Optional but Useful)**:
        - It is possible to count levels (Level 0, Level 1, etc.) while printing.
        - This adds a few extra lines of code but makes the output clearer.
    - **The Code Structure**:
        ```python
        # Conceptual Python Code based on description
        queue = deque([root])
        level = 0
        while len(queue) > 0:
            print("Level:", level)
            for i in range(len(queue)):
                curr = queue.popleft()
                print(curr.val)
                if curr.left:
                    queue.append(curr.left)
                if curr.right:
                    queue.append(curr.right)
            level += 1
        ```
    - **Step-by-Step Code Execution**:
        - **Outer Loop**: Runs as long as the length of the queue is greater than zero.
        - **Inner Loop**:
            - Takes a "snapshot" of the queue length at the start of the level.
            - Example: If the queue has length 1 (root), the loop runs once.
            - This ensures we only process nodes belonging to the current level before moving to children added during this step.
        - **Operations inside Inner Loop**:
            - **Pop**: Remove element from the left (opposite side of push) to maintain FIFO.
            - **Print**: Output the value of the node.
            - **Add Children**:
                - Check if the left child is non-null. If yes, add to queue.
                - Check if the right child is non-null. If yes, add to queue.
                - Important: Add left before right to maintain left-to-right traversal order.
        - **Level Increment**: After the inner loop finishes (level processed), increment the level counter.

- **Detailed Trace Example**
    - **Tree Structure**: Root (4) -> Children (3, 6) -> Grandchildren (2 from node 3; 5, 7 from node 6).
    - **Initialization**: Queue contains.
    - **Level 0**:
        - Queue length is 1.
        - Pop 4, print it.
        - Add Left (3) to queue.
        - Add Right (6) to queue.
        - Inner loop finishes. Level increments.
    - **Level 1**:
        - Queue contains. Length is 2.
        - **Process 3**:
            - Pop 3 (leftmost).
            - Add Left child (2) to queue.
            - Right child is null (do nothing).
        - **Process 6**:
            - Pop 6.
            - Add Left child (5) to queue.
            - Add Right child (7) to queue.
        - Queue now looks like (children of the previous level).
    - **Level 2**:
        - **Process 2**: Pop 2. No children to add.
        - **Process 5**: Pop 5. No children to add.
        - **Process 7**: Pop 7. No children to add.
    - **Termination**:
        - Queue is empty. Length is not greater than zero. Algorithm stops.

- **Time Complexity Analysis**
    - **Confusion regarding Nested Loops**:
        - Seeing a `for` loop inside a `while` loop often leads people to assume the complexity is $O(n^2)$, but this is incorrect for BFS.
    - **Actual Complexity**: **$O(n)$**.
    - **Reasoning**:
        - Every node is traversed exactly once.
        - For each node, a constant number of operations are performed:
            1.  Printing the node.
            2.  Appending the node to the queue.
            3.  Popping the node from the queue.
        - The total operations equal some constant $C$ times $N$ (number of nodes), which reduces to $O(n)$.
        - The complexity is determined by the size of the data structure (number of nodes).

- **Summary**
    - BFS is likely the second most common tree algorithm after DFS (or potentially the most common).
    - It is a fundamental algorithm that will appear again in future contexts.

### BST Sets and Maps

- **Sets and Maps Overview**
    - Sets and maps are data structures that are commonly implemented using binary search trees.
    - **Sets**
        - A set is essentially a collection of values, for example, 1, 2, 3.
        - While it is similar to having an array, the word "set" usually implies that there is a different underlying data structure being used rather than an array.
        - One implementation of a set could be a binary search tree.
            - If you have values 1, 2, 3 in a binary search tree, the structure would look different than an array.
        - The advantage of implementing a set with a binary search tree instead of an array is that you can search for values, insert values, and remove values in $O(\log n)$ time.
    - **Maps**
        - **Concept and Example**
            - To understand why maps are important, consider the example of a phone book sorted in alphabetical order from A to Z based on the name of the person,.
            - Although phone books are not used much anymore, they serve as a good example.
            - A phone book contains a list of names, such as Alice, Brad, and Colin.
            - These names are listed in alphabetical order.
            - The important detail is that we do not just care about the name itself; every name is mapped to something else.
            - This mapping is where the word "map" comes from.
            - In this example, every name is mapped to a phone number.
                - Alice might map to 1 2 3.
                - Brad might map to 4 5 6.
                - Colin maps to something else.
        - **Key-Value Pairings**
            - The goal is to store information while sorting by the name.
            - For every name, we want to possess other information.
            - This is called a key-value pairing.
            - You map a key to a value, and the data structure is typically sorted by the key.

- **Internal Structure and Nodes**
    - **Difference between Sets and Maps**
        - In the simple case of a set using a binary tree, the nodes just have key values.
        - When using a map, each node has a key, which decides how to structure the binary tree for sorting.
        - However, each node in a map also has an associated value.
    - **The Value Component**
        - In the phone book example, the value would be the phone number.
        - The value can also be its own object if desired.
        - It can contain multiple values or all information about a person, such as their phone number, social security number, and email.
    - **Efficiency**
        - The structure is sorted by the key.
        - Searching for someone in the phone book is efficient because we search by the names.
        - We can search in logarithmic time because the data is sorted by name.
        - Once the name (key) is found, we have access to all the information about the person (the value).

- **Implementation and Interfaces**
    - **Underlying Data Structures**
        - Sets and maps can be implemented using binary search trees.
        - The binary search tree acts as the underlying data structure.
        - This is similar to stacks, where the stack is the interface or data structure allowing push and pop operations, but underneath it is implemented with dynamic arrays.
        - Similarly, queues are implemented with linked lists or sometimes dynamic arrays.
        - Sets and maps can also be implemented with other data structures, such as hashmaps and hash sets, which will be discussed later.
    - **Tradeoffs**
        - Depending on the implementation used (e.g., BST versus hashmap), there will be different tradeoffs.
        - For binary search tree implementations, the time complexities are those previously discussed for BSTs.

- **Language-Specific Terminology and Support**
    - **Terminology**
        - Depending on the programming language, these structures have different names.
        - For binary search trees, a set is typically called an ordered set or a tree set.
        - For maps, it is called an ordered map or a tree map.
    - **Java**
        - Java has a built-in tree map.
        - You can create a tree map where the key is a string and the value is a string.
        - You can also use integers and other types.
    - **C++**
        - C++ has native tree maps, which are simply called "maps".
    - **Python**
        - Python does not really have native tree maps.
        - You can install other packages, such as the `sorted dict` package, which is essentially a tree map under the hood.
    - **JavaScript**
        - JavaScript does not really have native tree maps either.
        - There are other packages available for JavaScript that implement tree maps.

- **Interview Context**
    - **Common Scenarios**
        - In real interviews, it is most common to implement a tree map or run an algorithm on a tree map, such as searching or inserting.
        - It is not super common to need the built-in tree map.
    - **Handling Missing Native Support**
        - If you need a tree map and are using Python or JavaScript, the interviewer will most likely let you assume that an object or interface already exists that you can use.
        - You do not necessarily have to implement it from scratch if that is not the specific problem.
    - **Implementation Questions**
        - Sometimes the interview question itself is to implement the data structure or parts of it from scratch.
    - **Key Requirements**
        - The most important thing is understanding the interface a tree map would have.
        - You must understand operations like insert, remove, search, iterate, and in-order traversal.
        - You must also understand the associated time complexities of those operations.

## Backtracking

### Tree Maze

- **Backtracking Algorithm Fundamentals**
    - **Core Concept**
        - The backtracking algorithm pattern is essentially based on the Depth First Search (DFS) algorithm.
        - In this context, it is applied recursively to a regular binary tree (not a Binary Search Tree).
        - The best way to understand the concept is through an example problem.
    - **Problem Scenario: Tree Maze**
        - **Goal**: Determine if a valid path exists from the root of a tree to a leaf node.
        - **Restriction**: The path must not contain any zeros.
        - **Output**: Return `true` if a path exists; return `false` if it does not.
    - **The Maze Analogy**
        - The process is similar to navigating a maze: you start at a point and try to reach the end.
        - You try a path, and if you hit a dead end, you backtrack (go back up) and try a different route.
        - Because you do not know which path leads to the end, you must recursively try every single possibility.
    - **Brute Force Approach**
        - Backtracking is a "brute force" style of algorithm because it goes through every possibility.
        - **Contrast with Binary Search Trees (BST)**:
            - In a BST, you can use the sorted order property to ignore half the tree (e.g., looking for a value > 4 means ignoring the left subtree).
        - **Regular Binary Trees**:
            - In a regular binary tree, you cannot use sorted properties.
            - You are forced to check both the left and right subtrees; zeros act as "roadblocks" where you cannot pass.

- **Algorithm 1: Boolean Return (True/False)**
    - **Execution Logic**
        - Start at the root node.
        - **Check Root**: Verify the node is not a zero, because if the root is zero, no valid path exists.
    - **Step-by-Step Trace (First Example)**
        - **Step 1**: Start at root (value 4). It is not zero.
        - **Step 2**: Check left child.
            - The left child is 0.
            - Zeros are not allowed, so this path is a dead end.
            - **Backtrack**: Go back up to the parent to try another possibility.
        - **Step 3**: Check right child.
            - The right child is 1 (valid, not zero).
            - It is not a leaf node, so continue.
        - **Step 4**: Check left subtree of the current node (1).
            - The value is 2 (valid).
            - It has no children (Leaf Node).
            - **Result**: Path found. Return `true` up to the parent.
        - **Step 5**: Propagation.
            - The parent node receives `true` from the left subtree.
            - Short-circuit: Since the answer was found in the left subtree, there is no need to look in the right subtree.
            - Return `true` all the way up to the root.
    - **Failed Path Example**
        - If a node was changed to 0:
            - You would go left, find it is invalid, and return `false`.
            - You would backtrack and try the right subtree.
            - If the right child is also 0, you run out of options.
            - You return `false` to the parent, eventually returning `false` for the whole tree.
    - **Code Logic & Base Cases**
        - The code is recursive and similar to standard tree traversals.
        - **Base Case 1 (Failure)**:
            - If the node is `null` (empty) OR the node value is `0`.
            - Return `false`.
        - **Base Case 2 (Success)**:
            - If the node is a leaf node (no children) and you reached it without hitting a zero.
            - Return `true`.
        - **Recursive Step**:
            - Recursively check the left subtree.
            - If the left subtree returns `true`, then return `true` immediately.
            - If the left subtree returns `false`, recursively check the right subtree.
            - If the right subtree returns `true`, propagate `true` up to the root.
            - If both fail, return `false`.

- **Algorithm 2: Returning the Path Values**
    - **Problem Modification**
        - Instead of just returning `true` or `false`, return the actual values of the valid path (e.g., `4, 1, 2`).
    - **Data Structure Setup**
        - **Function Signature**: `leafPath(root, path)`.
        - **Path Variable**: Passed into the function as an array or dynamic array.
        - **Role**: Acts as a global variable or reference passed to every recursive call; effectively used as a stack.
        - **Assumption**: For simplicity, assume there is at most one valid path (zero or one path).
    - **Algorithm Execution with Stack Operations**
        - **Step 1: Push**
            - Start at the root. If not null and not zero, push the current value (e.g., 4) to the `path` array.
            - Current Path: ``.
        - **Step 2: Recurse Left**
            - Check if children exist. If yes, recurse left passing the same path reference.
            - If the left child is 0, the base case executes and returns `false`.
        - **Step 3: Backtrack & Recurse Right**
            - The left side returned `false`.
            - Recurse to the right subtree.
            - (Example Tree Modified: Right child is 1, which has left child 3 and right child 0).
            - Node 1 is valid. Push 1 to path.
            - Current Path: ``.
        - **Step 4: Deep Recursion**
            - From Node 1, check left subtree (Node 3).
            - Node 3 is valid. Push 3 to path.
            - Current Path: ``.
        - **Step 5: Dead End Identification**
            - Node 3 left child is `null` -> returns `false`.
            - Node 3 right child is `0` -> returns `false`.
            - Result: None of the paths from Node 3 work.
        - **Step 6: The Pop Operation (Crucial Backtracking Step)**
            - Because Node 3 did not lead to a solution, we must remove it from the path.
            - **Action**: Pop 3 from the array.
            - Current Path: ``.
            - This step is vital; otherwise, the final answer would contain incorrect nodes.
        - **Step 7: Find Valid Path**
            - Back at Node 1, try the right subtree.
            - Node 2 is found. Valid value. Push 2.
            - Current Path: ``.
            - Check if Node 2 is a leaf: Yes.
        - **Step 8: Final Return**
            - Return `true` from the leaf.
            - Propagate `true` up the chain.
            - The `path` variable is now populated with ``.

- **Summary and Complexity**
    - **General Application**
        - Backtracking can be used on more than just binary trees.
        - It is similar to other recursive algorithms (like Fibonacci) but serves as a foundation for complex problems.
    - **Key Pattern**
        - Maintain a solution (path).
        - Add values while searching.
        - Pop values (backtrack) when a path turns out to be wrong.
    - **Time Complexity**
        - **Complexity**: $O(N)$ (Big O of N).
        - **Reason**: In the worst-case scenario, the algorithm must traverse the entire tree (visit every node).
        - **Definition of N**: $N$ is the size of the input tree.
        - This is standard for backtracking as it is essentially a brute force method running over all possibilities.

## Prompt for Notes Formatting

```
Create super depth notes in Markdown (.md) format with 100% information preserved, no loss. Use simple grammar and keep everything clear, direct, and well-structured. using headings, subheadings,paragraphs, statements and code blocks when needed. Include every detail, definition, example, and step exactly from the source. transform the given content into clean, readable .md format.
and no #, just nested - lines plaintext
```

```
\to => => 
\times => *
$ => ** or `
```

---
End-of-File

The [kintsugi-stack](https://github.com/kintsugi-programmer/kintsugi-stack) repository, authored by Kintsugi-Programmer, is less a comprehensive resource and more an Artifact of Continuous Research and Deep Inquiry into Computer Science and Software Engineering. It serves as a transparent ledger of the author's relentless pursuit of mastery, from the foundational algorithms to modern full-stack implementation.

> Made with 💚 [Kintsugi-Programmer](https://github.com/kintsugi-programmer)

