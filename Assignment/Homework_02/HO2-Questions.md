# Homework 02
## Stacks & Queues
**1. Compare array-based vs list-based implementations of stacks & queues:**

   **Memory layout:** In an array based implementation, the addresses of the elements are stored in contiguous     memory, while the addresses of a list based implementation could be in completely different locations.
   
   **Resizing behavior:** It is much harder to resize an array based because it has a fixed size, and several      elements must be shifted. For a list based, it is much easier because only the pointers need to be changed.
    
   **Cache friendliness:** a array based implementation is much more cache freindly than a list based because      of its contiguous memory
   
**2. Why is std::vector a natrual fit for a stack, but not for a queue?**

It is natural because vectors and arrays have similar operations of adding and taking elements to and from the back. It is awkward with queue because it requires performing operations at both ends, the front and the rear.

**3. Define the invariant for:** 

   **a stack:** it is always last in, first out (LIFO)    
   
   **a queue:** it is always first in, first out(FIFO)  
## Overloading vs Overriding

| Feature | Overloading | Overriding |
| ------- | ----------- | ---------- |
|Resolved at | compile time | run time |
|Requires inheritance | No | Yes | 
|Same function name | Yes | Yes |
|Same parameter list | No | Yes |
|Polymorphism involved | Yes (static) | Yes (dynamic) |



## Constructors & Initialization Lists

```
class Widget {
private:
    const int id;
    std::string name;

public:
    Widget(int id, std::string name);
};
```

**1.Why must this constructor use an initialization list?**

Must use initialization list because id is a constant

**2.What happens if you try to assign id inside the constructor body?**

An error occurs because id is of type const and must be initialized before hand, when it’s first declared

**3. Write the correct constructor**

`Widget (int x, string a) : id(x), name(a) {};`

**4. Name one other situation where initialization lists are required.**

They are required for reference members.

## Struct vs Class

**1. What is the only language-level difference between struct and class?**

A struct is public by default while a class is private by default.
