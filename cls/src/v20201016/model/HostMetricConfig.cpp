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

#include <tencentcloud/cls/v20201016/model/HostMetricConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

HostMetricConfig::HostMetricConfig() :
    m_configIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_hostMetricItemsHasBeenSet(false),
    m_machineGroupIdsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome HostMetricConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostMetricConfig.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostMetricConfig.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostMetricConfig.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("HostMetricItems") && !value["HostMetricItems"].IsNull())
    {
        if (!value["HostMetricItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostMetricConfig.HostMetricItems` is not array type"));

        const rapidjson::Value &tmpValue = value["HostMetricItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HostMetricItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hostMetricItems.push_back(item);
        }
        m_hostMetricItemsHasBeenSet = true;
    }

    if (value.HasMember("MachineGroupIds") && !value["MachineGroupIds"].IsNull())
    {
        if (!value["MachineGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostMetricConfig.MachineGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["MachineGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_machineGroupIds.push_back((*itr).GetString());
        }
        m_machineGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostMetricConfig.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostMetricConfig.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostMetricConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_hostMetricItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostMetricItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostMetricItems.begin(); itr != m_hostMetricItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_machineGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_machineGroupIds.begin(); itr != m_machineGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string HostMetricConfig::GetConfigId() const
{
    return m_configId;
}

void HostMetricConfig::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool HostMetricConfig::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string HostMetricConfig::GetName() const
{
    return m_name;
}

void HostMetricConfig::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HostMetricConfig::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t HostMetricConfig::GetInterval() const
{
    return m_interval;
}

void HostMetricConfig::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool HostMetricConfig::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

vector<HostMetricItem> HostMetricConfig::GetHostMetricItems() const
{
    return m_hostMetricItems;
}

void HostMetricConfig::SetHostMetricItems(const vector<HostMetricItem>& _hostMetricItems)
{
    m_hostMetricItems = _hostMetricItems;
    m_hostMetricItemsHasBeenSet = true;
}

bool HostMetricConfig::HostMetricItemsHasBeenSet() const
{
    return m_hostMetricItemsHasBeenSet;
}

vector<string> HostMetricConfig::GetMachineGroupIds() const
{
    return m_machineGroupIds;
}

void HostMetricConfig::SetMachineGroupIds(const vector<string>& _machineGroupIds)
{
    m_machineGroupIds = _machineGroupIds;
    m_machineGroupIdsHasBeenSet = true;
}

bool HostMetricConfig::MachineGroupIdsHasBeenSet() const
{
    return m_machineGroupIdsHasBeenSet;
}

uint64_t HostMetricConfig::GetCreateTime() const
{
    return m_createTime;
}

void HostMetricConfig::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HostMetricConfig::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t HostMetricConfig::GetUpdateTime() const
{
    return m_updateTime;
}

void HostMetricConfig::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool HostMetricConfig::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

