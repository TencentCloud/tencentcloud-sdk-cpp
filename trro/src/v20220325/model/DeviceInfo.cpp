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

#include <tencentcloud/trro/v20220325/model/DeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

DeviceInfo::DeviceInfo() :
    m_deviceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_deviceStatusHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_lastReportTimeHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

CoreInternalOutcome DeviceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceStatus") && !value["DeviceStatus"].IsNull())
    {
        if (!value["DeviceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceStatus = string(value["DeviceStatus"].GetString());
        m_deviceStatusHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("LastReportTime") && !value["LastReportTime"].IsNull())
    {
        if (!value["LastReportTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.LastReportTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastReportTime = string(value["LastReportTime"].GetString());
        m_lastReportTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastReportTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastReportTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastReportTime.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

}


string DeviceInfo::GetDeviceId() const
{
    return m_deviceId;
}

void DeviceInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DeviceInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string DeviceInfo::GetDeviceName() const
{
    return m_deviceName;
}

void DeviceInfo::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeviceInfo::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DeviceInfo::GetDeviceStatus() const
{
    return m_deviceStatus;
}

void DeviceInfo::SetDeviceStatus(const string& _deviceStatus)
{
    m_deviceStatus = _deviceStatus;
    m_deviceStatusHasBeenSet = true;
}

bool DeviceInfo::DeviceStatusHasBeenSet() const
{
    return m_deviceStatusHasBeenSet;
}

string DeviceInfo::GetDeviceType() const
{
    return m_deviceType;
}

void DeviceInfo::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DeviceInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string DeviceInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void DeviceInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool DeviceInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string DeviceInfo::GetLastReportTime() const
{
    return m_lastReportTime;
}

void DeviceInfo::SetLastReportTime(const string& _lastReportTime)
{
    m_lastReportTime = _lastReportTime;
    m_lastReportTimeHasBeenSet = true;
}

bool DeviceInfo::LastReportTimeHasBeenSet() const
{
    return m_lastReportTimeHasBeenSet;
}

string DeviceInfo::GetProjectId() const
{
    return m_projectId;
}

void DeviceInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DeviceInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

