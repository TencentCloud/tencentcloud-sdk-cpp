/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/trtc/v20190722/model/EmulateMobileParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

EmulateMobileParams::EmulateMobileParams() :
    m_mobileDeviceTypeHasBeenSet(false),
    m_screenOrientationHasBeenSet(false)
{
}

CoreInternalOutcome EmulateMobileParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MobileDeviceType") && !value["MobileDeviceType"].IsNull())
    {
        if (!value["MobileDeviceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmulateMobileParams.MobileDeviceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mobileDeviceType = value["MobileDeviceType"].GetUint64();
        m_mobileDeviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ScreenOrientation") && !value["ScreenOrientation"].IsNull())
    {
        if (!value["ScreenOrientation"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmulateMobileParams.ScreenOrientation` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_screenOrientation = value["ScreenOrientation"].GetUint64();
        m_screenOrientationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmulateMobileParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mobileDeviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MobileDeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mobileDeviceType, allocator);
    }

    if (m_screenOrientationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScreenOrientation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_screenOrientation, allocator);
    }

}


uint64_t EmulateMobileParams::GetMobileDeviceType() const
{
    return m_mobileDeviceType;
}

void EmulateMobileParams::SetMobileDeviceType(const uint64_t& _mobileDeviceType)
{
    m_mobileDeviceType = _mobileDeviceType;
    m_mobileDeviceTypeHasBeenSet = true;
}

bool EmulateMobileParams::MobileDeviceTypeHasBeenSet() const
{
    return m_mobileDeviceTypeHasBeenSet;
}

uint64_t EmulateMobileParams::GetScreenOrientation() const
{
    return m_screenOrientation;
}

void EmulateMobileParams::SetScreenOrientation(const uint64_t& _screenOrientation)
{
    m_screenOrientation = _screenOrientation;
    m_screenOrientationHasBeenSet = true;
}

bool EmulateMobileParams::ScreenOrientationHasBeenSet() const
{
    return m_screenOrientationHasBeenSet;
}

