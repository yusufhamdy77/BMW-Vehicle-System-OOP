# 🚗 BMW Cars OOP System

### Object-Oriented Programming | C++ | Inheritance | Abstraction | Polymorphism

A **C++ Object-Oriented Programming project** that models a collection of BMW vehicles using a structured **multi-level inheritance hierarchy**.

The project was designed to demonstrate how OOP principles can be used to represent different vehicle categories and models while allowing each specific car to provide its own implementation of characteristics such as **engine efficiency, comfort, handling, security, model name, and price**.

---

## 📌 Project Overview

The **BMW Cars OOP System** is a console-based C++ application that allows the user to:

* Select a BMW vehicle category.
* Browse available models within that category.
* Select a specific BMW model.
* Display its specifications.
* Display its price.
* Run the system repeatedly to explore different vehicles.

The project focuses primarily on applying **Object-Oriented Programming concepts through inheritance and runtime polymorphism**.

---

## 🧠 OOP Concepts Demonstrated

One of the main goals of this project is to demonstrate practical understanding of core OOP concepts.

### 1. Abstraction

The `BMW` class acts as a common abstract base class for all BMW vehicles.

Several behaviors are declared as pure virtual functions:

```cpp
virtual float price() = 0;
virtual const char* modelname() = 0;
virtual void security() = 0;
virtual void efficiency() = 0;
virtual void comfort() = 0;
virtual void handling() = 0;
```

This forces derived classes to provide their own implementations for the characteristics that differ between vehicles.

---

### 2. Inheritance

The project uses **multi-level inheritance** to organize vehicles into logical categories.

The hierarchy starts with:

```text
BMW
│
├── SUV
│   ├── X1
│   ├── X4
│   └── X5
│
├── Sedan
│   ├── i5
│   ├── i7
│   └── M8
│
├── Coupe
│   ├── 2 Series
│   └── M2
│
└── Convertible
    └── 8 Series
```

For example:

```text
BMW
 ↓
Suv
 ↓
x1suv
 ↓
x128i
```

This allows common behavior to be inherited while specialized behavior is implemented at lower levels of the hierarchy.

---

### 3. Polymorphism

Runtime polymorphism is one of the key concepts demonstrated in the project.

A base-class pointer is used:

```cpp
BMW* BmwCar = nullptr;
```

The pointer can then reference objects of different derived classes:

```cpp
BmwCar = new x128i;
BmwCar = new X5M60i;
BmwCar = new I7M70;
BmwCar = new M2Coupe;
```

The selected object is finally displayed through:

```cpp
BmwCar->showing();
```

Because the BMW characteristics are implemented using virtual functions, the appropriate derived-class implementation is executed at runtime.

This demonstrates **dynamic dispatch / runtime polymorphism**.

---

### 4. Encapsulation

The classes use access modifiers such as:

```cpp
private
protected
public
```

Common internal functionality is kept inside the class hierarchy, while the public `showing()` function provides the main interface for displaying vehicle information.

For example, common BMW features such as:

* Exterior
* Connectivity
* Warranty
* Audio System
* Controls

are encapsulated inside the base `BMW` class.

---

## 🏗️ Class Hierarchy

The project follows a layered class structure:

```text
                         BMW
                          │
          ┌───────────────┼────────────────┐
          │               │                │
         SUV            Sedan            Coupe
          │               │                │
    ┌─────┼─────┐    ┌────┼────┐      ┌───┴────┐
    X1    X4    X5    i5   i7   M8     2-Series M2
```

There is also a separate branch for:

```text
BMW
 │
 └── Convertible
        │
        └── Convertible8
                │
                ├── 840i xDrive
                └── M850i xDrive
```

This structure makes it possible to share common characteristics between related vehicle types while keeping model-specific implementations separate.

---

## 🚘 Supported Vehicle Categories

### SUV

The project includes:

* X1 xDrive28i
* X2 M35i
* X4 xDrive30i
* X4 M40i
* X4M
* X5 xDrive40i
* X5 M60i
* X5 xDrive50e

### Sedan

The project includes:

* i5 M60
* i5 xDrive40
* i7 xDrive60
* i7 M70
* M8 Competition Gran Coupe

### Coupe

The project includes:

* 230i xDrive Coupe
* M240i xDrive Coupe
* M2 Coupe

### Convertible

The project includes:

* 840i xDrive Convertible
* M850i xDrive Convertible

The complete selection menu and model mapping are handled through the `BMWCars()` function.

---

## ⚙️ How the System Works

The application follows a simple interactive workflow:

