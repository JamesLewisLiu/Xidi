#include "Configuration.h"
#include <Windows.h>

namespace Xidi {
    std::wstring GetCustomControllerName() {
        wchar_t buffer[256] = { 0 };
        
        // 尝试从当前目录下的 Xidi.ini 读取配置
        // Section: [Device]
        // Key: Name
        // Default: Xidi Controller
        // 配置文件路径: .\Xidi.ini (通常指游戏或应用程序的运行目录)
        GetPrivateProfileStringW(
            L"Device",           // Section 节名
            L"Name",             // Key 键名
            L"Xidi Controller",  // 默认值 (如果未找到配置文件)
            buffer, 
            256, 
            L".\\Xidi.ini"       // ini 文件路径
        );
        
        return std::wstring(buffer);
    }
}