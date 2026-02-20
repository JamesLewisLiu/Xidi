#pragma once
#include <string>

namespace Xidi {
    // 从 Xidi.ini 配置文件中获取自定义手柄名称
    // 如果读取失败或未配置，则返回默认名称
    std::wstring GetCustomControllerName();
}