// Copyright (c) 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef OZONE_PLATFORM_OZONE_PLATFORM_WAYLAND_H_
#define OZONE_PLATFORM_OZONE_PLATFORM_WAYLAND_H_

namespace ui {

class OzonePlatform;

// Constructor hook for use in ozone_platform_list.cc
OzonePlatform* CreateOzonePlatformWayland();

}  // namespace ui

#endif  // OZONE_PLATFORM_OZONE_PLATFORM_WAYLAND_H_
