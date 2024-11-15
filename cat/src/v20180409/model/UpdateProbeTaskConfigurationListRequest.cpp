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

#include <tencentcloud/cat/v20180409/model/UpdateProbeTaskConfigurationListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

UpdateProbeTaskConfigurationListRequest::UpdateProbeTaskConfigurationListRequest() :
    m_taskIdsHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_cronHasBeenSet(false),
    m_resourceIDsHasBeenSet(false),
    m_nodeIpTypeHasBeenSet(false),
    m_batchTasksHasBeenSet(false)
{
}

string UpdateProbeTaskConfigurationListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIds.begin(); itr != m_taskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodes.begin(); itr != m_nodes.end(); ++itr)
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

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parameters.c_str(), allocator).Move(), allocator);
    }

    if (m_cronHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cron";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cron.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIDs.begin(); itr != m_resourceIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nodeIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeIpType, allocator);
    }

    if (m_batchTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchTasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_batchTasks.begin(); itr != m_batchTasks.end(); ++itr, ++i)
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


vector<string> UpdateProbeTaskConfigurationListRequest::GetTaskIds() const
{
    return m_taskIds;
}

void UpdateProbeTaskConfigurationListRequest::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool UpdateProbeTaskConfigurationListRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

vector<string> UpdateProbeTaskConfigurationListRequest::GetNodes() const
{
    return m_nodes;
}

void UpdateProbeTaskConfigurationListRequest::SetNodes(const vector<string>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool UpdateProbeTaskConfigurationListRequest::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

int64_t UpdateProbeTaskConfigurationListRequest::GetInterval() const
{
    return m_interval;
}

void UpdateProbeTaskConfigurationListRequest::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool UpdateProbeTaskConfigurationListRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string UpdateProbeTaskConfigurationListRequest::GetParameters() const
{
    return m_parameters;
}

void UpdateProbeTaskConfigurationListRequest::SetParameters(const string& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool UpdateProbeTaskConfigurationListRequest::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

string UpdateProbeTaskConfigurationListRequest::GetCron() const
{
    return m_cron;
}

void UpdateProbeTaskConfigurationListRequest::SetCron(const string& _cron)
{
    m_cron = _cron;
    m_cronHasBeenSet = true;
}

bool UpdateProbeTaskConfigurationListRequest::CronHasBeenSet() const
{
    return m_cronHasBeenSet;
}

vector<string> UpdateProbeTaskConfigurationListRequest::GetResourceIDs() const
{
    return m_resourceIDs;
}

void UpdateProbeTaskConfigurationListRequest::SetResourceIDs(const vector<string>& _resourceIDs)
{
    m_resourceIDs = _resourceIDs;
    m_resourceIDsHasBeenSet = true;
}

bool UpdateProbeTaskConfigurationListRequest::ResourceIDsHasBeenSet() const
{
    return m_resourceIDsHasBeenSet;
}

int64_t UpdateProbeTaskConfigurationListRequest::GetNodeIpType() const
{
    return m_nodeIpType;
}

void UpdateProbeTaskConfigurationListRequest::SetNodeIpType(const int64_t& _nodeIpType)
{
    m_nodeIpType = _nodeIpType;
    m_nodeIpTypeHasBeenSet = true;
}

bool UpdateProbeTaskConfigurationListRequest::NodeIpTypeHasBeenSet() const
{
    return m_nodeIpTypeHasBeenSet;
}

vector<ProbeTaskBasicConfiguration> UpdateProbeTaskConfigurationListRequest::GetBatchTasks() const
{
    return m_batchTasks;
}

void UpdateProbeTaskConfigurationListRequest::SetBatchTasks(const vector<ProbeTaskBasicConfiguration>& _batchTasks)
{
    m_batchTasks = _batchTasks;
    m_batchTasksHasBeenSet = true;
}

bool UpdateProbeTaskConfigurationListRequest::BatchTasksHasBeenSet() const
{
    return m_batchTasksHasBeenSet;
}


