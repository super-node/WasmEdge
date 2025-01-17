// SPDX-License-Identifier: Apache-2.0
//===-- wasmedge/system/path.h - Get system directory path ----------------===//
//
// Part of the WasmEdge Project.
//
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contains helper to get system path for various operating system.
///
//===----------------------------------------------------------------------===//
#pragma once

#include "common/filesystem.h"

namespace WasmEdge {

class Path {
public:
  static std::filesystem::path home() noexcept;
};

} // namespace WasmEdge
