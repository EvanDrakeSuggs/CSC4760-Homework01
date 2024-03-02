#include <Kokkos_Core.hpp>
#include <cstdio>

// Problem: Link and run program with Kokkos where you initialize a View and print out its name with the $.label()$ method.

int main(int argc, char* argv[]) {
  Kokkos::initialize(argc, argv);
  {
    // Create a Kokkos View with 1 element
    Kokkos::View<int*> view("view");
    // Print out the name of the view
    std::cout << "View label: " << view.label() << std::endl;
  }
  Kokkos::finalize();
}
