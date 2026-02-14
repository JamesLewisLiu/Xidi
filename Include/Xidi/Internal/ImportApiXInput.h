/***************************************************************************************************
 * Xidi
 *   DirectInput interface for XInput controllers.
 ***************************************************************************************************
 * Authored by Samuel Grossman
 * Copyright (c) 2016-2026
 ***********************************************************************************************//**
 * @file ImportApiXInput.h
 *   Declarations of functions for accessing the XInput API imported from the native XInput
 *   library.
 **************************************************************************************************/

#pragma once

// XInput header files depend on Windows header files, which are are sensitive to include order.
// See "ApiWindows.h" for more information.

// clang-format off

#include "ApiWindows.h"
#include <xinput.h>

// clang-format on

namespace Xidi
{
  namespace ImportApiXInput
  {
    /// Maximum number of controllers supported by the imported XInput API.
    constexpr int kMaxControllerCount = XUSER_MAX_COUNT;

    /// Dynamically loads the XInput library and sets up all imported function calls.
    void Initialize(void);

    DWORD XInputGetState(DWORD dwUserIndex, XINPUT_STATE* pState);
    DWORD XInputSetState(DWORD dwUserIndex, XINPUT_VIBRATION* pVibration);
  } // namespace ImportApiXInput
} // namespace Xidi
