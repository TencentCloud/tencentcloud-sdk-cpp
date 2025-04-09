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

#include <tencentcloud/gwlb/v20240906/model/CreateTargetGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

CreateTargetGroupRequest::CreateTargetGroupRequest() :
    m_targetGroupNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_targetGroupInstancesHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_scheduleAlgorithmHasBeenSet(false),
    m_allDeadToAliveHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateTargetGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_targetGroupInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupInstances";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetGroupInstances.begin(); itr != m_targetGroupInstances.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_scheduleAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_allDeadToAliveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllDeadToAlive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allDeadToAlive, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


string CreateTargetGroupRequest::GetTargetGroupName() const
{
    return m_targetGroupName;
}

void CreateTargetGroupRequest::SetTargetGroupName(const string& _targetGroupName)
{
    m_targetGroupName = _targetGroupName;
    m_targetGroupNameHasBeenSet = true;
}

bool CreateTargetGroupRequest::TargetGroupNameHasBeenSet() const
{
    return m_targetGroupNameHasBeenSet;
}

string CreateTargetGroupRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateTargetGroupRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateTargetGroupRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

uint64_t CreateTargetGroupRequest::GetPort() const
{
    return m_port;
}

void CreateTargetGroupRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateTargetGroupRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

vector<TargetGroupInstance> CreateTargetGroupRequest::GetTargetGroupInstances() const
{
    return m_targetGroupInstances;
}

void CreateTargetGroupRequest::SetTargetGroupInstances(const vector<TargetGroupInstance>& _targetGroupInstances)
{
    m_targetGroupInstances = _targetGroupInstances;
    m_targetGroupInstancesHasBeenSet = true;
}

bool CreateTargetGroupRequest::TargetGroupInstancesHasBeenSet() const
{
    return m_targetGroupInstancesHasBeenSet;
}

string CreateTargetGroupRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateTargetGroupRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateTargetGroupRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

TargetGroupHealthCheck CreateTargetGroupRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void CreateTargetGroupRequest::SetHealthCheck(const TargetGroupHealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool CreateTargetGroupRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

string CreateTargetGroupRequest::GetScheduleAlgorithm() const
{
    return m_scheduleAlgorithm;
}

void CreateTargetGroupRequest::SetScheduleAlgorithm(const string& _scheduleAlgorithm)
{
    m_scheduleAlgorithm = _scheduleAlgorithm;
    m_scheduleAlgorithmHasBeenSet = true;
}

bool CreateTargetGroupRequest::ScheduleAlgorithmHasBeenSet() const
{
    return m_scheduleAlgorithmHasBeenSet;
}

bool CreateTargetGroupRequest::GetAllDeadToAlive() const
{
    return m_allDeadToAlive;
}

void CreateTargetGroupRequest::SetAllDeadToAlive(const bool& _allDeadToAlive)
{
    m_allDeadToAlive = _allDeadToAlive;
    m_allDeadToAliveHasBeenSet = true;
}

bool CreateTargetGroupRequest::AllDeadToAliveHasBeenSet() const
{
    return m_allDeadToAliveHasBeenSet;
}

vector<TagInfo> CreateTargetGroupRequest::GetTags() const
{
    return m_tags;
}

void CreateTargetGroupRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateTargetGroupRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


