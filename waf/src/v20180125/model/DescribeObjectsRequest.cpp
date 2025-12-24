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

#include <tencentcloud/waf/v20180125/model/DescribeObjectsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeObjectsRequest::DescribeObjectsRequest() :
    m_filtersHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false),
    m_memberAppIdListHasBeenSet(false),
    m_isCrossAccountHasBeenSet(false)
{
}

string DescribeObjectsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_memberAppIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberAppIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberAppIdList.begin(); itr != m_memberAppIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_isCrossAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCrossAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCrossAccount, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<FiltersItemNew> DescribeObjectsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeObjectsRequest::SetFilters(const vector<FiltersItemNew>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeObjectsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeObjectsRequest::GetOrder() const
{
    return m_order;
}

void DescribeObjectsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeObjectsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeObjectsRequest::GetBy() const
{
    return m_by;
}

void DescribeObjectsRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeObjectsRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

vector<uint64_t> DescribeObjectsRequest::GetMemberAppIdList() const
{
    return m_memberAppIdList;
}

void DescribeObjectsRequest::SetMemberAppIdList(const vector<uint64_t>& _memberAppIdList)
{
    m_memberAppIdList = _memberAppIdList;
    m_memberAppIdListHasBeenSet = true;
}

bool DescribeObjectsRequest::MemberAppIdListHasBeenSet() const
{
    return m_memberAppIdListHasBeenSet;
}

int64_t DescribeObjectsRequest::GetIsCrossAccount() const
{
    return m_isCrossAccount;
}

void DescribeObjectsRequest::SetIsCrossAccount(const int64_t& _isCrossAccount)
{
    m_isCrossAccount = _isCrossAccount;
    m_isCrossAccountHasBeenSet = true;
}

bool DescribeObjectsRequest::IsCrossAccountHasBeenSet() const
{
    return m_isCrossAccountHasBeenSet;
}


