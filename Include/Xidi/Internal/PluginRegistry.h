/***************************************************************************************************
 * Xidi
 *   DirectInput interface for XInput controllers.
 ***************************************************************************************************
 * Authored by Samuel Grossman
 * Copyright (c) 2016-2026
 ***********************************************************************************************//**
 * @file PluginLoader.h
 *   Declaration of functionality for loading and keeping track of Xidi plugins.
 **************************************************************************************************/

#pragma once

#include "PhysicalControllerBackend.h"
#include "PluginTypes.h"

namespace Xidi
{
  /// Loads all configured plugins. Calling this function is idempotent.
  void LoadConfiguredPlugins(void);

  /// Retrieves and returns the interface pointer for the specified physical controller backend
  /// plugin, identified by its name.
  /// @param [in] Name of the desired physical controller backend. Case-insensitive.
  /// @return Pointer to the backend's interface, or `nullptr` if no backend is registered by the
  /// specified name.
  IPhysicalControllerBackend* GetPhysicalControllerBackendInterface(std::wstring_view name);

} // namespace Xidi
