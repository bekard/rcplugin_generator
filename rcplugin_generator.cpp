#include <fstream>
#include "rcplugin_generator.h"

RcPluginGenerator::RcPluginGenerator()
{
}

bool RcPluginGenerator::generate(const QString& a_strName) const
{
    return writeHeader(a_strName) && writeSource(a_strName);
}

bool RcPluginGenerator::writeHeader(const QString& a_strName) const
{
    std::ofstream ofs { a_strName.toStdString() + ".h" };
    ofs << "#pragma once\n";
    ofs << "#include \"rc_plugin.h\"\n\n";
    ofs << "#define PLG_API __declspec(dllexport)\n";
    ofs.close();
    return true;
}

bool RcPluginGenerator::writeSource(const QString& a_strName) const
{
    std::ofstream ofs { a_strName.toStdString() + ".cpp" };
    ofs.close();
    return true;
}
