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

#include <tencentcloud/teo/v20220901/model/CreateLoadBalancingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateLoadBalancingRequest::CreateLoadBalancingRequest() :
    m_zoneIdHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_originGroupIdHasBeenSet(false),
    m_backupOriginGroupIdHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_advancedOriginGroupsHasBeenSet(false)
{
}

string CreateLoadBalancingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_originGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupOriginGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupOriginGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupOriginGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tTL, allocator);
    }

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedOriginGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedOriginGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_advancedOriginGroups.begin(); itr != m_advancedOriginGroups.end(); ++itr, ++i)
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


string CreateLoadBalancingRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateLoadBalancingRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateLoadBalancingRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateLoadBalancingRequest::GetHost() const
{
    return m_host;
}

void CreateLoadBalancingRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool CreateLoadBalancingRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string CreateLoadBalancingRequest::GetType() const
{
    return m_type;
}

void CreateLoadBalancingRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateLoadBalancingRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateLoadBalancingRequest::GetOriginGroupId() const
{
    return m_originGroupId;
}

void CreateLoadBalancingRequest::SetOriginGroupId(const string& _originGroupId)
{
    m_originGroupId = _originGroupId;
    m_originGroupIdHasBeenSet = true;
}

bool CreateLoadBalancingRequest::OriginGroupIdHasBeenSet() const
{
    return m_originGroupIdHasBeenSet;
}

string CreateLoadBalancingRequest::GetBackupOriginGroupId() const
{
    return m_backupOriginGroupId;
}

void CreateLoadBalancingRequest::SetBackupOriginGroupId(const string& _backupOriginGroupId)
{
    m_backupOriginGroupId = _backupOriginGroupId;
    m_backupOriginGroupIdHasBeenSet = true;
}

bool CreateLoadBalancingRequest::BackupOriginGroupIdHasBeenSet() const
{
    return m_backupOriginGroupIdHasBeenSet;
}

uint64_t CreateLoadBalancingRequest::GetTTL() const
{
    return m_tTL;
}

void CreateLoadBalancingRequest::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool CreateLoadBalancingRequest::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

string CreateLoadBalancingRequest::GetOriginType() const
{
    return m_originType;
}

void CreateLoadBalancingRequest::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool CreateLoadBalancingRequest::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

vector<AdvancedOriginGroup> CreateLoadBalancingRequest::GetAdvancedOriginGroups() const
{
    return m_advancedOriginGroups;
}

void CreateLoadBalancingRequest::SetAdvancedOriginGroups(const vector<AdvancedOriginGroup>& _advancedOriginGroups)
{
    m_advancedOriginGroups = _advancedOriginGroups;
    m_advancedOriginGroupsHasBeenSet = true;
}

bool CreateLoadBalancingRequest::AdvancedOriginGroupsHasBeenSet() const
{
    return m_advancedOriginGroupsHasBeenSet;
}


