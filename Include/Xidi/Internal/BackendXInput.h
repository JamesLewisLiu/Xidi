/***************************************************************************************************
 * Xidi
 *   DirectInput interface for XInput controllers.
 ***************************************************************************************************
 * Authored by Samuel Grossman
 * Copyright (c) 2016-2026
 ***********************************************************************************************//**
 * @file BackendXInput.h
 *   Declaration of the built-in XInput physical controller backend.
 **************************************************************************************************/

#pragma once

#include "Plugin.h"

namespace Xidi
{
  using namespace ::Xidi::Plugin;

  /// Implements the built-in XInput backend for communicating with physical controllers.
  class BackendXInput : public IPhysicalControllerBackend
  {
  public:

    // IPhysicalControllerBackend
    void Initialize(void) override;
    TPhysicalControllerIndex MaxPhysicalControllerCount(void) override;
    bool SupportsControllerByGuidAndPath(const wchar_t* guidAndPath) override;
    SPhysicalControllerCapabilities GetCapabilities(void) override;
    SPhysicalControllerState ReadInputState(
        TPhysicalControllerIndex physicalControllerIndex) override;
    bool WriteForceFeedbackState(
        TPhysicalControllerIndex physicalControllerIndex,
        SPhysicalControllerVibration vibrationState) override;
  };
} // namespace Xidi
