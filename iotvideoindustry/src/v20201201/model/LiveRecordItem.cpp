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

#include <tencentcloud/iotvideoindustry/v20201201/model/LiveRecordItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

LiveRecordItem::LiveRecordItem() :
    m_intIDHasBeenSet(false),
    m_liveChannelIdHasBeenSet(false),
    m_expectDeleteTimeHasBeenSet(false),
    m_recordTimeLenHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_videoUrlHasBeenSet(false),
    m_recordPlanIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome LiveRecordItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IntID") && !value["IntID"].IsNull())
    {
        if (!value["IntID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordItem.IntID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intID = value["IntID"].GetInt64();
        m_intIDHasBeenSet = true;
    }

    if (value.HasMember("LiveChannelId") && !value["LiveChannelId"].IsNull())
    {
        if (!value["LiveChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordItem.LiveChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveChannelId = string(value["LiveChannelId"].GetString());
        m_liveChannelIdHasBeenSet = true;
    }

    if (value.HasMember("ExpectDeleteTime") && !value["ExpectDeleteTime"].IsNull())
    {
        if (!value["ExpectDeleteTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordItem.ExpectDeleteTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expectDeleteTime = value["ExpectDeleteTime"].GetInt64();
        m_expectDeleteTimeHasBeenSet = true;
    }

    if (value.HasMember("RecordTimeLen") && !value["RecordTimeLen"].IsNull())
    {
        if (!value["RecordTimeLen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordItem.RecordTimeLen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordTimeLen = value["RecordTimeLen"].GetInt64();
        m_recordTimeLenHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordItem.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("VideoUrl") && !value["VideoUrl"].IsNull())
    {
        if (!value["VideoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordItem.VideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoUrl = string(value["VideoUrl"].GetString());
        m_videoUrlHasBeenSet = true;
    }

    if (value.HasMember("RecordPlanId") && !value["RecordPlanId"].IsNull())
    {
        if (!value["RecordPlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordItem.RecordPlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordPlanId = string(value["RecordPlanId"].GetString());
        m_recordPlanIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordItem.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordItem.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveRecordItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_intIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intID, allocator);
    }

    if (m_liveChannelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveChannelId.c_str(), allocator).Move(), allocator);
    }

    if (m_expectDeleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectDeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expectDeleteTime, allocator);
    }

    if (m_recordTimeLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordTimeLen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordTimeLen, allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_recordPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordPlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

}


int64_t LiveRecordItem::GetIntID() const
{
    return m_intID;
}

void LiveRecordItem::SetIntID(const int64_t& _intID)
{
    m_intID = _intID;
    m_intIDHasBeenSet = true;
}

bool LiveRecordItem::IntIDHasBeenSet() const
{
    return m_intIDHasBeenSet;
}

string LiveRecordItem::GetLiveChannelId() const
{
    return m_liveChannelId;
}

void LiveRecordItem::SetLiveChannelId(const string& _liveChannelId)
{
    m_liveChannelId = _liveChannelId;
    m_liveChannelIdHasBeenSet = true;
}

bool LiveRecordItem::LiveChannelIdHasBeenSet() const
{
    return m_liveChannelIdHasBeenSet;
}

int64_t LiveRecordItem::GetExpectDeleteTime() const
{
    return m_expectDeleteTime;
}

void LiveRecordItem::SetExpectDeleteTime(const int64_t& _expectDeleteTime)
{
    m_expectDeleteTime = _expectDeleteTime;
    m_expectDeleteTimeHasBeenSet = true;
}

bool LiveRecordItem::ExpectDeleteTimeHasBeenSet() const
{
    return m_expectDeleteTimeHasBeenSet;
}

int64_t LiveRecordItem::GetRecordTimeLen() const
{
    return m_recordTimeLen;
}

void LiveRecordItem::SetRecordTimeLen(const int64_t& _recordTimeLen)
{
    m_recordTimeLen = _recordTimeLen;
    m_recordTimeLenHasBeenSet = true;
}

bool LiveRecordItem::RecordTimeLenHasBeenSet() const
{
    return m_recordTimeLenHasBeenSet;
}

int64_t LiveRecordItem::GetFileSize() const
{
    return m_fileSize;
}

void LiveRecordItem::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool LiveRecordItem::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string LiveRecordItem::GetVideoUrl() const
{
    return m_videoUrl;
}

void LiveRecordItem::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool LiveRecordItem::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

string LiveRecordItem::GetRecordPlanId() const
{
    return m_recordPlanId;
}

void LiveRecordItem::SetRecordPlanId(const string& _recordPlanId)
{
    m_recordPlanId = _recordPlanId;
    m_recordPlanIdHasBeenSet = true;
}

bool LiveRecordItem::RecordPlanIdHasBeenSet() const
{
    return m_recordPlanIdHasBeenSet;
}

int64_t LiveRecordItem::GetStartTime() const
{
    return m_startTime;
}

void LiveRecordItem::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool LiveRecordItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t LiveRecordItem::GetEndTime() const
{
    return m_endTime;
}

void LiveRecordItem::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool LiveRecordItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

