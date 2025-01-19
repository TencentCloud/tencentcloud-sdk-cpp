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

#include <tencentcloud/iotexplorer/v20190423/model/CloudStorageEventWithAITasks.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CloudStorageEventWithAITasks::CloudStorageEventWithAITasks() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_thumbnailHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_uploadStatusHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_aITasksHasBeenSet(false)
{
}

CoreInternalOutcome CloudStorageEventWithAITasks::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageEventWithAITasks.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageEventWithAITasks.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Thumbnail") && !value["Thumbnail"].IsNull())
    {
        if (!value["Thumbnail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageEventWithAITasks.Thumbnail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbnail = string(value["Thumbnail"].GetString());
        m_thumbnailHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageEventWithAITasks.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("UploadStatus") && !value["UploadStatus"].IsNull())
    {
        if (!value["UploadStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageEventWithAITasks.UploadStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadStatus = string(value["UploadStatus"].GetString());
        m_uploadStatusHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageEventWithAITasks.Data` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_data = string(value["Data"].GetString());
        m_dataHasBeenSet = true;
    }

    if (value.HasMember("AITasks") && !value["AITasks"].IsNull())
    {
        if (!value["AITasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudStorageEventWithAITasks.AITasks` is not array type"));

        const rapidjson::Value &tmpValue = value["AITasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudStorageAIServiceTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aITasks.push_back(item);
        }
        m_aITasksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudStorageEventWithAITasks::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_aITasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AITasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aITasks.begin(); itr != m_aITasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t CloudStorageEventWithAITasks::GetStartTime() const
{
    return m_startTime;
}

void CloudStorageEventWithAITasks::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CloudStorageEventWithAITasks::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t CloudStorageEventWithAITasks::GetEndTime() const
{
    return m_endTime;
}

void CloudStorageEventWithAITasks::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CloudStorageEventWithAITasks::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CloudStorageEventWithAITasks::GetThumbnail() const
{
    return m_thumbnail;
}

void CloudStorageEventWithAITasks::SetThumbnail(const string& _thumbnail)
{
    m_thumbnail = _thumbnail;
    m_thumbnailHasBeenSet = true;
}

bool CloudStorageEventWithAITasks::ThumbnailHasBeenSet() const
{
    return m_thumbnailHasBeenSet;
}

string CloudStorageEventWithAITasks::GetEventId() const
{
    return m_eventId;
}

void CloudStorageEventWithAITasks::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool CloudStorageEventWithAITasks::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string CloudStorageEventWithAITasks::GetUploadStatus() const
{
    return m_uploadStatus;
}

void CloudStorageEventWithAITasks::SetUploadStatus(const string& _uploadStatus)
{
    m_uploadStatus = _uploadStatus;
    m_uploadStatusHasBeenSet = true;
}

bool CloudStorageEventWithAITasks::UploadStatusHasBeenSet() const
{
    return m_uploadStatusHasBeenSet;
}

string CloudStorageEventWithAITasks::GetData() const
{
    return m_data;
}

void CloudStorageEventWithAITasks::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool CloudStorageEventWithAITasks::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

vector<CloudStorageAIServiceTask> CloudStorageEventWithAITasks::GetAITasks() const
{
    return m_aITasks;
}

void CloudStorageEventWithAITasks::SetAITasks(const vector<CloudStorageAIServiceTask>& _aITasks)
{
    m_aITasks = _aITasks;
    m_aITasksHasBeenSet = true;
}

bool CloudStorageEventWithAITasks::AITasksHasBeenSet() const
{
    return m_aITasksHasBeenSet;
}

