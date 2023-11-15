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

#include <tencentcloud/weilingwith/v20230427/model/DeviceModifyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DeviceModifyInfo::DeviceModifyInfo() :
    m_wIDHasBeenSet(false),
    m_deviceNameHasBeenSet(false)
{
}

CoreInternalOutcome DeviceModifyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WID") && !value["WID"].IsNull())
    {
        if (!value["WID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceModifyInfo.WID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wID = string(value["WID"].GetString());
        m_wIDHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceModifyInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceModifyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wID.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

}


string DeviceModifyInfo::GetWID() const
{
    return m_wID;
}

void DeviceModifyInfo::SetWID(const string& _wID)
{
    m_wID = _wID;
    m_wIDHasBeenSet = true;
}

bool DeviceModifyInfo::WIDHasBeenSet() const
{
    return m_wIDHasBeenSet;
}

string DeviceModifyInfo::GetDeviceName() const
{
    return m_deviceName;
}

void DeviceModifyInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeviceModifyInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

