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

#include <tencentcloud/csip/v20221121/model/ModifyAILinkSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyAILinkSettingRequest::ModifyAILinkSettingRequest() :
    m_aILinkEnableHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_ruleScopeDeepHasBeenSet(false),
    m_ruleScopeBalancedHasBeenSet(false),
    m_ruleScopePreciseHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_quuidsHasBeenSet(false),
    m_excludeQuuidsHasBeenSet(false),
    m_autoIncludeHasBeenSet(false)
{
}

string ModifyAILinkSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_aILinkEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AILinkEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aILinkEnable, allocator);
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

    if (m_ruleScopeDeepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleScopeDeep";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleScopeDeep, allocator);
    }

    if (m_ruleScopeBalancedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleScopeBalanced";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleScopeBalanced, allocator);
    }

    if (m_ruleScopePreciseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleScopePrecise";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleScopePrecise, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scope, allocator);
    }

    if (m_quuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuids.begin(); itr != m_quuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeQuuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeQuuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeQuuids.begin(); itr != m_excludeQuuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoIncludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoInclude";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoInclude, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyAILinkSettingRequest::GetAILinkEnable() const
{
    return m_aILinkEnable;
}

void ModifyAILinkSettingRequest::SetAILinkEnable(const uint64_t& _aILinkEnable)
{
    m_aILinkEnable = _aILinkEnable;
    m_aILinkEnableHasBeenSet = true;
}

bool ModifyAILinkSettingRequest::AILinkEnableHasBeenSet() const
{
    return m_aILinkEnableHasBeenSet;
}

vector<string> ModifyAILinkSettingRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyAILinkSettingRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyAILinkSettingRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

uint64_t ModifyAILinkSettingRequest::GetRuleScopeDeep() const
{
    return m_ruleScopeDeep;
}

void ModifyAILinkSettingRequest::SetRuleScopeDeep(const uint64_t& _ruleScopeDeep)
{
    m_ruleScopeDeep = _ruleScopeDeep;
    m_ruleScopeDeepHasBeenSet = true;
}

bool ModifyAILinkSettingRequest::RuleScopeDeepHasBeenSet() const
{
    return m_ruleScopeDeepHasBeenSet;
}

uint64_t ModifyAILinkSettingRequest::GetRuleScopeBalanced() const
{
    return m_ruleScopeBalanced;
}

void ModifyAILinkSettingRequest::SetRuleScopeBalanced(const uint64_t& _ruleScopeBalanced)
{
    m_ruleScopeBalanced = _ruleScopeBalanced;
    m_ruleScopeBalancedHasBeenSet = true;
}

bool ModifyAILinkSettingRequest::RuleScopeBalancedHasBeenSet() const
{
    return m_ruleScopeBalancedHasBeenSet;
}

uint64_t ModifyAILinkSettingRequest::GetRuleScopePrecise() const
{
    return m_ruleScopePrecise;
}

void ModifyAILinkSettingRequest::SetRuleScopePrecise(const uint64_t& _ruleScopePrecise)
{
    m_ruleScopePrecise = _ruleScopePrecise;
    m_ruleScopePreciseHasBeenSet = true;
}

bool ModifyAILinkSettingRequest::RuleScopePreciseHasBeenSet() const
{
    return m_ruleScopePreciseHasBeenSet;
}

uint64_t ModifyAILinkSettingRequest::GetScope() const
{
    return m_scope;
}

void ModifyAILinkSettingRequest::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ModifyAILinkSettingRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<string> ModifyAILinkSettingRequest::GetQuuids() const
{
    return m_quuids;
}

void ModifyAILinkSettingRequest::SetQuuids(const vector<string>& _quuids)
{
    m_quuids = _quuids;
    m_quuidsHasBeenSet = true;
}

bool ModifyAILinkSettingRequest::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

vector<string> ModifyAILinkSettingRequest::GetExcludeQuuids() const
{
    return m_excludeQuuids;
}

void ModifyAILinkSettingRequest::SetExcludeQuuids(const vector<string>& _excludeQuuids)
{
    m_excludeQuuids = _excludeQuuids;
    m_excludeQuuidsHasBeenSet = true;
}

bool ModifyAILinkSettingRequest::ExcludeQuuidsHasBeenSet() const
{
    return m_excludeQuuidsHasBeenSet;
}

uint64_t ModifyAILinkSettingRequest::GetAutoInclude() const
{
    return m_autoInclude;
}

void ModifyAILinkSettingRequest::SetAutoInclude(const uint64_t& _autoInclude)
{
    m_autoInclude = _autoInclude;
    m_autoIncludeHasBeenSet = true;
}

bool ModifyAILinkSettingRequest::AutoIncludeHasBeenSet() const
{
    return m_autoIncludeHasBeenSet;
}


