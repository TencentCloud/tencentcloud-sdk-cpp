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

#include <tencentcloud/iotvideoindustry/v20201201/model/WarningsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

WarningsData::WarningsData() :
    m_idHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_warnChannelHasBeenSet(false),
    m_warnLevelHasBeenSet(false),
    m_warnLevelNameHasBeenSet(false),
    m_warnModeHasBeenSet(false),
    m_warnModeNameHasBeenSet(false),
    m_warnTypeHasBeenSet(false),
    m_delHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome WarningsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarningsData.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarningsData.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarningsData.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("WarnChannel") && !value["WarnChannel"].IsNull())
    {
        if (!value["WarnChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarningsData.WarnChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warnChannel = string(value["WarnChannel"].GetString());
        m_warnChannelHasBeenSet = true;
    }

    if (value.HasMember("WarnLevel") && !value["WarnLevel"].IsNull())
    {
        if (!value["WarnLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarningsData.WarnLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_warnLevel = value["WarnLevel"].GetInt64();
        m_warnLevelHasBeenSet = true;
    }

    if (value.HasMember("WarnLevelName") && !value["WarnLevelName"].IsNull())
    {
        if (!value["WarnLevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarningsData.WarnLevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warnLevelName = string(value["WarnLevelName"].GetString());
        m_warnLevelNameHasBeenSet = true;
    }

    if (value.HasMember("WarnMode") && !value["WarnMode"].IsNull())
    {
        if (!value["WarnMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarningsData.WarnMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_warnMode = value["WarnMode"].GetInt64();
        m_warnModeHasBeenSet = true;
    }

    if (value.HasMember("WarnModeName") && !value["WarnModeName"].IsNull())
    {
        if (!value["WarnModeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarningsData.WarnModeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warnModeName = string(value["WarnModeName"].GetString());
        m_warnModeNameHasBeenSet = true;
    }

    if (value.HasMember("WarnType") && !value["WarnType"].IsNull())
    {
        if (!value["WarnType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarningsData.WarnType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_warnType = value["WarnType"].GetInt64();
        m_warnTypeHasBeenSet = true;
    }

    if (value.HasMember("Del") && !value["Del"].IsNull())
    {
        if (!value["Del"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WarningsData.Del` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_del = value["Del"].GetInt64();
        m_delHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarningsData.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WarningsData.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WarningsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

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

    if (m_warnChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warnChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_warnLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warnLevel, allocator);
    }

    if (m_warnLevelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnLevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warnLevelName.c_str(), allocator).Move(), allocator);
    }

    if (m_warnModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warnMode, allocator);
    }

    if (m_warnModeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnModeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warnModeName.c_str(), allocator).Move(), allocator);
    }

    if (m_warnTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warnType, allocator);
    }

    if (m_delHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Del";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_del, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t WarningsData::GetId() const
{
    return m_id;
}

void WarningsData::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool WarningsData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string WarningsData::GetDeviceId() const
{
    return m_deviceId;
}

void WarningsData::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool WarningsData::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string WarningsData::GetDeviceName() const
{
    return m_deviceName;
}

void WarningsData::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool WarningsData::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string WarningsData::GetWarnChannel() const
{
    return m_warnChannel;
}

void WarningsData::SetWarnChannel(const string& _warnChannel)
{
    m_warnChannel = _warnChannel;
    m_warnChannelHasBeenSet = true;
}

bool WarningsData::WarnChannelHasBeenSet() const
{
    return m_warnChannelHasBeenSet;
}

int64_t WarningsData::GetWarnLevel() const
{
    return m_warnLevel;
}

void WarningsData::SetWarnLevel(const int64_t& _warnLevel)
{
    m_warnLevel = _warnLevel;
    m_warnLevelHasBeenSet = true;
}

bool WarningsData::WarnLevelHasBeenSet() const
{
    return m_warnLevelHasBeenSet;
}

string WarningsData::GetWarnLevelName() const
{
    return m_warnLevelName;
}

void WarningsData::SetWarnLevelName(const string& _warnLevelName)
{
    m_warnLevelName = _warnLevelName;
    m_warnLevelNameHasBeenSet = true;
}

bool WarningsData::WarnLevelNameHasBeenSet() const
{
    return m_warnLevelNameHasBeenSet;
}

int64_t WarningsData::GetWarnMode() const
{
    return m_warnMode;
}

void WarningsData::SetWarnMode(const int64_t& _warnMode)
{
    m_warnMode = _warnMode;
    m_warnModeHasBeenSet = true;
}

bool WarningsData::WarnModeHasBeenSet() const
{
    return m_warnModeHasBeenSet;
}

string WarningsData::GetWarnModeName() const
{
    return m_warnModeName;
}

void WarningsData::SetWarnModeName(const string& _warnModeName)
{
    m_warnModeName = _warnModeName;
    m_warnModeNameHasBeenSet = true;
}

bool WarningsData::WarnModeNameHasBeenSet() const
{
    return m_warnModeNameHasBeenSet;
}

int64_t WarningsData::GetWarnType() const
{
    return m_warnType;
}

void WarningsData::SetWarnType(const int64_t& _warnType)
{
    m_warnType = _warnType;
    m_warnTypeHasBeenSet = true;
}

bool WarningsData::WarnTypeHasBeenSet() const
{
    return m_warnTypeHasBeenSet;
}

int64_t WarningsData::GetDel() const
{
    return m_del;
}

void WarningsData::SetDel(const int64_t& _del)
{
    m_del = _del;
    m_delHasBeenSet = true;
}

bool WarningsData::DelHasBeenSet() const
{
    return m_delHasBeenSet;
}

string WarningsData::GetCreateTime() const
{
    return m_createTime;
}

void WarningsData::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WarningsData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WarningsData::GetUpdateTime() const
{
    return m_updateTime;
}

void WarningsData::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WarningsData::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

