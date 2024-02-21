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

#include <tencentcloud/domain/v20180808/model/DescribeReservedPreDomainInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

DescribeReservedPreDomainInfoRequest::DescribeReservedPreDomainInfoRequest() :
    m_domainListHasBeenSet(false),
    m_reservedStatusHasBeenSet(false),
    m_reservedTimeSortHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeReservedPreDomainInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainList.begin(); itr != m_domainList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_reservedStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reservedStatus, allocator);
    }

    if (m_reservedTimeSortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedTimeSort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reservedTimeSort.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeReservedPreDomainInfoRequest::GetDomainList() const
{
    return m_domainList;
}

void DescribeReservedPreDomainInfoRequest::SetDomainList(const vector<string>& _domainList)
{
    m_domainList = _domainList;
    m_domainListHasBeenSet = true;
}

bool DescribeReservedPreDomainInfoRequest::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}

int64_t DescribeReservedPreDomainInfoRequest::GetReservedStatus() const
{
    return m_reservedStatus;
}

void DescribeReservedPreDomainInfoRequest::SetReservedStatus(const int64_t& _reservedStatus)
{
    m_reservedStatus = _reservedStatus;
    m_reservedStatusHasBeenSet = true;
}

bool DescribeReservedPreDomainInfoRequest::ReservedStatusHasBeenSet() const
{
    return m_reservedStatusHasBeenSet;
}

string DescribeReservedPreDomainInfoRequest::GetReservedTimeSort() const
{
    return m_reservedTimeSort;
}

void DescribeReservedPreDomainInfoRequest::SetReservedTimeSort(const string& _reservedTimeSort)
{
    m_reservedTimeSort = _reservedTimeSort;
    m_reservedTimeSortHasBeenSet = true;
}

bool DescribeReservedPreDomainInfoRequest::ReservedTimeSortHasBeenSet() const
{
    return m_reservedTimeSortHasBeenSet;
}

int64_t DescribeReservedPreDomainInfoRequest::GetLimit() const
{
    return m_limit;
}

void DescribeReservedPreDomainInfoRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeReservedPreDomainInfoRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeReservedPreDomainInfoRequest::GetOffset() const
{
    return m_offset;
}

void DescribeReservedPreDomainInfoRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeReservedPreDomainInfoRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


