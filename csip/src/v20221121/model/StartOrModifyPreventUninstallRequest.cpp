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

#include <tencentcloud/csip/v20221121/model/StartOrModifyPreventUninstallRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

StartOrModifyPreventUninstallRequest::StartOrModifyPreventUninstallRequest() :
    m_fromHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_includeQuuidHasBeenSet(false),
    m_excludeQuuidHasBeenSet(false)
{
}

string StartOrModifyPreventUninstallRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_from, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scope, allocator);
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

    if (m_includeQuuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeQuuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeQuuid.begin(); itr != m_includeQuuid.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeQuuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeQuuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeQuuid.begin(); itr != m_excludeQuuid.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t StartOrModifyPreventUninstallRequest::GetFrom() const
{
    return m_from;
}

void StartOrModifyPreventUninstallRequest::SetFrom(const uint64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool StartOrModifyPreventUninstallRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

uint64_t StartOrModifyPreventUninstallRequest::GetScope() const
{
    return m_scope;
}

void StartOrModifyPreventUninstallRequest::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool StartOrModifyPreventUninstallRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<string> StartOrModifyPreventUninstallRequest::GetMemberId() const
{
    return m_memberId;
}

void StartOrModifyPreventUninstallRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool StartOrModifyPreventUninstallRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> StartOrModifyPreventUninstallRequest::GetIncludeQuuid() const
{
    return m_includeQuuid;
}

void StartOrModifyPreventUninstallRequest::SetIncludeQuuid(const vector<string>& _includeQuuid)
{
    m_includeQuuid = _includeQuuid;
    m_includeQuuidHasBeenSet = true;
}

bool StartOrModifyPreventUninstallRequest::IncludeQuuidHasBeenSet() const
{
    return m_includeQuuidHasBeenSet;
}

vector<string> StartOrModifyPreventUninstallRequest::GetExcludeQuuid() const
{
    return m_excludeQuuid;
}

void StartOrModifyPreventUninstallRequest::SetExcludeQuuid(const vector<string>& _excludeQuuid)
{
    m_excludeQuuid = _excludeQuuid;
    m_excludeQuuidHasBeenSet = true;
}

bool StartOrModifyPreventUninstallRequest::ExcludeQuuidHasBeenSet() const
{
    return m_excludeQuuidHasBeenSet;
}


