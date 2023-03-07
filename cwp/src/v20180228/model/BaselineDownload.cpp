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

#include <tencentcloud/cwp/v20180228/model/BaselineDownload.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineDownload::BaselineDownload() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_downloadUrlHasBeenSet(false)
{
}

CoreInternalOutcome BaselineDownload::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDownload.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDownload.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDownload.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDownload.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDownload.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDownload.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineDownload::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

}


int64_t BaselineDownload::GetTaskId() const
{
    return m_taskId;
}

void BaselineDownload::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BaselineDownload::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string BaselineDownload::GetTaskName() const
{
    return m_taskName;
}

void BaselineDownload::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool BaselineDownload::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t BaselineDownload::GetStatus() const
{
    return m_status;
}

void BaselineDownload::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BaselineDownload::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BaselineDownload::GetStartTime() const
{
    return m_startTime;
}

void BaselineDownload::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BaselineDownload::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BaselineDownload::GetEndTime() const
{
    return m_endTime;
}

void BaselineDownload::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BaselineDownload::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string BaselineDownload::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void BaselineDownload::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool BaselineDownload::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

