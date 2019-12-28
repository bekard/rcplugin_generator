#pragma once
#include <QString>

class RcPluginGenerator
{
public:
    RcPluginGenerator();

public:
    bool generate(const QString& a_strName) const;

private:
    bool writeHeader(const QString& a_strName) const;
    bool writeSource(const QString& a_strName) const;
};

