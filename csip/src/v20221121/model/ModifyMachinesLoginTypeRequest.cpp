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

#include <tencentcloud/csip/v20221121/model/ModifyMachinesLoginTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyMachinesLoginTypeRequest::ModifyMachinesLoginTypeRequest() :
    m_loginTypeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_quuidsHasBeenSet(false),
    m_excludeQuuidHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_requestVersionHasBeenSet(false)
{
}

string ModifyMachinesLoginTypeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loginType, allocator);
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

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scope, allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_from, allocator);
    }

    if (m_requestVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_requestVersion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyMachinesLoginTypeRequest::GetLoginType() const
{
    return m_loginType;
}

void ModifyMachinesLoginTypeRequest::SetLoginType(const uint64_t& _loginType)
{
    m_loginType = _loginType;
    m_loginTypeHasBeenSet = true;
}

bool ModifyMachinesLoginTypeRequest::LoginTypeHasBeenSet() const
{
    return m_loginTypeHasBeenSet;
}

vector<string> ModifyMachinesLoginTypeRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyMachinesLoginTypeRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyMachinesLoginTypeRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> ModifyMachinesLoginTypeRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ModifyMachinesLoginTypeRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ModifyMachinesLoginTypeRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<string> ModifyMachinesLoginTypeRequest::GetQuuids() const
{
    return m_quuids;
}

void ModifyMachinesLoginTypeRequest::SetQuuids(const vector<string>& _quuids)
{
    m_quuids = _quuids;
    m_quuidsHasBeenSet = true;
}

bool ModifyMachinesLoginTypeRequest::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

vector<string> ModifyMachinesLoginTypeRequest::GetExcludeQuuid() const
{
    return m_excludeQuuid;
}

void ModifyMachinesLoginTypeRequest::SetExcludeQuuid(const vector<string>& _excludeQuuid)
{
    m_excludeQuuid = _excludeQuuid;
    m_excludeQuuidHasBeenSet = true;
}

bool ModifyMachinesLoginTypeRequest::ExcludeQuuidHasBeenSet() const
{
    return m_excludeQuuidHasBeenSet;
}

uint64_t ModifyMachinesLoginTypeRequest::GetScope() const
{
    return m_scope;
}

void ModifyMachinesLoginTypeRequest::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ModifyMachinesLoginTypeRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

uint64_t ModifyMachinesLoginTypeRequest::GetFrom() const
{
    return m_from;
}

void ModifyMachinesLoginTypeRequest::SetFrom(const uint64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool ModifyMachinesLoginTypeRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t ModifyMachinesLoginTypeRequest::GetRequestVersion() const
{
    return m_requestVersion;
}

void ModifyMachinesLoginTypeRequest::SetRequestVersion(const int64_t& _requestVersion)
{
    m_requestVersion = _requestVersion;
    m_requestVersionHasBeenSet = true;
}

bool ModifyMachinesLoginTypeRequest::RequestVersionHasBeenSet() const
{
    return m_requestVersionHasBeenSet;
}


