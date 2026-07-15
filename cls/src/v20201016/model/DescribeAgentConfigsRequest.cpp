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

#include <tencentcloud/cls/v20201016/model/DescribeAgentConfigsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeAgentConfigsRequest::DescribeAgentConfigsRequest() :
    m_agentVersionHasBeenSet(false),
    m_agentIpHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string DescribeAgentConfigsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentIp.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAgentConfigsRequest::GetAgentVersion() const
{
    return m_agentVersion;
}

void DescribeAgentConfigsRequest::SetAgentVersion(const string& _agentVersion)
{
    m_agentVersion = _agentVersion;
    m_agentVersionHasBeenSet = true;
}

bool DescribeAgentConfigsRequest::AgentVersionHasBeenSet() const
{
    return m_agentVersionHasBeenSet;
}

string DescribeAgentConfigsRequest::GetAgentIp() const
{
    return m_agentIp;
}

void DescribeAgentConfigsRequest::SetAgentIp(const string& _agentIp)
{
    m_agentIp = _agentIp;
    m_agentIpHasBeenSet = true;
}

bool DescribeAgentConfigsRequest::AgentIpHasBeenSet() const
{
    return m_agentIpHasBeenSet;
}

vector<string> DescribeAgentConfigsRequest::GetLabels() const
{
    return m_labels;
}

void DescribeAgentConfigsRequest::SetLabels(const vector<string>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DescribeAgentConfigsRequest::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

string DescribeAgentConfigsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeAgentConfigsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeAgentConfigsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


