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

#include <tencentcloud/cat/v20180409/model/CreateProbeTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

CreateProbeTasksRequest::CreateProbeTasksRequest() :
    m_batchTasksHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_taskCategoryHasBeenSet(false),
    m_cronHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_probeTypeHasBeenSet(false),
    m_pluginSourceHasBeenSet(false),
    m_clientNumHasBeenSet(false),
    m_nodeIpTypeHasBeenSet(false),
    m_subSyncFlagHasBeenSet(false),
    m_rtxNameHasBeenSet(false)
{
}

string CreateProbeTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
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

    if (m_taskCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskCategory, allocator);
    }

    if (m_cronHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cron";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cron.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_probeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_probeType, allocator);
    }

    if (m_pluginSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pluginSource.c_str(), allocator).Move(), allocator);
    }

    if (m_clientNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientNum.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeIpType, allocator);
    }

    if (m_subSyncFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubSyncFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subSyncFlag, allocator);
    }

    if (m_rtxNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RtxName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rtxName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<ProbeTaskBasicConfiguration> CreateProbeTasksRequest::GetBatchTasks() const
{
    return m_batchTasks;
}

void CreateProbeTasksRequest::SetBatchTasks(const vector<ProbeTaskBasicConfiguration>& _batchTasks)
{
    m_batchTasks = _batchTasks;
    m_batchTasksHasBeenSet = true;
}

bool CreateProbeTasksRequest::BatchTasksHasBeenSet() const
{
    return m_batchTasksHasBeenSet;
}

int64_t CreateProbeTasksRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateProbeTasksRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateProbeTasksRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<string> CreateProbeTasksRequest::GetNodes() const
{
    return m_nodes;
}

void CreateProbeTasksRequest::SetNodes(const vector<string>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool CreateProbeTasksRequest::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

int64_t CreateProbeTasksRequest::GetInterval() const
{
    return m_interval;
}

void CreateProbeTasksRequest::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool CreateProbeTasksRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string CreateProbeTasksRequest::GetParameters() const
{
    return m_parameters;
}

void CreateProbeTasksRequest::SetParameters(const string& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool CreateProbeTasksRequest::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

int64_t CreateProbeTasksRequest::GetTaskCategory() const
{
    return m_taskCategory;
}

void CreateProbeTasksRequest::SetTaskCategory(const int64_t& _taskCategory)
{
    m_taskCategory = _taskCategory;
    m_taskCategoryHasBeenSet = true;
}

bool CreateProbeTasksRequest::TaskCategoryHasBeenSet() const
{
    return m_taskCategoryHasBeenSet;
}

string CreateProbeTasksRequest::GetCron() const
{
    return m_cron;
}

void CreateProbeTasksRequest::SetCron(const string& _cron)
{
    m_cron = _cron;
    m_cronHasBeenSet = true;
}

bool CreateProbeTasksRequest::CronHasBeenSet() const
{
    return m_cronHasBeenSet;
}

vector<Tag> CreateProbeTasksRequest::GetTag() const
{
    return m_tag;
}

void CreateProbeTasksRequest::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool CreateProbeTasksRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

uint64_t CreateProbeTasksRequest::GetProbeType() const
{
    return m_probeType;
}

void CreateProbeTasksRequest::SetProbeType(const uint64_t& _probeType)
{
    m_probeType = _probeType;
    m_probeTypeHasBeenSet = true;
}

bool CreateProbeTasksRequest::ProbeTypeHasBeenSet() const
{
    return m_probeTypeHasBeenSet;
}

string CreateProbeTasksRequest::GetPluginSource() const
{
    return m_pluginSource;
}

void CreateProbeTasksRequest::SetPluginSource(const string& _pluginSource)
{
    m_pluginSource = _pluginSource;
    m_pluginSourceHasBeenSet = true;
}

bool CreateProbeTasksRequest::PluginSourceHasBeenSet() const
{
    return m_pluginSourceHasBeenSet;
}

string CreateProbeTasksRequest::GetClientNum() const
{
    return m_clientNum;
}

void CreateProbeTasksRequest::SetClientNum(const string& _clientNum)
{
    m_clientNum = _clientNum;
    m_clientNumHasBeenSet = true;
}

bool CreateProbeTasksRequest::ClientNumHasBeenSet() const
{
    return m_clientNumHasBeenSet;
}

int64_t CreateProbeTasksRequest::GetNodeIpType() const
{
    return m_nodeIpType;
}

void CreateProbeTasksRequest::SetNodeIpType(const int64_t& _nodeIpType)
{
    m_nodeIpType = _nodeIpType;
    m_nodeIpTypeHasBeenSet = true;
}

bool CreateProbeTasksRequest::NodeIpTypeHasBeenSet() const
{
    return m_nodeIpTypeHasBeenSet;
}

int64_t CreateProbeTasksRequest::GetSubSyncFlag() const
{
    return m_subSyncFlag;
}

void CreateProbeTasksRequest::SetSubSyncFlag(const int64_t& _subSyncFlag)
{
    m_subSyncFlag = _subSyncFlag;
    m_subSyncFlagHasBeenSet = true;
}

bool CreateProbeTasksRequest::SubSyncFlagHasBeenSet() const
{
    return m_subSyncFlagHasBeenSet;
}

string CreateProbeTasksRequest::GetRtxName() const
{
    return m_rtxName;
}

void CreateProbeTasksRequest::SetRtxName(const string& _rtxName)
{
    m_rtxName = _rtxName;
    m_rtxNameHasBeenSet = true;
}

bool CreateProbeTasksRequest::RtxNameHasBeenSet() const
{
    return m_rtxNameHasBeenSet;
}


