#ifndef EPMFILEFORMAT_H
#define EPMFILEFORMAT_H

#include <string>

class epmFileFormat
{
public:
    epmFileFormat();
    static const std::string extension;
};

const std::string epmFileFormat::extension = "epmui";

#endif // EPMFILEFORMAT_H
