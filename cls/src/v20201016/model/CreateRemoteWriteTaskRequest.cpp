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

#include <tencentcloud/cls/v20201016/model/CreateRemoteWriteTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateRemoteWriteTaskRequest::CreateRemoteWriteTaskRequest() :
    m_topicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_remoteWriteURLHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_authInfoHasBeenSet(false),
    m_virtualGatewayTypeHasBeenSet(false)
{
}

string CreateRemoteWriteTaskRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteWriteURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteWriteURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remoteWriteURL.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authType, allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_netType, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_authInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_virtualGatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualGatewayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_virtualGatewayType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRemoteWriteTaskRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateRemoteWriteTaskRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateRemoteWriteTaskRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CreateRemoteWriteTaskRequest::GetName() const
{
    return m_name;
}

void CreateRemoteWriteTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRemoteWriteTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateRemoteWriteTaskRequest::GetTarget() const
{
    return m_target;
}

void CreateRemoteWriteTaskRequest::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool CreateRemoteWriteTaskRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

string CreateRemoteWriteTaskRequest::GetRemoteWriteURL() const
{
    return m_remoteWriteURL;
}

void CreateRemoteWriteTaskRequest::SetRemoteWriteURL(const string& _remoteWriteURL)
{
    m_remoteWriteURL = _remoteWriteURL;
    m_remoteWriteURLHasBeenSet = true;
}

bool CreateRemoteWriteTaskRequest::RemoteWriteURLHasBeenSet() const
{
    return m_remoteWriteURLHasBeenSet;
}

uint64_t CreateRemoteWriteTaskRequest::GetAuthType() const
{
    return m_authType;
}

void CreateRemoteWriteTaskRequest::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool CreateRemoteWriteTaskRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

uint64_t CreateRemoteWriteTaskRequest::GetNetType() const
{
    return m_netType;
}

void CreateRemoteWriteTaskRequest::SetNetType(const uint64_t& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool CreateRemoteWriteTaskRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string CreateRemoteWriteTaskRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateRemoteWriteTaskRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateRemoteWriteTaskRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

RemoteWriteAuthInfo CreateRemoteWriteTaskRequest::GetAuthInfo() const
{
    return m_authInfo;
}

void CreateRemoteWriteTaskRequest::SetAuthInfo(const RemoteWriteAuthInfo& _authInfo)
{
    m_authInfo = _authInfo;
    m_authInfoHasBeenSet = true;
}

bool CreateRemoteWriteTaskRequest::AuthInfoHasBeenSet() const
{
    return m_authInfoHasBeenSet;
}

int64_t CreateRemoteWriteTaskRequest::GetVirtualGatewayType() const
{
    return m_virtualGatewayType;
}

void CreateRemoteWriteTaskRequest::SetVirtualGatewayType(const int64_t& _virtualGatewayType)
{
    m_virtualGatewayType = _virtualGatewayType;
    m_virtualGatewayTypeHasBeenSet = true;
}

bool CreateRemoteWriteTaskRequest::VirtualGatewayTypeHasBeenSet() const
{
    return m_virtualGatewayTypeHasBeenSet;
}


