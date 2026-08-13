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

#include <tencentcloud/csip/v20221121/model/ModifyNetAttackSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyNetAttackSettingRequest::ModifyNetAttackSettingRequest() :
    m_netAttackEnableHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_netAttackAlarmStatusHasBeenSet(false),
    m_autoIncludeHasBeenSet(false),
    m_cWPScopeHasBeenSet(false),
    m_instanceIDsWithAppIdHasBeenSet(false),
    m_excludeInstanceIDsWithAppIdHasBeenSet(false),
    m_tagIDsHasBeenSet(false),
    m_tCSSScopeHasBeenSet(false),
    m_clusterIDsWithAppIdHasBeenSet(false),
    m_excludeClusterIDsWithAppIdHasBeenSet(false)
{
}

string ModifyNetAttackSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_netAttackEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetAttackEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_netAttackEnable, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_netAttackAlarmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetAttackAlarmStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_netAttackAlarmStatus, allocator);
    }

    if (m_autoIncludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoInclude";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoInclude, allocator);
    }

    if (m_cWPScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cWPScope, allocator);
    }

    if (m_instanceIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceIDsWithAppId.begin(); itr != m_instanceIDsWithAppId.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_excludeInstanceIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeInstanceIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_excludeInstanceIDsWithAppId.begin(); itr != m_excludeInstanceIDsWithAppId.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIDs.begin(); itr != m_tagIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tCSSScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCSSScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tCSSScope, allocator);
    }

    if (m_clusterIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterIDsWithAppId.begin(); itr != m_clusterIDsWithAppId.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_excludeClusterIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeClusterIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_excludeClusterIDsWithAppId.begin(); itr != m_excludeClusterIDsWithAppId.end(); ++itr, ++i)
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


uint64_t ModifyNetAttackSettingRequest::GetNetAttackEnable() const
{
    return m_netAttackEnable;
}

void ModifyNetAttackSettingRequest::SetNetAttackEnable(const uint64_t& _netAttackEnable)
{
    m_netAttackEnable = _netAttackEnable;
    m_netAttackEnableHasBeenSet = true;
}

bool ModifyNetAttackSettingRequest::NetAttackEnableHasBeenSet() const
{
    return m_netAttackEnableHasBeenSet;
}

vector<string> ModifyNetAttackSettingRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyNetAttackSettingRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyNetAttackSettingRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

uint64_t ModifyNetAttackSettingRequest::GetNetAttackAlarmStatus() const
{
    return m_netAttackAlarmStatus;
}

void ModifyNetAttackSettingRequest::SetNetAttackAlarmStatus(const uint64_t& _netAttackAlarmStatus)
{
    m_netAttackAlarmStatus = _netAttackAlarmStatus;
    m_netAttackAlarmStatusHasBeenSet = true;
}

bool ModifyNetAttackSettingRequest::NetAttackAlarmStatusHasBeenSet() const
{
    return m_netAttackAlarmStatusHasBeenSet;
}

uint64_t ModifyNetAttackSettingRequest::GetAutoInclude() const
{
    return m_autoInclude;
}

void ModifyNetAttackSettingRequest::SetAutoInclude(const uint64_t& _autoInclude)
{
    m_autoInclude = _autoInclude;
    m_autoIncludeHasBeenSet = true;
}

bool ModifyNetAttackSettingRequest::AutoIncludeHasBeenSet() const
{
    return m_autoIncludeHasBeenSet;
}

int64_t ModifyNetAttackSettingRequest::GetCWPScope() const
{
    return m_cWPScope;
}

void ModifyNetAttackSettingRequest::SetCWPScope(const int64_t& _cWPScope)
{
    m_cWPScope = _cWPScope;
    m_cWPScopeHasBeenSet = true;
}

bool ModifyNetAttackSettingRequest::CWPScopeHasBeenSet() const
{
    return m_cWPScopeHasBeenSet;
}

vector<InstanceIDWithAppIdItem> ModifyNetAttackSettingRequest::GetInstanceIDsWithAppId() const
{
    return m_instanceIDsWithAppId;
}

void ModifyNetAttackSettingRequest::SetInstanceIDsWithAppId(const vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId)
{
    m_instanceIDsWithAppId = _instanceIDsWithAppId;
    m_instanceIDsWithAppIdHasBeenSet = true;
}

bool ModifyNetAttackSettingRequest::InstanceIDsWithAppIdHasBeenSet() const
{
    return m_instanceIDsWithAppIdHasBeenSet;
}

vector<InstanceIDWithAppIdItem> ModifyNetAttackSettingRequest::GetExcludeInstanceIDsWithAppId() const
{
    return m_excludeInstanceIDsWithAppId;
}

void ModifyNetAttackSettingRequest::SetExcludeInstanceIDsWithAppId(const vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId)
{
    m_excludeInstanceIDsWithAppId = _excludeInstanceIDsWithAppId;
    m_excludeInstanceIDsWithAppIdHasBeenSet = true;
}

bool ModifyNetAttackSettingRequest::ExcludeInstanceIDsWithAppIdHasBeenSet() const
{
    return m_excludeInstanceIDsWithAppIdHasBeenSet;
}

vector<string> ModifyNetAttackSettingRequest::GetTagIDs() const
{
    return m_tagIDs;
}

void ModifyNetAttackSettingRequest::SetTagIDs(const vector<string>& _tagIDs)
{
    m_tagIDs = _tagIDs;
    m_tagIDsHasBeenSet = true;
}

bool ModifyNetAttackSettingRequest::TagIDsHasBeenSet() const
{
    return m_tagIDsHasBeenSet;
}

int64_t ModifyNetAttackSettingRequest::GetTCSSScope() const
{
    return m_tCSSScope;
}

void ModifyNetAttackSettingRequest::SetTCSSScope(const int64_t& _tCSSScope)
{
    m_tCSSScope = _tCSSScope;
    m_tCSSScopeHasBeenSet = true;
}

bool ModifyNetAttackSettingRequest::TCSSScopeHasBeenSet() const
{
    return m_tCSSScopeHasBeenSet;
}

vector<ClusterIDWithAppIdItem> ModifyNetAttackSettingRequest::GetClusterIDsWithAppId() const
{
    return m_clusterIDsWithAppId;
}

void ModifyNetAttackSettingRequest::SetClusterIDsWithAppId(const vector<ClusterIDWithAppIdItem>& _clusterIDsWithAppId)
{
    m_clusterIDsWithAppId = _clusterIDsWithAppId;
    m_clusterIDsWithAppIdHasBeenSet = true;
}

bool ModifyNetAttackSettingRequest::ClusterIDsWithAppIdHasBeenSet() const
{
    return m_clusterIDsWithAppIdHasBeenSet;
}

vector<ClusterIDWithAppIdItem> ModifyNetAttackSettingRequest::GetExcludeClusterIDsWithAppId() const
{
    return m_excludeClusterIDsWithAppId;
}

void ModifyNetAttackSettingRequest::SetExcludeClusterIDsWithAppId(const vector<ClusterIDWithAppIdItem>& _excludeClusterIDsWithAppId)
{
    m_excludeClusterIDsWithAppId = _excludeClusterIDsWithAppId;
    m_excludeClusterIDsWithAppIdHasBeenSet = true;
}

bool ModifyNetAttackSettingRequest::ExcludeClusterIDsWithAppIdHasBeenSet() const
{
    return m_excludeClusterIDsWithAppIdHasBeenSet;
}


