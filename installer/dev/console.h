﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "pch.h"

namespace WindowsAppRuntimeInstaller::Console
{
    void DisplayInfoHeader();
    void DisplayHelp();
    void DisplayInfo();
    void DisplayErrorMessage(const HRESULT hr);
}
