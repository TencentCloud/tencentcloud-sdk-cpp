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

#include <tencentcloud/csip/v20221121/model/ModifyBaselineIgnorePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyBaselineIgnorePolicyRequest::ModifyBaselineIgnorePolicyRequest() :
    m_itemIDHasBeenSet(false),
    m_scopeTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_scopeIncludeListHasBeenSet(false),
    m_scopeExcludeListHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string ModifyBaselineIgnorePolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_itemIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_itemID, allocator);
    }

    if (m_scopeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scopeType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_scopeIncludeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeIncludeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scopeIncludeList.begin(); itr != m_scopeIncludeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scopeExcludeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeExcludeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scopeExcludeList.begin(); itr != m_scopeExcludeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyBaselineIgnorePolicyRequest::GetItemID() const
{
    return m_itemID;
}

void ModifyBaselineIgnorePolicyRequest::SetItemID(const uint64_t& _itemID)
{
    m_itemID = _itemID;
    m_itemIDHasBeenSet = true;
}

bool ModifyBaselineIgnorePolicyRequest::ItemIDHasBeenSet() const
{
    return m_itemIDHasBeenSet;
}

string ModifyBaselineIgnorePolicyRequest::GetScopeType() const
{
    return m_scopeType;
}

void ModifyBaselineIgnorePolicyRequest::SetScopeType(const string& _scopeType)
{
    m_scopeType = _scopeType;
    m_scopeTypeHasBeenSet = true;
}

bool ModifyBaselineIgnorePolicyRequest::ScopeTypeHasBeenSet() const
{
    return m_scopeTypeHasBeenSet;
}

string ModifyBaselineIgnorePolicyRequest::GetRemark() const
{
    return m_remark;
}

void ModifyBaselineIgnorePolicyRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyBaselineIgnorePolicyRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t ModifyBaselineIgnorePolicyRequest::GetID() const
{
    return m_iD;
}

void ModifyBaselineIgnorePolicyRequest::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifyBaselineIgnorePolicyRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

vector<string> ModifyBaselineIgnorePolicyRequest::GetScopeIncludeList() const
{
    return m_scopeIncludeList;
}

void ModifyBaselineIgnorePolicyRequest::SetScopeIncludeList(const vector<string>& _scopeIncludeList)
{
    m_scopeIncludeList = _scopeIncludeList;
    m_scopeIncludeListHasBeenSet = true;
}

bool ModifyBaselineIgnorePolicyRequest::ScopeIncludeListHasBeenSet() const
{
    return m_scopeIncludeListHasBeenSet;
}

vector<string> ModifyBaselineIgnorePolicyRequest::GetScopeExcludeList() const
{
    return m_scopeExcludeList;
}

void ModifyBaselineIgnorePolicyRequest::SetScopeExcludeList(const vector<string>& _scopeExcludeList)
{
    m_scopeExcludeList = _scopeExcludeList;
    m_scopeExcludeListHasBeenSet = true;
}

bool ModifyBaselineIgnorePolicyRequest::ScopeExcludeListHasBeenSet() const
{
    return m_scopeExcludeListHasBeenSet;
}

vector<string> ModifyBaselineIgnorePolicyRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyBaselineIgnorePolicyRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyBaselineIgnorePolicyRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


