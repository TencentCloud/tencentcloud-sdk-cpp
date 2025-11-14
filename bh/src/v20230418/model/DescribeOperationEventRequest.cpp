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

#include <tencentcloud/bh/v20230418/model/DescribeOperationEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

DescribeOperationEventRequest::DescribeOperationEventRequest() :
    m_userNameHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_kindSetHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_resultSetHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeOperationEventRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_realNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realName.c_str(), allocator).Move(), allocator);
    }

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

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kind, allocator);
    }

    if (m_kindSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KindSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kindSet.begin(); itr != m_kindSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_result, allocator);
    }

    if (m_resultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resultSet.begin(); itr != m_resultSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
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


string DescribeOperationEventRequest::GetUserName() const
{
    return m_userName;
}

void DescribeOperationEventRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeOperationEventRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeOperationEventRequest::GetRealName() const
{
    return m_realName;
}

void DescribeOperationEventRequest::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool DescribeOperationEventRequest::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string DescribeOperationEventRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeOperationEventRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeOperationEventRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeOperationEventRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeOperationEventRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeOperationEventRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeOperationEventRequest::GetSourceIp() const
{
    return m_sourceIp;
}

void DescribeOperationEventRequest::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool DescribeOperationEventRequest::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

uint64_t DescribeOperationEventRequest::GetKind() const
{
    return m_kind;
}

void DescribeOperationEventRequest::SetKind(const uint64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DescribeOperationEventRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

vector<uint64_t> DescribeOperationEventRequest::GetKindSet() const
{
    return m_kindSet;
}

void DescribeOperationEventRequest::SetKindSet(const vector<uint64_t>& _kindSet)
{
    m_kindSet = _kindSet;
    m_kindSetHasBeenSet = true;
}

bool DescribeOperationEventRequest::KindSetHasBeenSet() const
{
    return m_kindSetHasBeenSet;
}

uint64_t DescribeOperationEventRequest::GetResult() const
{
    return m_result;
}

void DescribeOperationEventRequest::SetResult(const uint64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool DescribeOperationEventRequest::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

vector<uint64_t> DescribeOperationEventRequest::GetResultSet() const
{
    return m_resultSet;
}

void DescribeOperationEventRequest::SetResultSet(const vector<uint64_t>& _resultSet)
{
    m_resultSet = _resultSet;
    m_resultSetHasBeenSet = true;
}

bool DescribeOperationEventRequest::ResultSetHasBeenSet() const
{
    return m_resultSetHasBeenSet;
}

uint64_t DescribeOperationEventRequest::GetOffset() const
{
    return m_offset;
}

void DescribeOperationEventRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeOperationEventRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeOperationEventRequest::GetLimit() const
{
    return m_limit;
}

void DescribeOperationEventRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeOperationEventRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


