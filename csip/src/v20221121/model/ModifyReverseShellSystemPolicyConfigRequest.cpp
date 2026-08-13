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

#include <tencentcloud/csip/v20221121/model/ModifyReverseShellSystemPolicyConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyReverseShellSystemPolicyConfigRequest::ModifyReverseShellSystemPolicyConfigRequest() :
    m_memberIdHasBeenSet(false),
    m_innerNetAlarmShowHasBeenSet(false),
    m_innerIPShowHasBeenSet(false),
    m_cWPScopeHasBeenSet(false),
    m_instanceIDsWithAppIdHasBeenSet(false),
    m_excludeInstanceIDsWithAppIdHasBeenSet(false),
    m_tagIDsHasBeenSet(false),
    m_tCSSScopeHasBeenSet(false),
    m_clusterIDsWithAppIdHasBeenSet(false),
    m_excludeClusterIDsWithAppIdHasBeenSet(false)
{
}

string ModifyReverseShellSystemPolicyConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_innerNetAlarmShowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerNetAlarmShow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_innerNetAlarmShow, allocator);
    }

    if (m_innerIPShowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerIPShow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_innerIPShow, allocator);
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


vector<string> ModifyReverseShellSystemPolicyConfigRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyReverseShellSystemPolicyConfigRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyReverseShellSystemPolicyConfigRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

bool ModifyReverseShellSystemPolicyConfigRequest::GetInnerNetAlarmShow() const
{
    return m_innerNetAlarmShow;
}

void ModifyReverseShellSystemPolicyConfigRequest::SetInnerNetAlarmShow(const bool& _innerNetAlarmShow)
{
    m_innerNetAlarmShow = _innerNetAlarmShow;
    m_innerNetAlarmShowHasBeenSet = true;
}

bool ModifyReverseShellSystemPolicyConfigRequest::InnerNetAlarmShowHasBeenSet() const
{
    return m_innerNetAlarmShowHasBeenSet;
}

bool ModifyReverseShellSystemPolicyConfigRequest::GetInnerIPShow() const
{
    return m_innerIPShow;
}

void ModifyReverseShellSystemPolicyConfigRequest::SetInnerIPShow(const bool& _innerIPShow)
{
    m_innerIPShow = _innerIPShow;
    m_innerIPShowHasBeenSet = true;
}

bool ModifyReverseShellSystemPolicyConfigRequest::InnerIPShowHasBeenSet() const
{
    return m_innerIPShowHasBeenSet;
}

int64_t ModifyReverseShellSystemPolicyConfigRequest::GetCWPScope() const
{
    return m_cWPScope;
}

void ModifyReverseShellSystemPolicyConfigRequest::SetCWPScope(const int64_t& _cWPScope)
{
    m_cWPScope = _cWPScope;
    m_cWPScopeHasBeenSet = true;
}

bool ModifyReverseShellSystemPolicyConfigRequest::CWPScopeHasBeenSet() const
{
    return m_cWPScopeHasBeenSet;
}

vector<InstanceIDWithAppIdItem> ModifyReverseShellSystemPolicyConfigRequest::GetInstanceIDsWithAppId() const
{
    return m_instanceIDsWithAppId;
}

void ModifyReverseShellSystemPolicyConfigRequest::SetInstanceIDsWithAppId(const vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId)
{
    m_instanceIDsWithAppId = _instanceIDsWithAppId;
    m_instanceIDsWithAppIdHasBeenSet = true;
}

bool ModifyReverseShellSystemPolicyConfigRequest::InstanceIDsWithAppIdHasBeenSet() const
{
    return m_instanceIDsWithAppIdHasBeenSet;
}

vector<InstanceIDWithAppIdItem> ModifyReverseShellSystemPolicyConfigRequest::GetExcludeInstanceIDsWithAppId() const
{
    return m_excludeInstanceIDsWithAppId;
}

void ModifyReverseShellSystemPolicyConfigRequest::SetExcludeInstanceIDsWithAppId(const vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId)
{
    m_excludeInstanceIDsWithAppId = _excludeInstanceIDsWithAppId;
    m_excludeInstanceIDsWithAppIdHasBeenSet = true;
}

bool ModifyReverseShellSystemPolicyConfigRequest::ExcludeInstanceIDsWithAppIdHasBeenSet() const
{
    return m_excludeInstanceIDsWithAppIdHasBeenSet;
}

vector<string> ModifyReverseShellSystemPolicyConfigRequest::GetTagIDs() const
{
    return m_tagIDs;
}

void ModifyReverseShellSystemPolicyConfigRequest::SetTagIDs(const vector<string>& _tagIDs)
{
    m_tagIDs = _tagIDs;
    m_tagIDsHasBeenSet = true;
}

bool ModifyReverseShellSystemPolicyConfigRequest::TagIDsHasBeenSet() const
{
    return m_tagIDsHasBeenSet;
}

int64_t ModifyReverseShellSystemPolicyConfigRequest::GetTCSSScope() const
{
    return m_tCSSScope;
}

void ModifyReverseShellSystemPolicyConfigRequest::SetTCSSScope(const int64_t& _tCSSScope)
{
    m_tCSSScope = _tCSSScope;
    m_tCSSScopeHasBeenSet = true;
}

bool ModifyReverseShellSystemPolicyConfigRequest::TCSSScopeHasBeenSet() const
{
    return m_tCSSScopeHasBeenSet;
}

vector<ClusterIDWithAppIdItem> ModifyReverseShellSystemPolicyConfigRequest::GetClusterIDsWithAppId() const
{
    return m_clusterIDsWithAppId;
}

void ModifyReverseShellSystemPolicyConfigRequest::SetClusterIDsWithAppId(const vector<ClusterIDWithAppIdItem>& _clusterIDsWithAppId)
{
    m_clusterIDsWithAppId = _clusterIDsWithAppId;
    m_clusterIDsWithAppIdHasBeenSet = true;
}

bool ModifyReverseShellSystemPolicyConfigRequest::ClusterIDsWithAppIdHasBeenSet() const
{
    return m_clusterIDsWithAppIdHasBeenSet;
}

vector<ClusterIDWithAppIdItem> ModifyReverseShellSystemPolicyConfigRequest::GetExcludeClusterIDsWithAppId() const
{
    return m_excludeClusterIDsWithAppId;
}

void ModifyReverseShellSystemPolicyConfigRequest::SetExcludeClusterIDsWithAppId(const vector<ClusterIDWithAppIdItem>& _excludeClusterIDsWithAppId)
{
    m_excludeClusterIDsWithAppId = _excludeClusterIDsWithAppId;
    m_excludeClusterIDsWithAppIdHasBeenSet = true;
}

bool ModifyReverseShellSystemPolicyConfigRequest::ExcludeClusterIDsWithAppIdHasBeenSet() const
{
    return m_excludeClusterIDsWithAppIdHasBeenSet;
}


