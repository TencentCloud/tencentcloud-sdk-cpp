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

#include <tencentcloud/cls/v20201016/model/ModifyRemoteWriteTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyRemoteWriteTaskRequest::ModifyRemoteWriteTaskRequest() :
    m_taskIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_remoteWriteURLHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_authInfoHasBeenSet(false),
    m_virtualGatewayTypeHasBeenSet(false)
{
}

string ModifyRemoteWriteTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


string ModifyRemoteWriteTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyRemoteWriteTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyRemoteWriteTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyRemoteWriteTaskRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyRemoteWriteTaskRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyRemoteWriteTaskRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

uint64_t ModifyRemoteWriteTaskRequest::GetEnable() const
{
    return m_enable;
}

void ModifyRemoteWriteTaskRequest::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyRemoteWriteTaskRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string ModifyRemoteWriteTaskRequest::GetName() const
{
    return m_name;
}

void ModifyRemoteWriteTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyRemoteWriteTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyRemoteWriteTaskRequest::GetNetType() const
{
    return m_netType;
}

void ModifyRemoteWriteTaskRequest::SetNetType(const uint64_t& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool ModifyRemoteWriteTaskRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string ModifyRemoteWriteTaskRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyRemoteWriteTaskRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyRemoteWriteTaskRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifyRemoteWriteTaskRequest::GetTarget() const
{
    return m_target;
}

void ModifyRemoteWriteTaskRequest::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool ModifyRemoteWriteTaskRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

string ModifyRemoteWriteTaskRequest::GetRemoteWriteURL() const
{
    return m_remoteWriteURL;
}

void ModifyRemoteWriteTaskRequest::SetRemoteWriteURL(const string& _remoteWriteURL)
{
    m_remoteWriteURL = _remoteWriteURL;
    m_remoteWriteURLHasBeenSet = true;
}

bool ModifyRemoteWriteTaskRequest::RemoteWriteURLHasBeenSet() const
{
    return m_remoteWriteURLHasBeenSet;
}

uint64_t ModifyRemoteWriteTaskRequest::GetAuthType() const
{
    return m_authType;
}

void ModifyRemoteWriteTaskRequest::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool ModifyRemoteWriteTaskRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

RemoteWriteAuthInfo ModifyRemoteWriteTaskRequest::GetAuthInfo() const
{
    return m_authInfo;
}

void ModifyRemoteWriteTaskRequest::SetAuthInfo(const RemoteWriteAuthInfo& _authInfo)
{
    m_authInfo = _authInfo;
    m_authInfoHasBeenSet = true;
}

bool ModifyRemoteWriteTaskRequest::AuthInfoHasBeenSet() const
{
    return m_authInfoHasBeenSet;
}

int64_t ModifyRemoteWriteTaskRequest::GetVirtualGatewayType() const
{
    return m_virtualGatewayType;
}

void ModifyRemoteWriteTaskRequest::SetVirtualGatewayType(const int64_t& _virtualGatewayType)
{
    m_virtualGatewayType = _virtualGatewayType;
    m_virtualGatewayTypeHasBeenSet = true;
}

bool ModifyRemoteWriteTaskRequest::VirtualGatewayTypeHasBeenSet() const
{
    return m_virtualGatewayTypeHasBeenSet;
}


