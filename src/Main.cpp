#include "Includes.hpp"

int main() {
    Assistant as;
    as.load_memory("base.txt");
    as.do_som("CRIAR PASTA");

    std::cout << "ASSISTANT CLASS SIZE: " << sizeof(as) << '\n';

return 0;
}