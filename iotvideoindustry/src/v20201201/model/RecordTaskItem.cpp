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

#include <tencentcloud/iotvideoindustry/v20201201/model/RecordTaskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

RecordTaskItem::RecordTaskItem() :
    m_recordTaskIdHasBeenSet(false),
    m_recordPlanIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_videoUrlHasBeenSet(false),
    m_recordStatusHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_warnIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_initIDHasBeenSet(false),
    m_expectDeleteTimeHasBeenSet(false),
    m_recordTimeLenHasBeenSet(false),
    m_fileSizeHasBeenSet(false)
{
}

CoreInternalOutcome RecordTaskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordTaskId") && !value["RecordTaskId"].IsNull())
    {
        if (!value["RecordTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.RecordTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordTaskId = string(value["RecordTaskId"].GetString());
        m_recordTaskIdHasBeenSet = true;
    }

    if (value.HasMember("RecordPlanId") && !value["RecordPlanId"].IsNull())
    {
        if (!value["RecordPlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.RecordPlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordPlanId = string(value["RecordPlanId"].GetString());
        m_recordPlanIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("VideoUrl") && !value["VideoUrl"].IsNull())
    {
        if (!value["VideoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.VideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoUrl = string(value["VideoUrl"].GetString());
        m_videoUrlHasBeenSet = true;
    }

    if (value.HasMember("RecordStatus") && !value["RecordStatus"].IsNull())
    {
        if (!value["RecordStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.RecordStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStatus = value["RecordStatus"].GetInt64();
        m_recordStatusHasBeenSet = true;
    }

    if (value.HasMember("SceneId") && !value["SceneId"].IsNull())
    {
        if (!value["SceneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.SceneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sceneId = value["SceneId"].GetInt64();
        m_sceneIdHasBeenSet = true;
    }

    if (value.HasMember("WarnId") && !value["WarnId"].IsNull())
    {
        if (!value["WarnId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.WarnId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_warnId = value["WarnId"].GetInt64();
        m_warnIdHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("InitID") && !value["InitID"].IsNull())
    {
        if (!value["InitID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.InitID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initID = value["InitID"].GetInt64();
        m_initIDHasBeenSet = true;
    }

    if (value.HasMember("ExpectDeleteTime") && !value["ExpectDeleteTime"].IsNull())
    {
        if (!value["ExpectDeleteTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.ExpectDeleteTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expectDeleteTime = value["ExpectDeleteTime"].GetInt64();
        m_expectDeleteTimeHasBeenSet = true;
    }

    if (value.HasMember("RecordTimeLen") && !value["RecordTimeLen"].IsNull())
    {
        if (!value["RecordTimeLen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.RecordTimeLen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordTimeLen = value["RecordTimeLen"].GetInt64();
        m_recordTimeLenHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskItem.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordTaskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordTaskId.c_str(), allocator).Move(), allocator);
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

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_recordStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordStatus, allocator);
    }

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sceneId, allocator);
    }

    if (m_warnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warnId, allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_initIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initID, allocator);
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

}


string RecordTaskItem::GetRecordTaskId() const
{
    return m_recordTaskId;
}

void RecordTaskItem::SetRecordTaskId(const string& _recordTaskId)
{
    m_recordTaskId = _recordTaskId;
    m_recordTaskIdHasBeenSet = true;
}

bool RecordTaskItem::RecordTaskIdHasBeenSet() const
{
    return m_recordTaskIdHasBeenSet;
}

string RecordTaskItem::GetRecordPlanId() const
{
    return m_recordPlanId;
}

void RecordTaskItem::SetRecordPlanId(const string& _recordPlanId)
{
    m_recordPlanId = _recordPlanId;
    m_recordPlanIdHasBeenSet = true;
}

bool RecordTaskItem::RecordPlanIdHasBeenSet() const
{
    return m_recordPlanIdHasBeenSet;
}

int64_t RecordTaskItem::GetStartTime() const
{
    return m_startTime;
}

void RecordTaskItem::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RecordTaskItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t RecordTaskItem::GetEndTime() const
{
    return m_endTime;
}

void RecordTaskItem::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RecordTaskItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t RecordTaskItem::GetEventId() const
{
    return m_eventId;
}

void RecordTaskItem::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool RecordTaskItem::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string RecordTaskItem::GetVideoUrl() const
{
    return m_videoUrl;
}

void RecordTaskItem::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool RecordTaskItem::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

int64_t RecordTaskItem::GetRecordStatus() const
{
    return m_recordStatus;
}

void RecordTaskItem::SetRecordStatus(const int64_t& _recordStatus)
{
    m_recordStatus = _recordStatus;
    m_recordStatusHasBeenSet = true;
}

bool RecordTaskItem::RecordStatusHasBeenSet() const
{
    return m_recordStatusHasBeenSet;
}

int64_t RecordTaskItem::GetSceneId() const
{
    return m_sceneId;
}

void RecordTaskItem::SetSceneId(const int64_t& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool RecordTaskItem::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

int64_t RecordTaskItem::GetWarnId() const
{
    return m_warnId;
}

void RecordTaskItem::SetWarnId(const int64_t& _warnId)
{
    m_warnId = _warnId;
    m_warnIdHasBeenSet = true;
}

bool RecordTaskItem::WarnIdHasBeenSet() const
{
    return m_warnIdHasBeenSet;
}

string RecordTaskItem::GetRecordId() const
{
    return m_recordId;
}

void RecordTaskItem::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool RecordTaskItem::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

int64_t RecordTaskItem::GetInitID() const
{
    return m_initID;
}

void RecordTaskItem::SetInitID(const int64_t& _initID)
{
    m_initID = _initID;
    m_initIDHasBeenSet = true;
}

bool RecordTaskItem::InitIDHasBeenSet() const
{
    return m_initIDHasBeenSet;
}

int64_t RecordTaskItem::GetExpectDeleteTime() const
{
    return m_expectDeleteTime;
}

void RecordTaskItem::SetExpectDeleteTime(const int64_t& _expectDeleteTime)
{
    m_expectDeleteTime = _expectDeleteTime;
    m_expectDeleteTimeHasBeenSet = true;
}

bool RecordTaskItem::ExpectDeleteTimeHasBeenSet() const
{
    return m_expectDeleteTimeHasBeenSet;
}

int64_t RecordTaskItem::GetRecordTimeLen() const
{
    return m_recordTimeLen;
}

void RecordTaskItem::SetRecordTimeLen(const int64_t& _recordTimeLen)
{
    m_recordTimeLen = _recordTimeLen;
    m_recordTimeLenHasBeenSet = true;
}

bool RecordTaskItem::RecordTimeLenHasBeenSet() const
{
    return m_recordTimeLenHasBeenSet;
}

int64_t RecordTaskItem::GetFileSize() const
{
    return m_fileSize;
}

void RecordTaskItem::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool RecordTaskItem::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

