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

#include <tencentcloud/cam/v20190116/model/ListAttachedRolePoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

ListAttachedRolePoliciesRequest::ListAttachedRolePoliciesRequest() :
    m_pageHasBeenSet(false),
    m_rpHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string ListAttachedRolePoliciesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_rpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rp, allocator);
    }

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListAttachedRolePoliciesRequest::GetPage() const
{
    return m_page;
}

void ListAttachedRolePoliciesRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool ListAttachedRolePoliciesRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

uint64_t ListAttachedRolePoliciesRequest::GetRp() const
{
    return m_rp;
}

void ListAttachedRolePoliciesRequest::SetRp(const uint64_t& _rp)
{
    m_rp = _rp;
    m_rpHasBeenSet = true;
}

bool ListAttachedRolePoliciesRequest::RpHasBeenSet() const
{
    return m_rpHasBeenSet;
}

string ListAttachedRolePoliciesRequest::GetRoleId() const
{
    return m_roleId;
}

void ListAttachedRolePoliciesRequest::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool ListAttachedRolePoliciesRequest::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string ListAttachedRolePoliciesRequest::GetRoleName() const
{
    return m_roleName;
}

void ListAttachedRolePoliciesRequest::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool ListAttachedRolePoliciesRequest::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string ListAttachedRolePoliciesRequest::GetPolicyType() const
{
    return m_policyType;
}

void ListAttachedRolePoliciesRequest::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool ListAttachedRolePoliciesRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

string ListAttachedRolePoliciesRequest::GetKeyword() const
{
    return m_keyword;
}

void ListAttachedRolePoliciesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListAttachedRolePoliciesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


