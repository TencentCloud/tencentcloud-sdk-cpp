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

#include <tencentcloud/vpc/v20170312/model/AttachNetworkInterfaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

AttachNetworkInterfaceRequest::AttachNetworkInterfaceRequest() :
    m_networkInterfaceIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_attachTypeHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string AttachNetworkInterfaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkInterfaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_attachTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_attachType, allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AttachNetworkInterfaceRequest::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void AttachNetworkInterfaceRequest::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool AttachNetworkInterfaceRequest::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

string AttachNetworkInterfaceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AttachNetworkInterfaceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AttachNetworkInterfaceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t AttachNetworkInterfaceRequest::GetAttachType() const
{
    return m_attachType;
}

void AttachNetworkInterfaceRequest::SetAttachType(const uint64_t& _attachType)
{
    m_attachType = _attachType;
    m_attachTypeHasBeenSet = true;
}

bool AttachNetworkInterfaceRequest::AttachTypeHasBeenSet() const
{
    return m_attachTypeHasBeenSet;
}

string AttachNetworkInterfaceRequest::GetClientToken() const
{
    return m_clientToken;
}

void AttachNetworkInterfaceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool AttachNetworkInterfaceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


