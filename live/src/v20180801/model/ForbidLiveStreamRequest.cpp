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

#include <tencentcloud/live/v20180801/model/ForbidLiveStreamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ForbidLiveStreamRequest::ForbidLiveStreamRequest() :
    m_appNameHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_resumeTimeHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

string ForbidLiveStreamRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_resumeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResumeTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resumeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ForbidLiveStreamRequest::GetAppName() const
{
    return m_appName;
}

void ForbidLiveStreamRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool ForbidLiveStreamRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string ForbidLiveStreamRequest::GetDomainName() const
{
    return m_domainName;
}

void ForbidLiveStreamRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool ForbidLiveStreamRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string ForbidLiveStreamRequest::GetStreamName() const
{
    return m_streamName;
}

void ForbidLiveStreamRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool ForbidLiveStreamRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string ForbidLiveStreamRequest::GetResumeTime() const
{
    return m_resumeTime;
}

void ForbidLiveStreamRequest::SetResumeTime(const string& _resumeTime)
{
    m_resumeTime = _resumeTime;
    m_resumeTimeHasBeenSet = true;
}

bool ForbidLiveStreamRequest::ResumeTimeHasBeenSet() const
{
    return m_resumeTimeHasBeenSet;
}

string ForbidLiveStreamRequest::GetReason() const
{
    return m_reason;
}

void ForbidLiveStreamRequest::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ForbidLiveStreamRequest::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}


