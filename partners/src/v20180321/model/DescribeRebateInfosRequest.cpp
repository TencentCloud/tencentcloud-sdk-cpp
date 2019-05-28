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

#include <tencentcloud/partners/v20180321/model/DescribeRebateInfosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Partners::V20180321::Model;
using namespace rapidjson;
using namespace std;

DescribeRebateInfosRequest::DescribeRebateInfosRequest() :
    m_rebateMonthHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeRebateInfosRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_rebateMonthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RebateMonth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_rebateMonth.c_str(), allocator).Move(), allocator);
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


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRebateInfosRequest::GetRebateMonth() const
{
    return m_rebateMonth;
}

void DescribeRebateInfosRequest::SetRebateMonth(const string& _rebateMonth)
{
    m_rebateMonth = _rebateMonth;
    m_rebateMonthHasBeenSet = true;
}

bool DescribeRebateInfosRequest::RebateMonthHasBeenSet() const
{
    return m_rebateMonthHasBeenSet;
}

uint64_t DescribeRebateInfosRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRebateInfosRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRebateInfosRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeRebateInfosRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRebateInfosRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRebateInfosRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


