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

#include <tencentcloud/cdwdoris/v20211228/model/RestartClusterForNodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

RestartClusterForNodeRequest::RestartClusterForNodeRequest() :
    m_instanceIdHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_batchSizeHasBeenSet(false),
    m_nodeListHasBeenSet(false),
    m_rollingRestartHasBeenSet(false)
{
}

string RestartClusterForNodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_batchSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_batchSize, allocator);
    }

    if (m_nodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeList.begin(); itr != m_nodeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rollingRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollingRestart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rollingRestart, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RestartClusterForNodeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RestartClusterForNodeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RestartClusterForNodeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RestartClusterForNodeRequest::GetConfigName() const
{
    return m_configName;
}

void RestartClusterForNodeRequest::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool RestartClusterForNodeRequest::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

int64_t RestartClusterForNodeRequest::GetBatchSize() const
{
    return m_batchSize;
}

void RestartClusterForNodeRequest::SetBatchSize(const int64_t& _batchSize)
{
    m_batchSize = _batchSize;
    m_batchSizeHasBeenSet = true;
}

bool RestartClusterForNodeRequest::BatchSizeHasBeenSet() const
{
    return m_batchSizeHasBeenSet;
}

vector<string> RestartClusterForNodeRequest::GetNodeList() const
{
    return m_nodeList;
}

void RestartClusterForNodeRequest::SetNodeList(const vector<string>& _nodeList)
{
    m_nodeList = _nodeList;
    m_nodeListHasBeenSet = true;
}

bool RestartClusterForNodeRequest::NodeListHasBeenSet() const
{
    return m_nodeListHasBeenSet;
}

bool RestartClusterForNodeRequest::GetRollingRestart() const
{
    return m_rollingRestart;
}

void RestartClusterForNodeRequest::SetRollingRestart(const bool& _rollingRestart)
{
    m_rollingRestart = _rollingRestart;
    m_rollingRestartHasBeenSet = true;
}

bool RestartClusterForNodeRequest::RollingRestartHasBeenSet() const
{
    return m_rollingRestartHasBeenSet;
}


