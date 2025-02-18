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

#include <tencentcloud/trabbit/v20230418/model/CreateRabbitMQServerlessVirtualHostRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

CreateRabbitMQServerlessVirtualHostRequest::CreateRabbitMQServerlessVirtualHostRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_traceFlagHasBeenSet(false),
    m_mirrorQueuePolicyFlagHasBeenSet(false)
{
}

string CreateRabbitMQServerlessVirtualHostRequest::ToJsonString() const
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


string CreateRabbitMQServerlessVirtualHostRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateRabbitMQServerlessVirtualHostRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateRabbitMQServerlessVirtualHostRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateRabbitMQServerlessVirtualHostRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void CreateRabbitMQServerlessVirtualHostRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool CreateRabbitMQServerlessVirtualHostRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string CreateRabbitMQServerlessVirtualHostRequest::GetDescription() const
{
    return m_description;
}

void CreateRabbitMQServerlessVirtualHostRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRabbitMQServerlessVirtualHostRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool CreateRabbitMQServerlessVirtualHostRequest::GetTraceFlag() const
{
    return m_traceFlag;
}

void CreateRabbitMQServerlessVirtualHostRequest::SetTraceFlag(const bool& _traceFlag)
{
    m_traceFlag = _traceFlag;
    m_traceFlagHasBeenSet = true;
}

bool CreateRabbitMQServerlessVirtualHostRequest::TraceFlagHasBeenSet() const
{
    return m_traceFlagHasBeenSet;
}

bool CreateRabbitMQServerlessVirtualHostRequest::GetMirrorQueuePolicyFlag() const
{
    return m_mirrorQueuePolicyFlag;
}

void CreateRabbitMQServerlessVirtualHostRequest::SetMirrorQueuePolicyFlag(const bool& _mirrorQueuePolicyFlag)
{
    m_mirrorQueuePolicyFlag = _mirrorQueuePolicyFlag;
    m_mirrorQueuePolicyFlagHasBeenSet = true;
}

bool CreateRabbitMQServerlessVirtualHostRequest::MirrorQueuePolicyFlagHasBeenSet() const
{
    return m_mirrorQueuePolicyFlagHasBeenSet;
}


