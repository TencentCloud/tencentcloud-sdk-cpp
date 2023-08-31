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

#include <tencentcloud/waf/v20180125/model/DescribeBatchIpAccessControlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeBatchIpAccessControlRequest::DescribeBatchIpAccessControlRequest() :
    m_filtersHasBeenSet(false),
    m_offSetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_sortHasBeenSet(false)
{
}

string DescribeBatchIpAccessControlRequest::ToJsonString() const
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

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<FiltersItemNew> DescribeBatchIpAccessControlRequest::GetFilters() const
{
    return m_filters;
}

void DescribeBatchIpAccessControlRequest::SetFilters(const vector<FiltersItemNew>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeBatchIpAccessControlRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribeBatchIpAccessControlRequest::GetOffSet() const
{
    return m_offSet;
}

void DescribeBatchIpAccessControlRequest::SetOffSet(const uint64_t& _offSet)
{
    m_offSet = _offSet;
    m_offSetHasBeenSet = true;
}

bool DescribeBatchIpAccessControlRequest::OffSetHasBeenSet() const
{
    return m_offSetHasBeenSet;
}

uint64_t DescribeBatchIpAccessControlRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBatchIpAccessControlRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBatchIpAccessControlRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeBatchIpAccessControlRequest::GetSort() const
{
    return m_sort;
}

void DescribeBatchIpAccessControlRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeBatchIpAccessControlRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}


