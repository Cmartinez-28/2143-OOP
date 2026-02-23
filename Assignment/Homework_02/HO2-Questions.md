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

**1. Why is overloading a compile-time convenience?**

It decides at compile time which operator to call on based on static types

**2. Why is overriding a run time contract?**

Overriding allows the program to decide which method implementation to use at run time

**3. Why do beginners confuse the two?**

The two are seen as one process, but there are two phases of analyzing and executing the code.

**4. Why is that confusion dangerous?**

It is dangerous because the user could be expecting something that is resolved at run time to be used in something that is resolved at compile time

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

**Copy Constructor vs Assignment Operator**

**1. When is the copy constructor invoked?**

A copy constructor is invoked when a new object is created & immediately assigned to an already existing object;
```
Point2D A(2,4);
Point2D B = A;
```

**2. When is the assignment operator invoked?**

The assignment operator is invoked when an already existing object is assigned to another already existing object

`m6 = m3;  //m6 and m3 already exist`

## Struct vs Class

**1. What is the only language-level difference between struct and class?**

A struct is public by default while a class is private by default.

**2. Why does C++ even allow both?**

They are both allowed because the choice between struct and class communicates intent.

**3. When does choosing struct communicate intent better than class?**

Struct communicates intent better than class when there are no invariants or encapsulation involved with the user's type.

**4. Why does intent matter more than syntax in large systems?**

There are several different people that will be working with the system. The intnet lets all of them know what the purpose and goal is. 

## Operator Overloading

C++ cannot overload '.' or '::' becuase they are part of the language semantics that define what the computer does at execution. 

## Friend: Controlled Violation of Privacy

**1. What does the friend keyword actually do?**

Friend keyword gives complete access to class & private members

**2. Why is operator<< commonly declared as a friend?**

Operator << is commonly declared a friend to use cout << with private members

**3. Why is excessive use of friend a red flag?**

It is lazy, not safe, & and breaks the idea of encapsulation.

## Reflection

**1. Does your Point2D feel like a built-in type?**

Yes

**What design choice most contributed to that feeling?**

Having the copy constructor and the overloaded operator == that allowed me to compare p3 to Point2D(4,6)

**Which OOP concept currently feels overhyped?**

The concept of overriding, but have not seen too much of it yet

**Which one feels underrated?**

Overloading operators so the program knows what to do when arithmetic or comparison is happening between two objects

**What part of this assignment made you uncomfortable?**

Learning more about why certain operators can't be overloaded, and the difference between run time and compile time. There are some things tougher for me to understand when going deeper into the topic.
