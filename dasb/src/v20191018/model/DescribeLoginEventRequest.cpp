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

#include <tencentcloud/dasb/v20191018/model/DescribeLoginEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

DescribeLoginEventRequest::DescribeLoginEventRequest() :
    m_userNameHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_entryHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeLoginEventRequest::ToJsonString() const
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

    if (m_entryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_entry, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_result, allocator);
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


string DescribeLoginEventRequest::GetUserName() const
{
    return m_userName;
}

void DescribeLoginEventRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeLoginEventRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeLoginEventRequest::GetRealName() const
{
    return m_realName;
}

void DescribeLoginEventRequest::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool DescribeLoginEventRequest::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string DescribeLoginEventRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeLoginEventRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeLoginEventRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeLoginEventRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeLoginEventRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeLoginEventRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeLoginEventRequest::GetSourceIp() const
{
    return m_sourceIp;
}

void DescribeLoginEventRequest::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool DescribeLoginEventRequest::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

uint64_t DescribeLoginEventRequest::GetEntry() const
{
    return m_entry;
}

void DescribeLoginEventRequest::SetEntry(const uint64_t& _entry)
{
    m_entry = _entry;
    m_entryHasBeenSet = true;
}

bool DescribeLoginEventRequest::EntryHasBeenSet() const
{
    return m_entryHasBeenSet;
}

uint64_t DescribeLoginEventRequest::GetResult() const
{
    return m_result;
}

void DescribeLoginEventRequest::SetResult(const uint64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool DescribeLoginEventRequest::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

uint64_t DescribeLoginEventRequest::GetOffset() const
{
    return m_offset;
}

void DescribeLoginEventRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeLoginEventRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeLoginEventRequest::GetLimit() const
{
    return m_limit;
}

void DescribeLoginEventRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeLoginEventRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


