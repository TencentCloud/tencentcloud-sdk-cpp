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

#include <tencentcloud/csip/v20221121/model/ScanBaselineItemListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ScanBaselineItemListRequest::ScanBaselineItemListRequest() :
    m_policyTypeHasBeenSet(false),
    m_policyIDHasBeenSet(false),
    m_parentCategoryIDHasBeenSet(false),
    m_itemIDListHasBeenSet(false),
    m_categoryIDHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string ScanBaselineItemListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyID, allocator);
    }

    if (m_parentCategoryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCategoryID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parentCategoryID, allocator);
    }

    if (m_itemIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_itemIDList.begin(); itr != m_itemIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_categoryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_categoryID, allocator);
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


string ScanBaselineItemListRequest::GetPolicyType() const
{
    return m_policyType;
}

void ScanBaselineItemListRequest::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool ScanBaselineItemListRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

uint64_t ScanBaselineItemListRequest::GetPolicyID() const
{
    return m_policyID;
}

void ScanBaselineItemListRequest::SetPolicyID(const uint64_t& _policyID)
{
    m_policyID = _policyID;
    m_policyIDHasBeenSet = true;
}

bool ScanBaselineItemListRequest::PolicyIDHasBeenSet() const
{
    return m_policyIDHasBeenSet;
}

uint64_t ScanBaselineItemListRequest::GetParentCategoryID() const
{
    return m_parentCategoryID;
}

void ScanBaselineItemListRequest::SetParentCategoryID(const uint64_t& _parentCategoryID)
{
    m_parentCategoryID = _parentCategoryID;
    m_parentCategoryIDHasBeenSet = true;
}

bool ScanBaselineItemListRequest::ParentCategoryIDHasBeenSet() const
{
    return m_parentCategoryIDHasBeenSet;
}

vector<uint64_t> ScanBaselineItemListRequest::GetItemIDList() const
{
    return m_itemIDList;
}

void ScanBaselineItemListRequest::SetItemIDList(const vector<uint64_t>& _itemIDList)
{
    m_itemIDList = _itemIDList;
    m_itemIDListHasBeenSet = true;
}

bool ScanBaselineItemListRequest::ItemIDListHasBeenSet() const
{
    return m_itemIDListHasBeenSet;
}

uint64_t ScanBaselineItemListRequest::GetCategoryID() const
{
    return m_categoryID;
}

void ScanBaselineItemListRequest::SetCategoryID(const uint64_t& _categoryID)
{
    m_categoryID = _categoryID;
    m_categoryIDHasBeenSet = true;
}

bool ScanBaselineItemListRequest::CategoryIDHasBeenSet() const
{
    return m_categoryIDHasBeenSet;
}

vector<string> ScanBaselineItemListRequest::GetMemberId() const
{
    return m_memberId;
}

void ScanBaselineItemListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ScanBaselineItemListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


