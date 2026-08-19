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

#include <tencentcloud/csip/v20221121/model/ModifyNFSScanConfRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyNFSScanConfRequest::ModifyNFSScanConfRequest() :
    m_enableHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_includeQuuidHasBeenSet(false),
    m_excludeQuuidHasBeenSet(false)
{
}

string ModifyNFSScanConfRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
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


uint64_t ModifyNFSScanConfRequest::GetEnable() const
{
    return m_enable;
}

void ModifyNFSScanConfRequest::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyNFSScanConfRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t ModifyNFSScanConfRequest::GetScope() const
{
    return m_scope;
}

void ModifyNFSScanConfRequest::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ModifyNFSScanConfRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<string> ModifyNFSScanConfRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyNFSScanConfRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyNFSScanConfRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

int64_t ModifyNFSScanConfRequest::GetId() const
{
    return m_id;
}

void ModifyNFSScanConfRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyNFSScanConfRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> ModifyNFSScanConfRequest::GetIncludeQuuid() const
{
    return m_includeQuuid;
}

void ModifyNFSScanConfRequest::SetIncludeQuuid(const vector<string>& _includeQuuid)
{
    m_includeQuuid = _includeQuuid;
    m_includeQuuidHasBeenSet = true;
}

bool ModifyNFSScanConfRequest::IncludeQuuidHasBeenSet() const
{
    return m_includeQuuidHasBeenSet;
}

vector<string> ModifyNFSScanConfRequest::GetExcludeQuuid() const
{
    return m_excludeQuuid;
}

void ModifyNFSScanConfRequest::SetExcludeQuuid(const vector<string>& _excludeQuuid)
{
    m_excludeQuuid = _excludeQuuid;
    m_excludeQuuidHasBeenSet = true;
}

bool ModifyNFSScanConfRequest::ExcludeQuuidHasBeenSet() const
{
    return m_excludeQuuidHasBeenSet;
}


