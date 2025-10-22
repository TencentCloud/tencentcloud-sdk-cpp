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

#include <tencentcloud/ccc/v20200210/model/DescribeSessionDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeSessionDetailRequest::DescribeSessionDetailRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false)
{
}

string DescribeSessionDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimestamp, allocator);
    }

    if (m_endTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimestamp, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeSessionDetailRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeSessionDetailRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeSessionDetailRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string DescribeSessionDetailRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeSessionDetailRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeSessionDetailRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t DescribeSessionDetailRequest::GetStartTimestamp() const
{
    return m_startTimestamp;
}

void DescribeSessionDetailRequest::SetStartTimestamp(const int64_t& _startTimestamp)
{
    m_startTimestamp = _startTimestamp;
    m_startTimestampHasBeenSet = true;
}

bool DescribeSessionDetailRequest::StartTimestampHasBeenSet() const
{
    return m_startTimestampHasBeenSet;
}

int64_t DescribeSessionDetailRequest::GetEndTimestamp() const
{
    return m_endTimestamp;
}

void DescribeSessionDetailRequest::SetEndTimestamp(const int64_t& _endTimestamp)
{
    m_endTimestamp = _endTimestamp;
    m_endTimestampHasBeenSet = true;
}

bool DescribeSessionDetailRequest::EndTimestampHasBeenSet() const
{
    return m_endTimestampHasBeenSet;
}


