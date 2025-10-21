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

#include <tencentcloud/live/v20180801/model/DescribeStreamPlayInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeStreamPlayInfoListRequest::DescribeStreamPlayInfoListRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_playDomainHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

string DescribeStreamPlayInfoListRequest::ToJsonString() const
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

    if (m_playDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStreamPlayInfoListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeStreamPlayInfoListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeStreamPlayInfoListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeStreamPlayInfoListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeStreamPlayInfoListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeStreamPlayInfoListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeStreamPlayInfoListRequest::GetPlayDomain() const
{
    return m_playDomain;
}

void DescribeStreamPlayInfoListRequest::SetPlayDomain(const string& _playDomain)
{
    m_playDomain = _playDomain;
    m_playDomainHasBeenSet = true;
}

bool DescribeStreamPlayInfoListRequest::PlayDomainHasBeenSet() const
{
    return m_playDomainHasBeenSet;
}

string DescribeStreamPlayInfoListRequest::GetStreamName() const
{
    return m_streamName;
}

void DescribeStreamPlayInfoListRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool DescribeStreamPlayInfoListRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string DescribeStreamPlayInfoListRequest::GetAppName() const
{
    return m_appName;
}

void DescribeStreamPlayInfoListRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DescribeStreamPlayInfoListRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DescribeStreamPlayInfoListRequest::GetServiceName() const
{
    return m_serviceName;
}

void DescribeStreamPlayInfoListRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool DescribeStreamPlayInfoListRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}


