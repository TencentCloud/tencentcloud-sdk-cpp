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

#include <tencentcloud/bh/v20230418/model/SearchAuditLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

SearchAuditLogRequest::SearchAuditLogRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_operationSetHasBeenSet(false),
    m_protocolSetHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string SearchAuditLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operationSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operationSet.begin(); itr != m_operationSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_protocolSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protocolSet.begin(); itr != m_protocolSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchAuditLogRequest::GetStartTime() const
{
    return m_startTime;
}

void SearchAuditLogRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SearchAuditLogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SearchAuditLogRequest::GetEndTime() const
{
    return m_endTime;
}

void SearchAuditLogRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SearchAuditLogRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<uint64_t> SearchAuditLogRequest::GetOperationSet() const
{
    return m_operationSet;
}

void SearchAuditLogRequest::SetOperationSet(const vector<uint64_t>& _operationSet)
{
    m_operationSet = _operationSet;
    m_operationSetHasBeenSet = true;
}

bool SearchAuditLogRequest::OperationSetHasBeenSet() const
{
    return m_operationSetHasBeenSet;
}

vector<string> SearchAuditLogRequest::GetProtocolSet() const
{
    return m_protocolSet;
}

void SearchAuditLogRequest::SetProtocolSet(const vector<string>& _protocolSet)
{
    m_protocolSet = _protocolSet;
    m_protocolSetHasBeenSet = true;
}

bool SearchAuditLogRequest::ProtocolSetHasBeenSet() const
{
    return m_protocolSetHasBeenSet;
}

uint64_t SearchAuditLogRequest::GetOffset() const
{
    return m_offset;
}

void SearchAuditLogRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchAuditLogRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t SearchAuditLogRequest::GetLimit() const
{
    return m_limit;
}

void SearchAuditLogRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchAuditLogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


