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

#include <tencentcloud/clb/v20180317/model/CreateTargetGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CreateTargetGroupRequest::CreateTargetGroupRequest() :
    m_targetGroupNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_targetGroupInstancesHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_fullListenSwitchHasBeenSet(false),
    m_keepaliveEnableHasBeenSet(false),
    m_sessionExpireTimeHasBeenSet(false)
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
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

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_weight, allocator);
    }

    if (m_fullListenSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullListenSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fullListenSwitch, allocator);
    }

    if (m_keepaliveEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepaliveEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keepaliveEnable, allocator);
    }

    if (m_sessionExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionExpireTime, allocator);
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

string CreateTargetGroupRequest::GetType() const
{
    return m_type;
}

void CreateTargetGroupRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateTargetGroupRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
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

uint64_t CreateTargetGroupRequest::GetWeight() const
{
    return m_weight;
}

void CreateTargetGroupRequest::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool CreateTargetGroupRequest::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

bool CreateTargetGroupRequest::GetFullListenSwitch() const
{
    return m_fullListenSwitch;
}

void CreateTargetGroupRequest::SetFullListenSwitch(const bool& _fullListenSwitch)
{
    m_fullListenSwitch = _fullListenSwitch;
    m_fullListenSwitchHasBeenSet = true;
}

bool CreateTargetGroupRequest::FullListenSwitchHasBeenSet() const
{
    return m_fullListenSwitchHasBeenSet;
}

bool CreateTargetGroupRequest::GetKeepaliveEnable() const
{
    return m_keepaliveEnable;
}

void CreateTargetGroupRequest::SetKeepaliveEnable(const bool& _keepaliveEnable)
{
    m_keepaliveEnable = _keepaliveEnable;
    m_keepaliveEnableHasBeenSet = true;
}

bool CreateTargetGroupRequest::KeepaliveEnableHasBeenSet() const
{
    return m_keepaliveEnableHasBeenSet;
}

uint64_t CreateTargetGroupRequest::GetSessionExpireTime() const
{
    return m_sessionExpireTime;
}

void CreateTargetGroupRequest::SetSessionExpireTime(const uint64_t& _sessionExpireTime)
{
    m_sessionExpireTime = _sessionExpireTime;
    m_sessionExpireTimeHasBeenSet = true;
}

bool CreateTargetGroupRequest::SessionExpireTimeHasBeenSet() const
{
    return m_sessionExpireTimeHasBeenSet;
}