```text
Start Program
     │
     ▼
Choose Vehicle Category
     │
     ├── SUV
     ├── Sedan
     ├── Coupe
     └── Convertible
     │
     ▼
Choose Specific Model
     │
     ▼
Create Derived Object
     │
     ▼
Store Object Using BMW*
     │
     ▼
Call showing()
     │
     ▼
Display Model Specifications
     │
     ▼
Display Price
     │
     ▼
Run Again?
     │
    Yes ───────► Start Again
     │
    No
     ▼
   Exit
```

The program creates the selected vehicle dynamically and stores it through a pointer to the base class:

```cpp
BMW* BmwCar = nullptr;
```

The selected object is then displayed and released after use.

---

## 💡 Key Design Idea

Instead of creating completely independent classes for every car, the project builds a **hierarchical model**.

For example:

```text
BMW
 ↓
Suv
 ↓
x5suv
 ↓
X5M60i
```

Each level has a responsibility:

* **BMW** → common BMW-level behavior.
* **Suv** → common SUV characteristics.
* **x5suv** → characteristics shared by X5 vehicles.
* **X5M60i** → specific engine, model name, and price.

This approach demonstrates how inheritance can reduce duplication and represent relationships between objects.

---

## 🧩 Example

A specific vehicle can override the abstract behavior defined in the base class.

For example, `X5M60i` provides its own implementation for:

```cpp
void efficiency()
{
    cout << "Motor: 4.4-liter BMW TwinPower Turbo V-8 engine.";
}
```

and:

```cpp
const char* modelname()
{
    return "X5 M60i";
}
```

and:

```cpp
float price()
{
    return 56000;
}
```

This allows the same interface from the `BMW` base class to produce different results depending on the actual object type.

---

## 🛠️ Technologies Used

* **C++**
* Object-Oriented Programming
* Inheritance
* Abstraction
* Polymorphism
* Virtual Functions
* Pure Virtual Functions
* Dynamic Object Creation
* Pointers
* Console-Based User Interface

---

## 🎯 Learning Objectives

This project was developed to strengthen practical understanding of:

* Designing class hierarchies.
* Applying inheritance in a real-world scenario.
* Using abstract classes and pure virtual functions.
* Implementing runtime polymorphism.
* Understanding base-class pointers.
* Overriding virtual functions.
* Organizing related objects through inheritance.
* Managing dynamically allocated objects.
* Building an interactive console application.

---

## 📂 Project Structure

The project is currently implemented as a C++ console application containing:

```text
BMW Cars OOP
│
├── BMW Base Class
│
├── SUV Hierarchy
│   ├── X1 Models
│   ├── X4 Models
│   └── X5 Models
│
├── Sedan Hierarchy
│   ├── i5 Models
│   ├── i7 Models
│   └── M8
│
├── Coupe Hierarchy
│   ├── 2 Series
│   └── M2
│
├── Convertible Hierarchy
│   └── 8 Series
│
└── Main Program
```

---

## ▶️ How to Run

### 1. Clone the repository

```bash
git clone <YOUR-REPOSITORY-URL>
```

### 2. Open the project

Open the source file using a C++ IDE such as:

* Visual Studio
* Code::Blocks
* CLion
* VS Code

### 3. Compile and run

Compile the C++ source file using a C++ compiler and run the generated executable.

---

## 🖥️ Example Workflow

```text
Choose a type:

1> SUV
2> Sedan
3> Coupes
4> Convertibles

Which one: 1

Choose an SUV car:

1: X1 xDrive28i
2: X2 M35i
3: X4 xDrive30i
...

Which One: 5
```

The selected object is then displayed through the common BMW interface.

---

## 🔥 Why This Project Is Interesting

The main strength of the project is not simply the number of BMW models.

The important part is the **object-oriented design behind them**.

Different vehicles share common behavior, but each category and model can specialize that behavior.

This creates a practical example of:

> **"One common interface, multiple implementations."**

The use of a `BMW*` pointer to work with multiple derived vehicle types is particularly useful for demonstrating **runtime polymorphism**.

---

## 🚀 Future Improvements

Possible improvements for future versions include:

* Replace raw pointers with **smart pointers** such as `std::unique_ptr`.
* Add a dedicated **Car/Vehicle interface**.
* Separate classes into `.h` and `.cpp` files.
* Introduce `enum class` for vehicle categories.
* Improve input validation and error handling.
* Replace the large selection `switch` with a more scalable approach.
* Add additional BMW models and specifications.
* Store vehicle information in a structured collection.
* Add search and filtering functionality.
* Improve the console UI.
* Apply additional **SOLID principles** and design patterns.

---

## 👨‍💻 Project Focus

This project focuses on **practical Object-Oriented Programming in C++**, especially the ability to model real-world entities using:

```text
Abstraction
     +
Inheritance
     +
Encapsulation
     +
Polymorphism
     ↓
Maintainable Object-Oriented Design
```

---

## 📜 License

This project is intended for **educational and learning purposes**.
