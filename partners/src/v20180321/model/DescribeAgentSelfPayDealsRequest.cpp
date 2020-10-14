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

#include <tencentcloud/partners/v20180321/model/DescribeAgentSelfPayDealsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Partners::V20180321::Model;
using namespace rapidjson;
using namespace std;

DescribeAgentSelfPayDealsRequest::DescribeAgentSelfPayDealsRequest() :
    m_ownerUinHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_creatTimeRangeStartHasBeenSet(false),
    m_creatTimeRangeEndHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_dealNamesHasBeenSet(false)
{
}

string DescribeAgentSelfPayDealsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ownerUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_creatTimeRangeStartHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatTimeRangeStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_creatTimeRangeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_creatTimeRangeEndHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatTimeRangeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_creatTimeRangeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_order, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_dealNamesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DealNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dealNames.begin(); itr != m_dealNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAgentSelfPayDealsRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void DescribeAgentSelfPayDealsRequest::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t DescribeAgentSelfPayDealsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAgentSelfPayDealsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAgentSelfPayDealsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAgentSelfPayDealsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAgentSelfPayDealsRequest::GetCreatTimeRangeStart() const
{
    return m_creatTimeRangeStart;
}

void DescribeAgentSelfPayDealsRequest::SetCreatTimeRangeStart(const string& _creatTimeRangeStart)
{
    m_creatTimeRangeStart = _creatTimeRangeStart;
    m_creatTimeRangeStartHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsRequest::CreatTimeRangeStartHasBeenSet() const
{
    return m_creatTimeRangeStartHasBeenSet;
}

string DescribeAgentSelfPayDealsRequest::GetCreatTimeRangeEnd() const
{
    return m_creatTimeRangeEnd;
}

void DescribeAgentSelfPayDealsRequest::SetCreatTimeRangeEnd(const string& _creatTimeRangeEnd)
{
    m_creatTimeRangeEnd = _creatTimeRangeEnd;
    m_creatTimeRangeEndHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsRequest::CreatTimeRangeEndHasBeenSet() const
{
    return m_creatTimeRangeEndHasBeenSet;
}

uint64_t DescribeAgentSelfPayDealsRequest::GetOrder() const
{
    return m_order;
}

void DescribeAgentSelfPayDealsRequest::SetOrder(const uint64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

uint64_t DescribeAgentSelfPayDealsRequest::GetStatus() const
{
    return m_status;
}

void DescribeAgentSelfPayDealsRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeAgentSelfPayDealsRequest::GetDealNames() const
{
    return m_dealNames;
}

void DescribeAgentSelfPayDealsRequest::SetDealNames(const vector<string>& _dealNames)
{
    m_dealNames = _dealNames;
    m_dealNamesHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsRequest::DealNamesHasBeenSet() const
{
    return m_dealNamesHasBeenSet;
}


