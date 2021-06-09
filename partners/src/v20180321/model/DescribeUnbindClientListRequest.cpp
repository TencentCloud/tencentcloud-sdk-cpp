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

#include <tencentcloud/partners/v20180321/model/DescribeUnbindClientListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

DescribeUnbindClientListRequest::DescribeUnbindClientListRequest() :
    m_statusHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_unbindUinHasBeenSet(false),
    m_applyTimeStartHasBeenSet(false),
    m_applyTimeEndHasBeenSet(false),
    m_orderDirectionHasBeenSet(false)
{
}

string DescribeUnbindClientListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
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

    if (m_unbindUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnbindUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_unbindUin.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTimeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTimeStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyTimeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyTimeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDirection.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeUnbindClientListRequest::GetStatus() const
{
    return m_status;
}

void DescribeUnbindClientListRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeUnbindClientListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeUnbindClientListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeUnbindClientListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeUnbindClientListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeUnbindClientListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeUnbindClientListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeUnbindClientListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeUnbindClientListRequest::GetUnbindUin() const
{
    return m_unbindUin;
}

void DescribeUnbindClientListRequest::SetUnbindUin(const string& _unbindUin)
{
    m_unbindUin = _unbindUin;
    m_unbindUinHasBeenSet = true;
}

bool DescribeUnbindClientListRequest::UnbindUinHasBeenSet() const
{
    return m_unbindUinHasBeenSet;
}

string DescribeUnbindClientListRequest::GetApplyTimeStart() const
{
    return m_applyTimeStart;
}

void DescribeUnbindClientListRequest::SetApplyTimeStart(const string& _applyTimeStart)
{
    m_applyTimeStart = _applyTimeStart;
    m_applyTimeStartHasBeenSet = true;
}

bool DescribeUnbindClientListRequest::ApplyTimeStartHasBeenSet() const
{
    return m_applyTimeStartHasBeenSet;
}

string DescribeUnbindClientListRequest::GetApplyTimeEnd() const
{
    return m_applyTimeEnd;
}

void DescribeUnbindClientListRequest::SetApplyTimeEnd(const string& _applyTimeEnd)
{
    m_applyTimeEnd = _applyTimeEnd;
    m_applyTimeEndHasBeenSet = true;
}

bool DescribeUnbindClientListRequest::ApplyTimeEndHasBeenSet() const
{
    return m_applyTimeEndHasBeenSet;
}

string DescribeUnbindClientListRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeUnbindClientListRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeUnbindClientListRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}


