#include "Encrypt.h"

Encrypt::Encrypt()
{
    std::string m_plain = "";
    std::string m_cipher = "";
}

std::string Encrypt::getPlain() const
{
    return m_plain;
}
std::string Encrypt::getCipher() const
{
    return m_cipher;
}
std::string Encrypt::decode()
{
    m_plain = m_cipher;
    return m_plain;
}

std::string Encrypt::encode()
{
    m_cipher = m_plain;
    return m_cipher;
}

bool Encrypt::read(bool isPlain, std::string filename)
{
    std::ifstream flux(filename);

    if (flux)
    {
        std::string ligne = "";

        while (getline(flux, ligne))
        {

            if (isPlain)
            {
                m_plain += ligne;
            }
            else
            {
                m_cipher += ligne;
            }
        }
        return true;
    }
    else
    {
        std::cout << "ERREUR: Impossible d'ouvrir le fichier." << std::endl;
        return false;
    }
}
bool Encrypt::write(bool isPlain, std::string filename)
{
    std::ofstream flux(filename);

    if (flux)
    {
        if (isPlain)
        {
            flux << m_plain << std::endl;
        }
        else
        {
            flux << m_cipher << std::endl;
        }
        return true;
    }
    else
    {
        std::cout << "ERREUR: Impossible d'ouvrir le fichier." << std::endl;
        return false;
    }
}