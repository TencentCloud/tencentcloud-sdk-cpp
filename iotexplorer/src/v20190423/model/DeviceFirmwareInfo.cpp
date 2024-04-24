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

#include <tencentcloud/iotexplorer/v20190423/model/DeviceFirmwareInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DeviceFirmwareInfo::DeviceFirmwareInfo() :
    m_fwTypeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceFirmwareInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FwType") && !value["FwType"].IsNull())
    {
        if (!value["FwType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceFirmwareInfo.FwType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwType = string(value["FwType"].GetString());
        m_fwTypeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceFirmwareInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceFirmwareInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceFirmwareInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwType.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string DeviceFirmwareInfo::GetFwType() const
{
    return m_fwType;
}

void DeviceFirmwareInfo::SetFwType(const string& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool DeviceFirmwareInfo::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

string DeviceFirmwareInfo::GetVersion() const
{
    return m_version;
}

void DeviceFirmwareInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DeviceFirmwareInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

uint64_t DeviceFirmwareInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DeviceFirmwareInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DeviceFirmwareInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

