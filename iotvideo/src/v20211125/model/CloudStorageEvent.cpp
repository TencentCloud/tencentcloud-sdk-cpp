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

#include <tencentcloud/iotvideo/v20211125/model/CloudStorageEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

CloudStorageEvent::CloudStorageEvent() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_thumbnailHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_uploadStatusHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome CloudStorageEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageEvent.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageEvent.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Thumbnail") && !value["Thumbnail"].IsNull())
    {
        if (!value["Thumbnail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageEvent.Thumbnail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbnail = string(value["Thumbnail"].GetString());
        m_thumbnailHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageEvent.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("UploadStatus") && !value["UploadStatus"].IsNull())
    {
        if (!value["UploadStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageEvent.UploadStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadStatus = string(value["UploadStatus"].GetString());
        m_uploadStatusHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageEvent.Data` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_data = string(value["Data"].GetString());
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudStorageEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_thumbnailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Thumbnail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thumbnail.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CloudStorageEvent::GetStartTime() const
{
    return m_startTime;
}

void CloudStorageEvent::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CloudStorageEvent::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t CloudStorageEvent::GetEndTime() const
{
    return m_endTime;
}

void CloudStorageEvent::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CloudStorageEvent::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CloudStorageEvent::GetThumbnail() const
{
    return m_thumbnail;
}

void CloudStorageEvent::SetThumbnail(const string& _thumbnail)
{
    m_thumbnail = _thumbnail;
    m_thumbnailHasBeenSet = true;
}

bool CloudStorageEvent::ThumbnailHasBeenSet() const
{
    return m_thumbnailHasBeenSet;
}

string CloudStorageEvent::GetEventId() const
{
    return m_eventId;
}

void CloudStorageEvent::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool CloudStorageEvent::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string CloudStorageEvent::GetUploadStatus() const
{
    return m_uploadStatus;
}

void CloudStorageEvent::SetUploadStatus(const string& _uploadStatus)
{
    m_uploadStatus = _uploadStatus;
    m_uploadStatusHasBeenSet = true;
}

bool CloudStorageEvent::UploadStatusHasBeenSet() const
{
    return m_uploadStatusHasBeenSet;
}

string CloudStorageEvent::GetData() const
{
    return m_data;
}

void CloudStorageEvent::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool CloudStorageEvent::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

