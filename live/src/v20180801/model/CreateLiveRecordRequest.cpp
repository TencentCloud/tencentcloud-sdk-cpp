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

#include <tencentcloud/live/v20180801/model/CreateLiveRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateLiveRecordRequest::CreateLiveRecordRequest() :
    m_streamNameHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_fileFormatHasBeenSet(false),
    m_highlightHasBeenSet(false),
    m_mixStreamHasBeenSet(false),
    m_streamParamHasBeenSet(false)
{
}

string CreateLiveRecordRequest::ToJsonString() const
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

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_highlightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Highlight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_highlight, allocator);
    }

    if (m_mixStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixStream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mixStream, allocator);
    }

    if (m_streamParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamParam.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLiveRecordRequest::GetStreamName() const
{
    return m_streamName;
}

void CreateLiveRecordRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool CreateLiveRecordRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string CreateLiveRecordRequest::GetAppName() const
{
    return m_appName;
}

void CreateLiveRecordRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateLiveRecordRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string CreateLiveRecordRequest::GetDomainName() const
{
    return m_domainName;
}

void CreateLiveRecordRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool CreateLiveRecordRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string CreateLiveRecordRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateLiveRecordRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateLiveRecordRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateLiveRecordRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateLiveRecordRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateLiveRecordRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CreateLiveRecordRequest::GetRecordType() const
{
    return m_recordType;
}

void CreateLiveRecordRequest::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool CreateLiveRecordRequest::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string CreateLiveRecordRequest::GetFileFormat() const
{
    return m_fileFormat;
}

void CreateLiveRecordRequest::SetFileFormat(const string& _fileFormat)
{
    m_fileFormat = _fileFormat;
    m_fileFormatHasBeenSet = true;
}

bool CreateLiveRecordRequest::FileFormatHasBeenSet() const
{
    return m_fileFormatHasBeenSet;
}

int64_t CreateLiveRecordRequest::GetHighlight() const
{
    return m_highlight;
}

void CreateLiveRecordRequest::SetHighlight(const int64_t& _highlight)
{
    m_highlight = _highlight;
    m_highlightHasBeenSet = true;
}

bool CreateLiveRecordRequest::HighlightHasBeenSet() const
{
    return m_highlightHasBeenSet;
}

int64_t CreateLiveRecordRequest::GetMixStream() const
{
    return m_mixStream;
}

void CreateLiveRecordRequest::SetMixStream(const int64_t& _mixStream)
{
    m_mixStream = _mixStream;
    m_mixStreamHasBeenSet = true;
}

bool CreateLiveRecordRequest::MixStreamHasBeenSet() const
{
    return m_mixStreamHasBeenSet;
}

string CreateLiveRecordRequest::GetStreamParam() const
{
    return m_streamParam;
}

void CreateLiveRecordRequest::SetStreamParam(const string& _streamParam)
{
    m_streamParam = _streamParam;
    m_streamParamHasBeenSet = true;
}

bool CreateLiveRecordRequest::StreamParamHasBeenSet() const
{
    return m_streamParamHasBeenSet;
}


