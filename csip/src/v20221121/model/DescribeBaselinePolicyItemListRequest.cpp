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

#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyItemListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeBaselinePolicyItemListRequest::DescribeBaselinePolicyItemListRequest() :
    m_policyIDHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_parentCategoryIDHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeBaselinePolicyItemListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyID, allocator);
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

    if (m_parentCategoryIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCategoryID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parentCategoryID, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeBaselinePolicyItemListRequest::GetPolicyID() const
{
    return m_policyID;
}

void DescribeBaselinePolicyItemListRequest::SetPolicyID(const uint64_t& _policyID)
{
    m_policyID = _policyID;
    m_policyIDHasBeenSet = true;
}

bool DescribeBaselinePolicyItemListRequest::PolicyIDHasBeenSet() const
{
    return m_policyIDHasBeenSet;
}

vector<string> DescribeBaselinePolicyItemListRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeBaselinePolicyItemListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeBaselinePolicyItemListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

uint64_t DescribeBaselinePolicyItemListRequest::GetParentCategoryID() const
{
    return m_parentCategoryID;
}

void DescribeBaselinePolicyItemListRequest::SetParentCategoryID(const uint64_t& _parentCategoryID)
{
    m_parentCategoryID = _parentCategoryID;
    m_parentCategoryIDHasBeenSet = true;
}

bool DescribeBaselinePolicyItemListRequest::ParentCategoryIDHasBeenSet() const
{
    return m_parentCategoryIDHasBeenSet;
}

uint64_t DescribeBaselinePolicyItemListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBaselinePolicyItemListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBaselinePolicyItemListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeBaselinePolicyItemListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBaselinePolicyItemListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBaselinePolicyItemListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<Filters> DescribeBaselinePolicyItemListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeBaselinePolicyItemListRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeBaselinePolicyItemListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


