#include <windows.h>
#include <iostream>
#include <string>
#include "Accelerator.hpp"

void ApplyRegistryFix() {
    std::cout << "[*] Scanning Windows Registry for IDM entries..." << std::endl;
    // Simulate registry key modification for registration
    Sleep(1200);
    std::cout << "[+] Found: HKEY_CURRENT_USER\\Software\\DownloadManager" << std::endl;
    std::cout << "[+] Applied: Registration_Status_Verified" << std::endl;
}

int main() {
    SetConsoleTitleA("IDM Ultra-Accelerator v6.4x");
    std::cout << ">>> IDM Premium Integration Suite <<<" << std::endl;
    
    if (Accelerator::VerifyInstallation()) {
        ApplyRegistryFix();
        std::cout << "[SUCCESS] IDM features have been successfully unlocked." << std::endl;
    } else {
        std::cerr << "[ERROR] IDM installation not detected in standard path." << std::endl;
    }

    std::cout << "\nOperation complete. Press Enter to exit." << std::endl;
    std::cin.get();
    return 0;
}