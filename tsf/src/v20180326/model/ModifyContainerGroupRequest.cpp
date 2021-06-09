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

#include <tencentcloud/tsf/v20180326/model/ModifyContainerGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ModifyContainerGroupRequest::ModifyContainerGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_protocolPortsHasBeenSet(false),
    m_updateTypeHasBeenSet(false),
    m_updateIvlHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
}

string ModifyContainerGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessType, allocator);
    }

    if (m_protocolPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolPorts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protocolPorts.begin(); itr != m_protocolPorts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_updateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateType, allocator);
    }

    if (m_updateIvlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateIvl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateIvl, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyContainerGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyContainerGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyContainerGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t ModifyContainerGroupRequest::GetAccessType() const
{
    return m_accessType;
}

void ModifyContainerGroupRequest::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool ModifyContainerGroupRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

vector<ProtocolPort> ModifyContainerGroupRequest::GetProtocolPorts() const
{
    return m_protocolPorts;
}

void ModifyContainerGroupRequest::SetProtocolPorts(const vector<ProtocolPort>& _protocolPorts)
{
    m_protocolPorts = _protocolPorts;
    m_protocolPortsHasBeenSet = true;
}

bool ModifyContainerGroupRequest::ProtocolPortsHasBeenSet() const
{
    return m_protocolPortsHasBeenSet;
}

int64_t ModifyContainerGroupRequest::GetUpdateType() const
{
    return m_updateType;
}

void ModifyContainerGroupRequest::SetUpdateType(const int64_t& _updateType)
{
    m_updateType = _updateType;
    m_updateTypeHasBeenSet = true;
}

bool ModifyContainerGroupRequest::UpdateTypeHasBeenSet() const
{
    return m_updateTypeHasBeenSet;
}

int64_t ModifyContainerGroupRequest::GetUpdateIvl() const
{
    return m_updateIvl;
}

void ModifyContainerGroupRequest::SetUpdateIvl(const int64_t& _updateIvl)
{
    m_updateIvl = _updateIvl;
    m_updateIvlHasBeenSet = true;
}

bool ModifyContainerGroupRequest::UpdateIvlHasBeenSet() const
{
    return m_updateIvlHasBeenSet;
}

string ModifyContainerGroupRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ModifyContainerGroupRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ModifyContainerGroupRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ModifyContainerGroupRequest::GetAlias() const
{
    return m_alias;
}

void ModifyContainerGroupRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool ModifyContainerGroupRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}


