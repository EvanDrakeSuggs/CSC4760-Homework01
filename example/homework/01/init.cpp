#include <Kokkos_Core.hpp>
#include <cstdio>
#include <iostream>

// Problem: Link and run program with Kokkos where you initialize a View and print out its name with the $.label()$ method.

int main(int argc, char* argv[]) {
  Kokkos::initialize(argc, argv);
  {
    // Make View
    Kokkos::View<int*> view("view");
    // print name
    std::cout << "View label: " << view.label() << std::endl;
  }
  Kokkos::finalize();
}
