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

#include <tencentcloud/es/v20180416/model/DescribeInstancePluginInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeInstancePluginInfo::DescribeInstancePluginInfo() :
    m_pluginNameHasBeenSet(false),
    m_pluginVersionHasBeenSet(false),
    m_pluginDescHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_removableHasBeenSet(false),
    m_pluginTypeHasBeenSet(false),
    m_pluginUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstancePluginInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PluginName") && !value["PluginName"].IsNull())
    {
        if (!value["PluginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstancePluginInfo.PluginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginName = string(value["PluginName"].GetString());
        m_pluginNameHasBeenSet = true;
    }

    if (value.HasMember("PluginVersion") && !value["PluginVersion"].IsNull())
    {
        if (!value["PluginVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstancePluginInfo.PluginVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginVersion = string(value["PluginVersion"].GetString());
        m_pluginVersionHasBeenSet = true;
    }

    if (value.HasMember("PluginDesc") && !value["PluginDesc"].IsNull())
    {
        if (!value["PluginDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstancePluginInfo.PluginDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginDesc = string(value["PluginDesc"].GetString());
        m_pluginDescHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstancePluginInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Removable") && !value["Removable"].IsNull())
    {
        if (!value["Removable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstancePluginInfo.Removable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_removable = value["Removable"].GetBool();
        m_removableHasBeenSet = true;
    }

    if (value.HasMember("PluginType") && !value["PluginType"].IsNull())
    {
        if (!value["PluginType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstancePluginInfo.PluginType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pluginType = value["PluginType"].GetInt64();
        m_pluginTypeHasBeenSet = true;
    }

    if (value.HasMember("PluginUpdateTime") && !value["PluginUpdateTime"].IsNull())
    {
        if (!value["PluginUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstancePluginInfo.PluginUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginUpdateTime = string(value["PluginUpdateTime"].GetString());
        m_pluginUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeInstancePluginInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pluginNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginName.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_removableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Removable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removable, allocator);
    }

    if (m_pluginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pluginType, allocator);
    }

    if (m_pluginUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginUpdateTime.c_str(), allocator).Move(), allocator);
    }

}


string DescribeInstancePluginInfo::GetPluginName() const
{
    return m_pluginName;
}

void DescribeInstancePluginInfo::SetPluginName(const string& _pluginName)
{
    m_pluginName = _pluginName;
    m_pluginNameHasBeenSet = true;
}

bool DescribeInstancePluginInfo::PluginNameHasBeenSet() const
{
    return m_pluginNameHasBeenSet;
}

string DescribeInstancePluginInfo::GetPluginVersion() const
{
    return m_pluginVersion;
}

void DescribeInstancePluginInfo::SetPluginVersion(const string& _pluginVersion)
{
    m_pluginVersion = _pluginVersion;
    m_pluginVersionHasBeenSet = true;
}

bool DescribeInstancePluginInfo::PluginVersionHasBeenSet() const
{
    return m_pluginVersionHasBeenSet;
}

string DescribeInstancePluginInfo::GetPluginDesc() const
{
    return m_pluginDesc;
}

void DescribeInstancePluginInfo::SetPluginDesc(const string& _pluginDesc)
{
    m_pluginDesc = _pluginDesc;
    m_pluginDescHasBeenSet = true;
}

bool DescribeInstancePluginInfo::PluginDescHasBeenSet() const
{
    return m_pluginDescHasBeenSet;
}

int64_t DescribeInstancePluginInfo::GetStatus() const
{
    return m_status;
}

void DescribeInstancePluginInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeInstancePluginInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool DescribeInstancePluginInfo::GetRemovable() const
{
    return m_removable;
}

void DescribeInstancePluginInfo::SetRemovable(const bool& _removable)
{
    m_removable = _removable;
    m_removableHasBeenSet = true;
}

bool DescribeInstancePluginInfo::RemovableHasBeenSet() const
{
    return m_removableHasBeenSet;
}

int64_t DescribeInstancePluginInfo::GetPluginType() const
{
    return m_pluginType;
}

void DescribeInstancePluginInfo::SetPluginType(const int64_t& _pluginType)
{
    m_pluginType = _pluginType;
    m_pluginTypeHasBeenSet = true;
}

bool DescribeInstancePluginInfo::PluginTypeHasBeenSet() const
{
    return m_pluginTypeHasBeenSet;
}

string DescribeInstancePluginInfo::GetPluginUpdateTime() const
{
    return m_pluginUpdateTime;
}

void DescribeInstancePluginInfo::SetPluginUpdateTime(const string& _pluginUpdateTime)
{
    m_pluginUpdateTime = _pluginUpdateTime;
    m_pluginUpdateTimeHasBeenSet = true;
}

bool DescribeInstancePluginInfo::PluginUpdateTimeHasBeenSet() const
{
    return m_pluginUpdateTimeHasBeenSet;
}

