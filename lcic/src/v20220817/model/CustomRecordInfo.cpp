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

#include <tencentcloud/lcic/v20220817/model/CustomRecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

CustomRecordInfo::CustomRecordInfo() :
    m_startTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_fileFormatHasBeenSet(false),
    m_recordUrlHasBeenSet(false),
    m_recordSizeHasBeenSet(false),
    m_videoIdHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

CoreInternalOutcome CustomRecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRecordInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("StopTime") && !value["StopTime"].IsNull())
    {
        if (!value["StopTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRecordInfo.StopTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stopTime = value["StopTime"].GetUint64();
        m_stopTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRecordInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("FileFormat") && !value["FileFormat"].IsNull())
    {
        if (!value["FileFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRecordInfo.FileFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileFormat = string(value["FileFormat"].GetString());
        m_fileFormatHasBeenSet = true;
    }

    if (value.HasMember("RecordUrl") && !value["RecordUrl"].IsNull())
    {
        if (!value["RecordUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRecordInfo.RecordUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordUrl = string(value["RecordUrl"].GetString());
        m_recordUrlHasBeenSet = true;
    }

    if (value.HasMember("RecordSize") && !value["RecordSize"].IsNull())
    {
        if (!value["RecordSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRecordInfo.RecordSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordSize = value["RecordSize"].GetUint64();
        m_recordSizeHasBeenSet = true;
    }

    if (value.HasMember("VideoId") && !value["VideoId"].IsNull())
    {
        if (!value["VideoId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRecordInfo.VideoId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoId = string(value["VideoId"].GetString());
        m_videoIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRecordInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomRecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_stopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stopTime, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_fileFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_recordUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_recordSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordSize, allocator);
    }

    if (m_videoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CustomRecordInfo::GetStartTime() const
{
    return m_startTime;
}

void CustomRecordInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CustomRecordInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t CustomRecordInfo::GetStopTime() const
{
    return m_stopTime;
}

void CustomRecordInfo::SetStopTime(const uint64_t& _stopTime)
{
    m_stopTime = _stopTime;
    m_stopTimeHasBeenSet = true;
}

bool CustomRecordInfo::StopTimeHasBeenSet() const
{
    return m_stopTimeHasBeenSet;
}

uint64_t CustomRecordInfo::GetDuration() const
{
    return m_duration;
}

void CustomRecordInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CustomRecordInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string CustomRecordInfo::GetFileFormat() const
{
    return m_fileFormat;
}

void CustomRecordInfo::SetFileFormat(const string& _fileFormat)
{
    m_fileFormat = _fileFormat;
    m_fileFormatHasBeenSet = true;
}

bool CustomRecordInfo::FileFormatHasBeenSet() const
{
    return m_fileFormatHasBeenSet;
}

string CustomRecordInfo::GetRecordUrl() const
{
    return m_recordUrl;
}

void CustomRecordInfo::SetRecordUrl(const string& _recordUrl)
{
    m_recordUrl = _recordUrl;
    m_recordUrlHasBeenSet = true;
}

bool CustomRecordInfo::RecordUrlHasBeenSet() const
{
    return m_recordUrlHasBeenSet;
}

uint64_t CustomRecordInfo::GetRecordSize() const
{
    return m_recordSize;
}

void CustomRecordInfo::SetRecordSize(const uint64_t& _recordSize)
{
    m_recordSize = _recordSize;
    m_recordSizeHasBeenSet = true;
}

bool CustomRecordInfo::RecordSizeHasBeenSet() const
{
    return m_recordSizeHasBeenSet;
}

string CustomRecordInfo::GetVideoId() const
{
    return m_videoId;
}

void CustomRecordInfo::SetVideoId(const string& _videoId)
{
    m_videoId = _videoId;
    m_videoIdHasBeenSet = true;
}

bool CustomRecordInfo::VideoIdHasBeenSet() const
{
    return m_videoIdHasBeenSet;
}

string CustomRecordInfo::GetTaskId() const
{
    return m_taskId;
}

void CustomRecordInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CustomRecordInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

