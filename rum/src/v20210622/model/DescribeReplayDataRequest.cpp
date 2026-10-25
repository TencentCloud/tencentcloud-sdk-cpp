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

#include <tencentcloud/rum/v20210622/model/DescribeReplayDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeReplayDataRequest::DescribeReplayDataRequest() :
    m_appIdHasBeenSet(false),
    m_replayIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_segmentIdHasBeenSet(false),
    m_maxDecodedBytesHasBeenSet(false)
{
}

string DescribeReplayDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_replayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replayId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_segmentId, allocator);
    }

    if (m_maxDecodedBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDecodedBytes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDecodedBytes, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeReplayDataRequest::GetAppId() const
{
    return m_appId;
}

void DescribeReplayDataRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeReplayDataRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeReplayDataRequest::GetReplayId() const
{
    return m_replayId;
}

void DescribeReplayDataRequest::SetReplayId(const string& _replayId)
{
    m_replayId = _replayId;
    m_replayIdHasBeenSet = true;
}

bool DescribeReplayDataRequest::ReplayIdHasBeenSet() const
{
    return m_replayIdHasBeenSet;
}

string DescribeReplayDataRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeReplayDataRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeReplayDataRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t DescribeReplayDataRequest::GetSegmentId() const
{
    return m_segmentId;
}

void DescribeReplayDataRequest::SetSegmentId(const int64_t& _segmentId)
{
    m_segmentId = _segmentId;
    m_segmentIdHasBeenSet = true;
}

bool DescribeReplayDataRequest::SegmentIdHasBeenSet() const
{
    return m_segmentIdHasBeenSet;
}

int64_t DescribeReplayDataRequest::GetMaxDecodedBytes() const
{
    return m_maxDecodedBytes;
}

void DescribeReplayDataRequest::SetMaxDecodedBytes(const int64_t& _maxDecodedBytes)
{
    m_maxDecodedBytes = _maxDecodedBytes;
    m_maxDecodedBytesHasBeenSet = true;
}

bool DescribeReplayDataRequest::MaxDecodedBytesHasBeenSet() const
{
    return m_maxDecodedBytesHasBeenSet;
}


