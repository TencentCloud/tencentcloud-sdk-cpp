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

#include <tencentcloud/csip/v20221121/model/DescribeBaselineItemRiskListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeBaselineItemRiskListRequest::DescribeBaselineItemRiskListRequest() :
    m_policyIDHasBeenSet(false),
    m_parentCategoryIDHasBeenSet(false),
    m_itemIDHasBeenSet(false),
    m_checkAssetTypeHasBeenSet(false),
    m_categoryIDHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false)
{
}

string DescribeBaselineItemRiskListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyID.begin(); itr != m_policyID.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_parentCategoryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCategoryID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parentCategoryID, allocator);
    }

    if (m_itemIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_itemID, allocator);
    }

    if (m_checkAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_checkAssetType.begin(); itr != m_checkAssetType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> DescribeBaselineItemRiskListRequest::GetPolicyID() const
{
    return m_policyID;
}

void DescribeBaselineItemRiskListRequest::SetPolicyID(const vector<uint64_t>& _policyID)
{
    m_policyID = _policyID;
    m_policyIDHasBeenSet = true;
}

bool DescribeBaselineItemRiskListRequest::PolicyIDHasBeenSet() const
{
    return m_policyIDHasBeenSet;
}

uint64_t DescribeBaselineItemRiskListRequest::GetParentCategoryID() const
{
    return m_parentCategoryID;
}

void DescribeBaselineItemRiskListRequest::SetParentCategoryID(const uint64_t& _parentCategoryID)
{
    m_parentCategoryID = _parentCategoryID;
    m_parentCategoryIDHasBeenSet = true;
}

bool DescribeBaselineItemRiskListRequest::ParentCategoryIDHasBeenSet() const
{
    return m_parentCategoryIDHasBeenSet;
}

uint64_t DescribeBaselineItemRiskListRequest::GetItemID() const
{
    return m_itemID;
}

void DescribeBaselineItemRiskListRequest::SetItemID(const uint64_t& _itemID)
{
    m_itemID = _itemID;
    m_itemIDHasBeenSet = true;
}

bool DescribeBaselineItemRiskListRequest::ItemIDHasBeenSet() const
{
    return m_itemIDHasBeenSet;
}

vector<string> DescribeBaselineItemRiskListRequest::GetCheckAssetType() const
{
    return m_checkAssetType;
}

void DescribeBaselineItemRiskListRequest::SetCheckAssetType(const vector<string>& _checkAssetType)
{
    m_checkAssetType = _checkAssetType;
    m_checkAssetTypeHasBeenSet = true;
}

bool DescribeBaselineItemRiskListRequest::CheckAssetTypeHasBeenSet() const
{
    return m_checkAssetTypeHasBeenSet;
}

uint64_t DescribeBaselineItemRiskListRequest::GetCategoryID() const
{
    return m_categoryID;
}

void DescribeBaselineItemRiskListRequest::SetCategoryID(const uint64_t& _categoryID)
{
    m_categoryID = _categoryID;
    m_categoryIDHasBeenSet = true;
}

bool DescribeBaselineItemRiskListRequest::CategoryIDHasBeenSet() const
{
    return m_categoryIDHasBeenSet;
}

vector<string> DescribeBaselineItemRiskListRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeBaselineItemRiskListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeBaselineItemRiskListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<Filters> DescribeBaselineItemRiskListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeBaselineItemRiskListRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeBaselineItemRiskListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeBaselineItemRiskListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBaselineItemRiskListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBaselineItemRiskListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBaselineItemRiskListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBaselineItemRiskListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBaselineItemRiskListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeBaselineItemRiskListRequest::GetOrder() const
{
    return m_order;
}

void DescribeBaselineItemRiskListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeBaselineItemRiskListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeBaselineItemRiskListRequest::GetBy() const
{
    return m_by;
}

void DescribeBaselineItemRiskListRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeBaselineItemRiskListRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}


