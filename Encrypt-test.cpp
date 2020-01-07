#include "Encrypt.h"

int main()
{
    Encrypt test;
    test.read(1, "testfile.txt");
    std::cout << test.getPlain() << std::endl;
    test.encode();
    std::cout << test.getCipher() << std::endl;
    test.write(0, "testcipher.txt");
    return 0;
}