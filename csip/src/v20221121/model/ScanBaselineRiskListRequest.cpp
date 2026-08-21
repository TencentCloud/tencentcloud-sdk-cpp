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

#include <tencentcloud/csip/v20221121/model/ScanBaselineRiskListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ScanBaselineRiskListRequest::ScanBaselineRiskListRequest() :
    m_policyTypeHasBeenSet(false),
    m_policyIDHasBeenSet(false),
    m_parentCategoryIDHasBeenSet(false),
    m_riskIDListHasBeenSet(false),
    m_itemIDHasBeenSet(false),
    m_categoryIDHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string ScanBaselineRiskListRequest::ToJsonString() const
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

    if (m_riskIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskIDList.begin(); itr != m_riskIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_itemIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_itemID, allocator);
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


string ScanBaselineRiskListRequest::GetPolicyType() const
{
    return m_policyType;
}

void ScanBaselineRiskListRequest::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool ScanBaselineRiskListRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

uint64_t ScanBaselineRiskListRequest::GetPolicyID() const
{
    return m_policyID;
}

void ScanBaselineRiskListRequest::SetPolicyID(const uint64_t& _policyID)
{
    m_policyID = _policyID;
    m_policyIDHasBeenSet = true;
}

bool ScanBaselineRiskListRequest::PolicyIDHasBeenSet() const
{
    return m_policyIDHasBeenSet;
}

uint64_t ScanBaselineRiskListRequest::GetParentCategoryID() const
{
    return m_parentCategoryID;
}

void ScanBaselineRiskListRequest::SetParentCategoryID(const uint64_t& _parentCategoryID)
{
    m_parentCategoryID = _parentCategoryID;
    m_parentCategoryIDHasBeenSet = true;
}

bool ScanBaselineRiskListRequest::ParentCategoryIDHasBeenSet() const
{
    return m_parentCategoryIDHasBeenSet;
}

vector<string> ScanBaselineRiskListRequest::GetRiskIDList() const
{
    return m_riskIDList;
}

void ScanBaselineRiskListRequest::SetRiskIDList(const vector<string>& _riskIDList)
{
    m_riskIDList = _riskIDList;
    m_riskIDListHasBeenSet = true;
}

bool ScanBaselineRiskListRequest::RiskIDListHasBeenSet() const
{
    return m_riskIDListHasBeenSet;
}

uint64_t ScanBaselineRiskListRequest::GetItemID() const
{
    return m_itemID;
}

void ScanBaselineRiskListRequest::SetItemID(const uint64_t& _itemID)
{
    m_itemID = _itemID;
    m_itemIDHasBeenSet = true;
}

bool ScanBaselineRiskListRequest::ItemIDHasBeenSet() const
{
    return m_itemIDHasBeenSet;
}

uint64_t ScanBaselineRiskListRequest::GetCategoryID() const
{
    return m_categoryID;
}

void ScanBaselineRiskListRequest::SetCategoryID(const uint64_t& _categoryID)
{
    m_categoryID = _categoryID;
    m_categoryIDHasBeenSet = true;
}

bool ScanBaselineRiskListRequest::CategoryIDHasBeenSet() const
{
    return m_categoryIDHasBeenSet;
}

vector<string> ScanBaselineRiskListRequest::GetMemberId() const
{
    return m_memberId;
}

void ScanBaselineRiskListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ScanBaselineRiskListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


