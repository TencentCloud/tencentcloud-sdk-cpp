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

#include <tencentcloud/tdmq/v20200217/model/CreateRabbitMQVirtualHostRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateRabbitMQVirtualHostRequest::CreateRabbitMQVirtualHostRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_traceFlagHasBeenSet(false),
    m_mirrorQueuePolicyFlagHasBeenSet(false)
{
}

string CreateRabbitMQVirtualHostRequest::ToJsonString() const
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

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_traceFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_traceFlag, allocator);
    }

    if (m_mirrorQueuePolicyFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MirrorQueuePolicyFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mirrorQueuePolicyFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRabbitMQVirtualHostRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateRabbitMQVirtualHostRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateRabbitMQVirtualHostRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateRabbitMQVirtualHostRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void CreateRabbitMQVirtualHostRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool CreateRabbitMQVirtualHostRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string CreateRabbitMQVirtualHostRequest::GetDescription() const
{
    return m_description;
}

void CreateRabbitMQVirtualHostRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRabbitMQVirtualHostRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool CreateRabbitMQVirtualHostRequest::GetTraceFlag() const
{
    return m_traceFlag;
}

void CreateRabbitMQVirtualHostRequest::SetTraceFlag(const bool& _traceFlag)
{
    m_traceFlag = _traceFlag;
    m_traceFlagHasBeenSet = true;
}

bool CreateRabbitMQVirtualHostRequest::TraceFlagHasBeenSet() const
{
    return m_traceFlagHasBeenSet;
}

bool CreateRabbitMQVirtualHostRequest::GetMirrorQueuePolicyFlag() const
{
    return m_mirrorQueuePolicyFlag;
}

void CreateRabbitMQVirtualHostRequest::SetMirrorQueuePolicyFlag(const bool& _mirrorQueuePolicyFlag)
{
    m_mirrorQueuePolicyFlag = _mirrorQueuePolicyFlag;
    m_mirrorQueuePolicyFlagHasBeenSet = true;
}

bool CreateRabbitMQVirtualHostRequest::MirrorQueuePolicyFlagHasBeenSet() const
{
    return m_mirrorQueuePolicyFlagHasBeenSet;
}


