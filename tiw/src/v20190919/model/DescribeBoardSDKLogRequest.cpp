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

#include <tencentcloud/tiw/v20190919/model/DescribeBoardSDKLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

DescribeBoardSDKLogRequest::DescribeBoardSDKLogRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_timeRangeHasBeenSet(false),
    m_aggregationIntervalHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_ascendingHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

string DescribeBoardSDKLogRequest::ToJsonString() const
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

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timeRange.begin(); itr != m_timeRange.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_aggregationIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregationInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aggregationInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_ascendingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ascending";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ascending, allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeBoardSDKLogRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeBoardSDKLogRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeBoardSDKLogRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string DescribeBoardSDKLogRequest::GetRoomId() const
{
    return m_roomId;
}

void DescribeBoardSDKLogRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool DescribeBoardSDKLogRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string DescribeBoardSDKLogRequest::GetUserId() const
{
    return m_userId;
}

void DescribeBoardSDKLogRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeBoardSDKLogRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

vector<int64_t> DescribeBoardSDKLogRequest::GetTimeRange() const
{
    return m_timeRange;
}

void DescribeBoardSDKLogRequest::SetTimeRange(const vector<int64_t>& _timeRange)
{
    m_timeRange = _timeRange;
    m_timeRangeHasBeenSet = true;
}

bool DescribeBoardSDKLogRequest::TimeRangeHasBeenSet() const
{
    return m_timeRangeHasBeenSet;
}

string DescribeBoardSDKLogRequest::GetAggregationInterval() const
{
    return m_aggregationInterval;
}

void DescribeBoardSDKLogRequest::SetAggregationInterval(const string& _aggregationInterval)
{
    m_aggregationInterval = _aggregationInterval;
    m_aggregationIntervalHasBeenSet = true;
}

bool DescribeBoardSDKLogRequest::AggregationIntervalHasBeenSet() const
{
    return m_aggregationIntervalHasBeenSet;
}

string DescribeBoardSDKLogRequest::GetQuery() const
{
    return m_query;
}

void DescribeBoardSDKLogRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool DescribeBoardSDKLogRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

bool DescribeBoardSDKLogRequest::GetAscending() const
{
    return m_ascending;
}

void DescribeBoardSDKLogRequest::SetAscending(const bool& _ascending)
{
    m_ascending = _ascending;
    m_ascendingHasBeenSet = true;
}

bool DescribeBoardSDKLogRequest::AscendingHasBeenSet() const
{
    return m_ascendingHasBeenSet;
}

string DescribeBoardSDKLogRequest::GetContext() const
{
    return m_context;
}

void DescribeBoardSDKLogRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool DescribeBoardSDKLogRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}


