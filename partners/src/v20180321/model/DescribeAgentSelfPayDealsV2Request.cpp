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

#include <tencentcloud/partners/v20180321/model/DescribeAgentSelfPayDealsV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

DescribeAgentSelfPayDealsV2Request::DescribeAgentSelfPayDealsV2Request() :
    m_ownerUinHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_creatTimeRangeStartHasBeenSet(false),
    m_creatTimeRangeEndHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_dealNamesHasBeenSet(false),
    m_bigDealIdsHasBeenSet(false)
{
}

string DescribeAgentSelfPayDealsV2Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_creatTimeRangeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatTimeRangeStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creatTimeRangeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_creatTimeRangeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatTimeRangeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creatTimeRangeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_order, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_dealNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dealNames.begin(); itr != m_dealNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bigDealIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDealIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bigDealIds.begin(); itr != m_bigDealIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAgentSelfPayDealsV2Request::GetOwnerUin() const
{
    return m_ownerUin;
}

void DescribeAgentSelfPayDealsV2Request::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsV2Request::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t DescribeAgentSelfPayDealsV2Request::GetOffset() const
{
    return m_offset;
}

void DescribeAgentSelfPayDealsV2Request::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsV2Request::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAgentSelfPayDealsV2Request::GetLimit() const
{
    return m_limit;
}

void DescribeAgentSelfPayDealsV2Request::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsV2Request::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAgentSelfPayDealsV2Request::GetCreatTimeRangeStart() const
{
    return m_creatTimeRangeStart;
}

void DescribeAgentSelfPayDealsV2Request::SetCreatTimeRangeStart(const string& _creatTimeRangeStart)
{
    m_creatTimeRangeStart = _creatTimeRangeStart;
    m_creatTimeRangeStartHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsV2Request::CreatTimeRangeStartHasBeenSet() const
{
    return m_creatTimeRangeStartHasBeenSet;
}

string DescribeAgentSelfPayDealsV2Request::GetCreatTimeRangeEnd() const
{
    return m_creatTimeRangeEnd;
}

void DescribeAgentSelfPayDealsV2Request::SetCreatTimeRangeEnd(const string& _creatTimeRangeEnd)
{
    m_creatTimeRangeEnd = _creatTimeRangeEnd;
    m_creatTimeRangeEndHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsV2Request::CreatTimeRangeEndHasBeenSet() const
{
    return m_creatTimeRangeEndHasBeenSet;
}

uint64_t DescribeAgentSelfPayDealsV2Request::GetOrder() const
{
    return m_order;
}

void DescribeAgentSelfPayDealsV2Request::SetOrder(const uint64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsV2Request::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

uint64_t DescribeAgentSelfPayDealsV2Request::GetStatus() const
{
    return m_status;
}

void DescribeAgentSelfPayDealsV2Request::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsV2Request::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeAgentSelfPayDealsV2Request::GetDealNames() const
{
    return m_dealNames;
}

void DescribeAgentSelfPayDealsV2Request::SetDealNames(const vector<string>& _dealNames)
{
    m_dealNames = _dealNames;
    m_dealNamesHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsV2Request::DealNamesHasBeenSet() const
{
    return m_dealNamesHasBeenSet;
}

vector<string> DescribeAgentSelfPayDealsV2Request::GetBigDealIds() const
{
    return m_bigDealIds;
}

void DescribeAgentSelfPayDealsV2Request::SetBigDealIds(const vector<string>& _bigDealIds)
{
    m_bigDealIds = _bigDealIds;
    m_bigDealIdsHasBeenSet = true;
}

bool DescribeAgentSelfPayDealsV2Request::BigDealIdsHasBeenSet() const
{
    return m_bigDealIdsHasBeenSet;
}


