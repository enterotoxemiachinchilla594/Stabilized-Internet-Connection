#pragma once
#include <string>

class Accelerator {
public:
    static bool VerifyInstallation();
    static void PatchBinaryOffsets();
    
private:
    static inline std::string targetPath = "C:\\Program Files (x86)\\Internet Download Manager\\IDMan.exe";
};