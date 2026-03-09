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

#include <tencentcloud/vod/v20180717/model/LiveRecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

LiveRecordInfo::LiveRecordInfo() :
    m_domainHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_recordStartTimeHasBeenSet(false),
    m_recordEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome LiveRecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("StreamId") && !value["StreamId"].IsNull())
    {
        if (!value["StreamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordInfo.StreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamId = string(value["StreamId"].GetString());
        m_streamIdHasBeenSet = true;
    }

    if (value.HasMember("RecordStartTime") && !value["RecordStartTime"].IsNull())
    {
        if (!value["RecordStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordInfo.RecordStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordStartTime = string(value["RecordStartTime"].GetString());
        m_recordStartTimeHasBeenSet = true;
    }

    if (value.HasMember("RecordEndTime") && !value["RecordEndTime"].IsNull())
    {
        if (!value["RecordEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordInfo.RecordEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordEndTime = string(value["RecordEndTime"].GetString());
        m_recordEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveRecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_streamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recordEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordEndTime.c_str(), allocator).Move(), allocator);
    }

}


string LiveRecordInfo::GetDomain() const
{
    return m_domain;
}

void LiveRecordInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool LiveRecordInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string LiveRecordInfo::GetPath() const
{
    return m_path;
}

void LiveRecordInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool LiveRecordInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string LiveRecordInfo::GetStreamId() const
{
    return m_streamId;
}

void LiveRecordInfo::SetStreamId(const string& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool LiveRecordInfo::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}

string LiveRecordInfo::GetRecordStartTime() const
{
    return m_recordStartTime;
}

void LiveRecordInfo::SetRecordStartTime(const string& _recordStartTime)
{
    m_recordStartTime = _recordStartTime;
    m_recordStartTimeHasBeenSet = true;
}

bool LiveRecordInfo::RecordStartTimeHasBeenSet() const
{
    return m_recordStartTimeHasBeenSet;
}

string LiveRecordInfo::GetRecordEndTime() const
{
    return m_recordEndTime;
}

void LiveRecordInfo::SetRecordEndTime(const string& _recordEndTime)
{
    m_recordEndTime = _recordEndTime;
    m_recordEndTimeHasBeenSet = true;
}

bool LiveRecordInfo::RecordEndTimeHasBeenSet() const
{
    return m_recordEndTimeHasBeenSet;
}

