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

#include <tencentcloud/rum/v20210622/model/DescribeReplayMetaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeReplayMetaRequest::DescribeReplayMetaRequest() :
    m_appIdHasBeenSet(false),
    m_replayIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_indexOnlyHasBeenSet(false),
    m_indexSegmentIdsHasBeenSet(false),
    m_probeMissingIndexHasBeenSet(false)
{
}

string DescribeReplayMetaRequest::ToJsonString() const
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

    if (m_indexOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_indexOnly, allocator);
    }

    if (m_indexSegmentIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexSegmentIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_indexSegmentIds.begin(); itr != m_indexSegmentIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_probeMissingIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeMissingIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_probeMissingIndex, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeReplayMetaRequest::GetAppId() const
{
    return m_appId;
}

void DescribeReplayMetaRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeReplayMetaRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeReplayMetaRequest::GetReplayId() const
{
    return m_replayId;
}

void DescribeReplayMetaRequest::SetReplayId(const string& _replayId)
{
    m_replayId = _replayId;
    m_replayIdHasBeenSet = true;
}

bool DescribeReplayMetaRequest::ReplayIdHasBeenSet() const
{
    return m_replayIdHasBeenSet;
}

string DescribeReplayMetaRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeReplayMetaRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeReplayMetaRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

bool DescribeReplayMetaRequest::GetIndexOnly() const
{
    return m_indexOnly;
}

void DescribeReplayMetaRequest::SetIndexOnly(const bool& _indexOnly)
{
    m_indexOnly = _indexOnly;
    m_indexOnlyHasBeenSet = true;
}

bool DescribeReplayMetaRequest::IndexOnlyHasBeenSet() const
{
    return m_indexOnlyHasBeenSet;
}

vector<int64_t> DescribeReplayMetaRequest::GetIndexSegmentIds() const
{
    return m_indexSegmentIds;
}

void DescribeReplayMetaRequest::SetIndexSegmentIds(const vector<int64_t>& _indexSegmentIds)
{
    m_indexSegmentIds = _indexSegmentIds;
    m_indexSegmentIdsHasBeenSet = true;
}

bool DescribeReplayMetaRequest::IndexSegmentIdsHasBeenSet() const
{
    return m_indexSegmentIdsHasBeenSet;
}

bool DescribeReplayMetaRequest::GetProbeMissingIndex() const
{
    return m_probeMissingIndex;
}

void DescribeReplayMetaRequest::SetProbeMissingIndex(const bool& _probeMissingIndex)
{
    m_probeMissingIndex = _probeMissingIndex;
    m_probeMissingIndexHasBeenSet = true;
}

bool DescribeReplayMetaRequest::ProbeMissingIndexHasBeenSet() const
{
    return m_probeMissingIndexHasBeenSet;
}


