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

#include <tencentcloud/partners/v20180321/model/DescribeAgentDealsCacheRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

DescribeAgentDealsCacheRequest::DescribeAgentDealsCacheRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_creatTimeRangeStartHasBeenSet(false),
    m_creatTimeRangeEndHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerUinsHasBeenSet(false),
    m_dealNamesHasBeenSet(false),
    m_payerModeHasBeenSet(false)
{
}

string DescribeAgentDealsCacheRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_ownerUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerUins.begin(); itr != m_ownerUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_payerModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payerMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeAgentDealsCacheRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAgentDealsCacheRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAgentDealsCacheRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAgentDealsCacheRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAgentDealsCacheRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAgentDealsCacheRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAgentDealsCacheRequest::GetCreatTimeRangeStart() const
{
    return m_creatTimeRangeStart;
}

void DescribeAgentDealsCacheRequest::SetCreatTimeRangeStart(const string& _creatTimeRangeStart)
{
    m_creatTimeRangeStart = _creatTimeRangeStart;
    m_creatTimeRangeStartHasBeenSet = true;
}

bool DescribeAgentDealsCacheRequest::CreatTimeRangeStartHasBeenSet() const
{
    return m_creatTimeRangeStartHasBeenSet;
}

string DescribeAgentDealsCacheRequest::GetCreatTimeRangeEnd() const
{
    return m_creatTimeRangeEnd;
}

void DescribeAgentDealsCacheRequest::SetCreatTimeRangeEnd(const string& _creatTimeRangeEnd)
{
    m_creatTimeRangeEnd = _creatTimeRangeEnd;
    m_creatTimeRangeEndHasBeenSet = true;
}

bool DescribeAgentDealsCacheRequest::CreatTimeRangeEndHasBeenSet() const
{
    return m_creatTimeRangeEndHasBeenSet;
}

uint64_t DescribeAgentDealsCacheRequest::GetOrder() const
{
    return m_order;
}

void DescribeAgentDealsCacheRequest::SetOrder(const uint64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeAgentDealsCacheRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

uint64_t DescribeAgentDealsCacheRequest::GetStatus() const
{
    return m_status;
}

void DescribeAgentDealsCacheRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeAgentDealsCacheRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeAgentDealsCacheRequest::GetOwnerUins() const
{
    return m_ownerUins;
}

void DescribeAgentDealsCacheRequest::SetOwnerUins(const vector<string>& _ownerUins)
{
    m_ownerUins = _ownerUins;
    m_ownerUinsHasBeenSet = true;
}

bool DescribeAgentDealsCacheRequest::OwnerUinsHasBeenSet() const
{
    return m_ownerUinsHasBeenSet;
}

vector<string> DescribeAgentDealsCacheRequest::GetDealNames() const
{
    return m_dealNames;
}

void DescribeAgentDealsCacheRequest::SetDealNames(const vector<string>& _dealNames)
{
    m_dealNames = _dealNames;
    m_dealNamesHasBeenSet = true;
}

bool DescribeAgentDealsCacheRequest::DealNamesHasBeenSet() const
{
    return m_dealNamesHasBeenSet;
}

uint64_t DescribeAgentDealsCacheRequest::GetPayerMode() const
{
    return m_payerMode;
}

void DescribeAgentDealsCacheRequest::SetPayerMode(const uint64_t& _payerMode)
{
    m_payerMode = _payerMode;
    m_payerModeHasBeenSet = true;
}

bool DescribeAgentDealsCacheRequest::PayerModeHasBeenSet() const
{
    return m_payerModeHasBeenSet;
}


