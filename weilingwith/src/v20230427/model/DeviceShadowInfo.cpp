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

#include <tencentcloud/weilingwith/v20230427/model/DeviceShadowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DeviceShadowInfo::DeviceShadowInfo() :
    m_wIDHasBeenSet(false),
    m_deviceShadowHasBeenSet(false),
    m_deviceShadowUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceShadowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WID") && !value["WID"].IsNull())
    {
        if (!value["WID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceShadowInfo.WID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wID = string(value["WID"].GetString());
        m_wIDHasBeenSet = true;
    }

    if (value.HasMember("DeviceShadow") && !value["DeviceShadow"].IsNull())
    {
        if (!value["DeviceShadow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceShadowInfo.DeviceShadow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceShadow = string(value["DeviceShadow"].GetString());
        m_deviceShadowHasBeenSet = true;
    }

    if (value.HasMember("DeviceShadowUpdateTime") && !value["DeviceShadowUpdateTime"].IsNull())
    {
        if (!value["DeviceShadowUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceShadowInfo.DeviceShadowUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceShadowUpdateTime = string(value["DeviceShadowUpdateTime"].GetString());
        m_deviceShadowUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceShadowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wID.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceShadowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceShadow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceShadow.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceShadowUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceShadowUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceShadowUpdateTime.c_str(), allocator).Move(), allocator);
    }

}


string DeviceShadowInfo::GetWID() const
{
    return m_wID;
}

void DeviceShadowInfo::SetWID(const string& _wID)
{
    m_wID = _wID;
    m_wIDHasBeenSet = true;
}

bool DeviceShadowInfo::WIDHasBeenSet() const
{
    return m_wIDHasBeenSet;
}

string DeviceShadowInfo::GetDeviceShadow() const
{
    return m_deviceShadow;
}

void DeviceShadowInfo::SetDeviceShadow(const string& _deviceShadow)
{
    m_deviceShadow = _deviceShadow;
    m_deviceShadowHasBeenSet = true;
}

bool DeviceShadowInfo::DeviceShadowHasBeenSet() const
{
    return m_deviceShadowHasBeenSet;
}

string DeviceShadowInfo::GetDeviceShadowUpdateTime() const
{
    return m_deviceShadowUpdateTime;
}

void DeviceShadowInfo::SetDeviceShadowUpdateTime(const string& _deviceShadowUpdateTime)
{
    m_deviceShadowUpdateTime = _deviceShadowUpdateTime;
    m_deviceShadowUpdateTimeHasBeenSet = true;
}

bool DeviceShadowInfo::DeviceShadowUpdateTimeHasBeenSet() const
{
    return m_deviceShadowUpdateTimeHasBeenSet;
}

