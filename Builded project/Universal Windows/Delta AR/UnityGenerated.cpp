﻿// GENERATED BY UNITY
// DO NOT MODIFY, THIS FILE WILL MAY BE OVERWRITTEN DURING NEXT BUILD

#include "pch.h"
#include "UnityGenerated.h"

using namespace Windows::Graphics::Display;
using namespace Windows::UI::ViewManagement;

namespace Unity
{

void SetupDisplay()
{
    DisplayInformation::AutoRotationPreferences = DisplayOrientations::Landscape;
    ApplicationView::PreferredLaunchWindowingMode = ApplicationViewWindowingMode::FullScreen;
}

}
