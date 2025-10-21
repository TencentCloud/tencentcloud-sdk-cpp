/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ioa/v20220601/model/DeviceVirtualDeviceGroupsDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DeviceVirtualDeviceGroupsDetail::DeviceVirtualDeviceGroupsDetail() :
    m_idHasBeenSet(false),
    m_deviceVirtualGroupNameHasBeenSet(false),
    m_deviceCountHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_itimeHasBeenSet(false),
    m_utimeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceVirtualDeviceGroupsDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceVirtualDeviceGroupsDetail.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DeviceVirtualGroupName") && !value["DeviceVirtualGroupName"].IsNull())
    {
        if (!value["DeviceVirtualGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceVirtualDeviceGroupsDetail.DeviceVirtualGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceVirtualGroupName = string(value["DeviceVirtualGroupName"].GetString());
        m_deviceVirtualGroupNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceCount") && !value["DeviceCount"].IsNull())
    {
        if (!value["DeviceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceVirtualDeviceGroupsDetail.DeviceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceCount = value["DeviceCount"].GetInt64();
        m_deviceCountHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceVirtualDeviceGroupsDetail.OsType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_osType = value["OsType"].GetInt64();
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("Itime") && !value["Itime"].IsNull())
    {
        if (!value["Itime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceVirtualDeviceGroupsDetail.Itime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itime = string(value["Itime"].GetString());
        m_itimeHasBeenSet = true;
    }

    if (value.HasMember("Utime") && !value["Utime"].IsNull())
    {
        if (!value["Utime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceVirtualDeviceGroupsDetail.Utime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_utime = string(value["Utime"].GetString());
        m_utimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceVirtualDeviceGroupsDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_deviceVirtualGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceVirtualGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceVirtualGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceCount, allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osType, allocator);
    }

    if (m_itimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Itime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itime.c_str(), allocator).Move(), allocator);
    }

    if (m_utimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Utime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_utime.c_str(), allocator).Move(), allocator);
    }

}


int64_t DeviceVirtualDeviceGroupsDetail::GetId() const
{
    return m_id;
}

void DeviceVirtualDeviceGroupsDetail::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DeviceVirtualDeviceGroupsDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DeviceVirtualDeviceGroupsDetail::GetDeviceVirtualGroupName() const
{
    return m_deviceVirtualGroupName;
}

void DeviceVirtualDeviceGroupsDetail::SetDeviceVirtualGroupName(const string& _deviceVirtualGroupName)
{
    m_deviceVirtualGroupName = _deviceVirtualGroupName;
    m_deviceVirtualGroupNameHasBeenSet = true;
}

bool DeviceVirtualDeviceGroupsDetail::DeviceVirtualGroupNameHasBeenSet() const
{
    return m_deviceVirtualGroupNameHasBeenSet;
}

int64_t DeviceVirtualDeviceGroupsDetail::GetDeviceCount() const
{
    return m_deviceCount;
}

void DeviceVirtualDeviceGroupsDetail::SetDeviceCount(const int64_t& _deviceCount)
{
    m_deviceCount = _deviceCount;
    m_deviceCountHasBeenSet = true;
}

bool DeviceVirtualDeviceGroupsDetail::DeviceCountHasBeenSet() const
{
    return m_deviceCountHasBeenSet;
}

int64_t DeviceVirtualDeviceGroupsDetail::GetOsType() const
{
    return m_osType;
}

void DeviceVirtualDeviceGroupsDetail::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool DeviceVirtualDeviceGroupsDetail::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string DeviceVirtualDeviceGroupsDetail::GetItime() const
{
    return m_itime;
}

void DeviceVirtualDeviceGroupsDetail::SetItime(const string& _itime)
{
    m_itime = _itime;
    m_itimeHasBeenSet = true;
}

bool DeviceVirtualDeviceGroupsDetail::ItimeHasBeenSet() const
{
    return m_itimeHasBeenSet;
}

string DeviceVirtualDeviceGroupsDetail::GetUtime() const
{
    return m_utime;
}

void DeviceVirtualDeviceGroupsDetail::SetUtime(const string& _utime)
{
    m_utime = _utime;
    m_utimeHasBeenSet = true;
}

bool DeviceVirtualDeviceGroupsDetail::UtimeHasBeenSet() const
{
    return m_utimeHasBeenSet;
}

