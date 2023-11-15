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

#include <tencentcloud/weilingwith/v20230427/model/DeviceStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DeviceStatusInfo::DeviceStatusInfo() :
    m_wIDHasBeenSet(false),
    m_deviceStatusHasBeenSet(false),
    m_deviceStatusUpdateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isAliveHasBeenSet(false)
{
}

CoreInternalOutcome DeviceStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WID") && !value["WID"].IsNull())
    {
        if (!value["WID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatusInfo.WID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wID = string(value["WID"].GetString());
        m_wIDHasBeenSet = true;
    }

    if (value.HasMember("DeviceStatus") && !value["DeviceStatus"].IsNull())
    {
        if (!value["DeviceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatusInfo.DeviceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceStatus = string(value["DeviceStatus"].GetString());
        m_deviceStatusHasBeenSet = true;
    }

    if (value.HasMember("DeviceStatusUpdateTime") && !value["DeviceStatusUpdateTime"].IsNull())
    {
        if (!value["DeviceStatusUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatusInfo.DeviceStatusUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceStatusUpdateTime = string(value["DeviceStatusUpdateTime"].GetString());
        m_deviceStatusUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatusInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsAlive") && !value["IsAlive"].IsNull())
    {
        if (!value["IsAlive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatusInfo.IsAlive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAlive = value["IsAlive"].GetBool();
        m_isAliveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wID.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceStatusUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceStatusUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceStatusUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_isAliveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAlive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAlive, allocator);
    }

}


string DeviceStatusInfo::GetWID() const
{
    return m_wID;
}

void DeviceStatusInfo::SetWID(const string& _wID)
{
    m_wID = _wID;
    m_wIDHasBeenSet = true;
}

bool DeviceStatusInfo::WIDHasBeenSet() const
{
    return m_wIDHasBeenSet;
}

string DeviceStatusInfo::GetDeviceStatus() const
{
    return m_deviceStatus;
}

void DeviceStatusInfo::SetDeviceStatus(const string& _deviceStatus)
{
    m_deviceStatus = _deviceStatus;
    m_deviceStatusHasBeenSet = true;
}

bool DeviceStatusInfo::DeviceStatusHasBeenSet() const
{
    return m_deviceStatusHasBeenSet;
}

string DeviceStatusInfo::GetDeviceStatusUpdateTime() const
{
    return m_deviceStatusUpdateTime;
}

void DeviceStatusInfo::SetDeviceStatusUpdateTime(const string& _deviceStatusUpdateTime)
{
    m_deviceStatusUpdateTime = _deviceStatusUpdateTime;
    m_deviceStatusUpdateTimeHasBeenSet = true;
}

bool DeviceStatusInfo::DeviceStatusUpdateTimeHasBeenSet() const
{
    return m_deviceStatusUpdateTimeHasBeenSet;
}

string DeviceStatusInfo::GetStatus() const
{
    return m_status;
}

void DeviceStatusInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeviceStatusInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool DeviceStatusInfo::GetIsAlive() const
{
    return m_isAlive;
}

void DeviceStatusInfo::SetIsAlive(const bool& _isAlive)
{
    m_isAlive = _isAlive;
    m_isAliveHasBeenSet = true;
}

bool DeviceStatusInfo::IsAliveHasBeenSet() const
{
    return m_isAliveHasBeenSet;
}

