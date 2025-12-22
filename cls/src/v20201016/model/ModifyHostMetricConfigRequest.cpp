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

#include <tencentcloud/cls/v20201016/model/ModifyHostMetricConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyHostMetricConfigRequest::ModifyHostMetricConfigRequest() :
    m_topicIdHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_machineGroupIdsHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_hostMetricItemsHasBeenSet(false)
{
}

string ModifyHostMetricConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_machineGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_machineGroupIds.begin(); itr != m_machineGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interval, allocator);
    }

    if (m_hostMetricItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostMetricItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostMetricItems.begin(); itr != m_hostMetricItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyHostMetricConfigRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyHostMetricConfigRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyHostMetricConfigRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ModifyHostMetricConfigRequest::GetConfigId() const
{
    return m_configId;
}

void ModifyHostMetricConfigRequest::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ModifyHostMetricConfigRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string ModifyHostMetricConfigRequest::GetName() const
{
    return m_name;
}

void ModifyHostMetricConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyHostMetricConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> ModifyHostMetricConfigRequest::GetMachineGroupIds() const
{
    return m_machineGroupIds;
}

void ModifyHostMetricConfigRequest::SetMachineGroupIds(const vector<string>& _machineGroupIds)
{
    m_machineGroupIds = _machineGroupIds;
    m_machineGroupIdsHasBeenSet = true;
}

bool ModifyHostMetricConfigRequest::MachineGroupIdsHasBeenSet() const
{
    return m_machineGroupIdsHasBeenSet;
}

uint64_t ModifyHostMetricConfigRequest::GetInterval() const
{
    return m_interval;
}

void ModifyHostMetricConfigRequest::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool ModifyHostMetricConfigRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

vector<HostMetricItem> ModifyHostMetricConfigRequest::GetHostMetricItems() const
{
    return m_hostMetricItems;
}

void ModifyHostMetricConfigRequest::SetHostMetricItems(const vector<HostMetricItem>& _hostMetricItems)
{
    m_hostMetricItems = _hostMetricItems;
    m_hostMetricItemsHasBeenSet = true;
}

bool ModifyHostMetricConfigRequest::HostMetricItemsHasBeenSet() const
{
    return m_hostMetricItemsHasBeenSet;
}


