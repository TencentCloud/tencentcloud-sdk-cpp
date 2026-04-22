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

#include <tencentcloud/waf/v20180125/model/DescribeProtectGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeProtectGroupRequest::DescribeProtectGroupRequest() :
    m_filterHasBeenSet(false),
    m_offSetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_byHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string DescribeProtectGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filter.begin(); itr != m_filter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_offSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offSet, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<FiltersItemNew> DescribeProtectGroupRequest::GetFilter() const
{
    return m_filter;
}

void DescribeProtectGroupRequest::SetFilter(const vector<FiltersItemNew>& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeProtectGroupRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

uint64_t DescribeProtectGroupRequest::GetOffSet() const
{
    return m_offSet;
}

void DescribeProtectGroupRequest::SetOffSet(const uint64_t& _offSet)
{
    m_offSet = _offSet;
    m_offSetHasBeenSet = true;
}

bool DescribeProtectGroupRequest::OffSetHasBeenSet() const
{
    return m_offSetHasBeenSet;
}

uint64_t DescribeProtectGroupRequest::GetLimit() const
{
    return m_limit;
}

void DescribeProtectGroupRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeProtectGroupRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeProtectGroupRequest::GetBy() const
{
    return m_by;
}

void DescribeProtectGroupRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeProtectGroupRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

string DescribeProtectGroupRequest::GetOrder() const
{
    return m_order;
}

void DescribeProtectGroupRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeProtectGroupRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


