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

#include <tencentcloud/csip/v20221121/model/DescribeBaselineAggregatedItemListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeBaselineAggregatedItemListRequest::DescribeBaselineAggregatedItemListRequest() :
    m_policyIDHasBeenSet(false),
    m_parentCategoryIDHasBeenSet(false),
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

string DescribeBaselineAggregatedItemListRequest::ToJsonString() const
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

    if (m_checkAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkAssetType.c_str(), allocator).Move(), allocator);
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


vector<uint64_t> DescribeBaselineAggregatedItemListRequest::GetPolicyID() const
{
    return m_policyID;
}

void DescribeBaselineAggregatedItemListRequest::SetPolicyID(const vector<uint64_t>& _policyID)
{
    m_policyID = _policyID;
    m_policyIDHasBeenSet = true;
}

bool DescribeBaselineAggregatedItemListRequest::PolicyIDHasBeenSet() const
{
    return m_policyIDHasBeenSet;
}

uint64_t DescribeBaselineAggregatedItemListRequest::GetParentCategoryID() const
{
    return m_parentCategoryID;
}

void DescribeBaselineAggregatedItemListRequest::SetParentCategoryID(const uint64_t& _parentCategoryID)
{
    m_parentCategoryID = _parentCategoryID;
    m_parentCategoryIDHasBeenSet = true;
}

bool DescribeBaselineAggregatedItemListRequest::ParentCategoryIDHasBeenSet() const
{
    return m_parentCategoryIDHasBeenSet;
}

string DescribeBaselineAggregatedItemListRequest::GetCheckAssetType() const
{
    return m_checkAssetType;
}

void DescribeBaselineAggregatedItemListRequest::SetCheckAssetType(const string& _checkAssetType)
{
    m_checkAssetType = _checkAssetType;
    m_checkAssetTypeHasBeenSet = true;
}

bool DescribeBaselineAggregatedItemListRequest::CheckAssetTypeHasBeenSet() const
{
    return m_checkAssetTypeHasBeenSet;
}

uint64_t DescribeBaselineAggregatedItemListRequest::GetCategoryID() const
{
    return m_categoryID;
}

void DescribeBaselineAggregatedItemListRequest::SetCategoryID(const uint64_t& _categoryID)
{
    m_categoryID = _categoryID;
    m_categoryIDHasBeenSet = true;
}

bool DescribeBaselineAggregatedItemListRequest::CategoryIDHasBeenSet() const
{
    return m_categoryIDHasBeenSet;
}

vector<string> DescribeBaselineAggregatedItemListRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeBaselineAggregatedItemListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeBaselineAggregatedItemListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<Filters> DescribeBaselineAggregatedItemListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeBaselineAggregatedItemListRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeBaselineAggregatedItemListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeBaselineAggregatedItemListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBaselineAggregatedItemListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBaselineAggregatedItemListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBaselineAggregatedItemListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBaselineAggregatedItemListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBaselineAggregatedItemListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeBaselineAggregatedItemListRequest::GetOrder() const
{
    return m_order;
}

void DescribeBaselineAggregatedItemListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeBaselineAggregatedItemListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeBaselineAggregatedItemListRequest::GetBy() const
{
    return m_by;
}

void DescribeBaselineAggregatedItemListRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeBaselineAggregatedItemListRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}


