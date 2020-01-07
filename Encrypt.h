#include <iostream>
#include <string>
#include <fstream>

#ifndef ENCRYPT_H
#define ENCRYPT_H

class Encrypt
{
protected:
    std::string m_plain;
    std::string m_cipher;

public:
    Encrypt();

    std::string getPlain() const;

    std::string getCipher() const;

    bool read(bool isPlain, std::string filename);

    bool write(bool isPlain, std::string filename);

    std::string encode();

    std::string decode();
};

#endif