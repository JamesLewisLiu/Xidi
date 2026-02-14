/***************************************************************************************************
 * Xidi
 *   DirectInput interface for XInput controllers.
 ***************************************************************************************************
 * Authored by Samuel Grossman
 * Copyright (c) 2016-2026
 ***********************************************************************************************//**
 * @file PluginExampleEntry.cpp
 *   Entry point for the example Xidi plugin.
 **************************************************************************************************/

#include "SimpleXInputBackend.h"

#include "Xidi/Plugin.h"

extern "C" unsigned int __fastcall XidiPluginGetCount(void)
{
  return 1;
}

extern "C" ::Xidi::IPlugin* __fastcall XidiPluginGetInterface(int index)
{
  if (0 == index)
    return new ::XidiPluginExample::SimpleXInputBackend();
  else
    return nullptr;
}
