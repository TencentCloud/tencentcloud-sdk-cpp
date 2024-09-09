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

#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateCloudNativeAPIGatewayServiceRequest::CreateCloudNativeAPIGatewayServiceRequest() :
    m_gatewayIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_retriesHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_upstreamInfoHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

string CreateCloudNativeAPIGatewayServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_retriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retries";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retries, allocator);
    }

    if (m_upstreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamType.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudNativeAPIGatewayServiceRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateCloudNativeAPIGatewayServiceRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayServiceRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateCloudNativeAPIGatewayServiceRequest::GetName() const
{
    return m_name;
}

void CreateCloudNativeAPIGatewayServiceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayServiceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCloudNativeAPIGatewayServiceRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateCloudNativeAPIGatewayServiceRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayServiceRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t CreateCloudNativeAPIGatewayServiceRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateCloudNativeAPIGatewayServiceRequest::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayServiceRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t CreateCloudNativeAPIGatewayServiceRequest::GetRetries() const
{
    return m_retries;
}

void CreateCloudNativeAPIGatewayServiceRequest::SetRetries(const int64_t& _retries)
{
    m_retries = _retries;
    m_retriesHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayServiceRequest::RetriesHasBeenSet() const
{
    return m_retriesHasBeenSet;
}

string CreateCloudNativeAPIGatewayServiceRequest::GetUpstreamType() const
{
    return m_upstreamType;
}

void CreateCloudNativeAPIGatewayServiceRequest::SetUpstreamType(const string& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayServiceRequest::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

KongUpstreamInfo CreateCloudNativeAPIGatewayServiceRequest::GetUpstreamInfo() const
{
    return m_upstreamInfo;
}

void CreateCloudNativeAPIGatewayServiceRequest::SetUpstreamInfo(const KongUpstreamInfo& _upstreamInfo)
{
    m_upstreamInfo = _upstreamInfo;
    m_upstreamInfoHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayServiceRequest::UpstreamInfoHasBeenSet() const
{
    return m_upstreamInfoHasBeenSet;
}

string CreateCloudNativeAPIGatewayServiceRequest::GetPath() const
{
    return m_path;
}

void CreateCloudNativeAPIGatewayServiceRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayServiceRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}


