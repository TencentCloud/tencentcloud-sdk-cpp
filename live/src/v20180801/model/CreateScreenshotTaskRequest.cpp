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

#include <tencentcloud/live/v20180801/model/CreateScreenshotTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateScreenshotTaskRequest::CreateScreenshotTaskRequest() :
    m_streamNameHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_streamTypeHasBeenSet(false),
    m_extensionHasBeenSet(false)
{
}

string CreateScreenshotTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_streamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_streamType, allocator);
    }

    if (m_extensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extension.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateScreenshotTaskRequest::GetStreamName() const
{
    return m_streamName;
}

void CreateScreenshotTaskRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool CreateScreenshotTaskRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string CreateScreenshotTaskRequest::GetDomainName() const
{
    return m_domainName;
}

void CreateScreenshotTaskRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool CreateScreenshotTaskRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string CreateScreenshotTaskRequest::GetAppName() const
{
    return m_appName;
}

void CreateScreenshotTaskRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateScreenshotTaskRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

uint64_t CreateScreenshotTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateScreenshotTaskRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateScreenshotTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t CreateScreenshotTaskRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateScreenshotTaskRequest::SetTemplateId(const uint64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateScreenshotTaskRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

uint64_t CreateScreenshotTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateScreenshotTaskRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateScreenshotTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t CreateScreenshotTaskRequest::GetStreamType() const
{
    return m_streamType;
}

void CreateScreenshotTaskRequest::SetStreamType(const uint64_t& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool CreateScreenshotTaskRequest::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

string CreateScreenshotTaskRequest::GetExtension() const
{
    return m_extension;
}

void CreateScreenshotTaskRequest::SetExtension(const string& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool CreateScreenshotTaskRequest::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}


