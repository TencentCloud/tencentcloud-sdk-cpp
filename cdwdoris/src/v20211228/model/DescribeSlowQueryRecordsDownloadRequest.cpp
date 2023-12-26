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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeSlowQueryRecordsDownloadRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeSlowQueryRecordsDownloadRequest::DescribeSlowQueryRecordsDownloadRequest() :
    m_instanceIdHasBeenSet(false),
    m_queryDurationMsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationMsHasBeenSet(false)
{
}

string DescribeSlowQueryRecordsDownloadRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryDurationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDurationMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryDurationMs, allocator);
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

    if (m_durationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_durationMs.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSlowQueryRecordsDownloadRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeSlowQueryRecordsDownloadRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeSlowQueryRecordsDownloadRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeSlowQueryRecordsDownloadRequest::GetQueryDurationMs() const
{
    return m_queryDurationMs;
}

void DescribeSlowQueryRecordsDownloadRequest::SetQueryDurationMs(const int64_t& _queryDurationMs)
{
    m_queryDurationMs = _queryDurationMs;
    m_queryDurationMsHasBeenSet = true;
}

bool DescribeSlowQueryRecordsDownloadRequest::QueryDurationMsHasBeenSet() const
{
    return m_queryDurationMsHasBeenSet;
}

string DescribeSlowQueryRecordsDownloadRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeSlowQueryRecordsDownloadRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeSlowQueryRecordsDownloadRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeSlowQueryRecordsDownloadRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeSlowQueryRecordsDownloadRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeSlowQueryRecordsDownloadRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeSlowQueryRecordsDownloadRequest::GetDurationMs() const
{
    return m_durationMs;
}

void DescribeSlowQueryRecordsDownloadRequest::SetDurationMs(const string& _durationMs)
{
    m_durationMs = _durationMs;
    m_durationMsHasBeenSet = true;
}

bool DescribeSlowQueryRecordsDownloadRequest::DurationMsHasBeenSet() const
{
    return m_durationMsHasBeenSet;
}


