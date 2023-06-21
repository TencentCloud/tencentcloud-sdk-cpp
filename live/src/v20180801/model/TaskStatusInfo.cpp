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

#include <tencentcloud/live/v20180801/model/TaskStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

TaskStatusInfo::TaskStatusInfo() :
    m_fileUrlHasBeenSet(false),
    m_loopedTimesHasBeenSet(false),
    m_offsetTimeHasBeenSet(false),
    m_reportTimeHasBeenSet(false),
    m_runStatusHasBeenSet(false),
    m_fileDurationHasBeenSet(false),
    m_nextFileUrlHasBeenSet(false)
{
}

CoreInternalOutcome TaskStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatusInfo.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("LoopedTimes") && !value["LoopedTimes"].IsNull())
    {
        if (!value["LoopedTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatusInfo.LoopedTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loopedTimes = value["LoopedTimes"].GetInt64();
        m_loopedTimesHasBeenSet = true;
    }

    if (value.HasMember("OffsetTime") && !value["OffsetTime"].IsNull())
    {
        if (!value["OffsetTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatusInfo.OffsetTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offsetTime = value["OffsetTime"].GetInt64();
        m_offsetTimeHasBeenSet = true;
    }

    if (value.HasMember("ReportTime") && !value["ReportTime"].IsNull())
    {
        if (!value["ReportTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatusInfo.ReportTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportTime = string(value["ReportTime"].GetString());
        m_reportTimeHasBeenSet = true;
    }

    if (value.HasMember("RunStatus") && !value["RunStatus"].IsNull())
    {
        if (!value["RunStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatusInfo.RunStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runStatus = string(value["RunStatus"].GetString());
        m_runStatusHasBeenSet = true;
    }

    if (value.HasMember("FileDuration") && !value["FileDuration"].IsNull())
    {
        if (!value["FileDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatusInfo.FileDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileDuration = value["FileDuration"].GetInt64();
        m_fileDurationHasBeenSet = true;
    }

    if (value.HasMember("NextFileUrl") && !value["NextFileUrl"].IsNull())
    {
        if (!value["NextFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatusInfo.NextFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextFileUrl = string(value["NextFileUrl"].GetString());
        m_nextFileUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_loopedTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoopedTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loopedTimes, allocator);
    }

    if (m_offsetTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offsetTime, allocator);
    }

    if (m_reportTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_fileDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileDuration, allocator);
    }

    if (m_nextFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextFileUrl.c_str(), allocator).Move(), allocator);
    }

}


string TaskStatusInfo::GetFileUrl() const
{
    return m_fileUrl;
}

void TaskStatusInfo::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool TaskStatusInfo::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

int64_t TaskStatusInfo::GetLoopedTimes() const
{
    return m_loopedTimes;
}

void TaskStatusInfo::SetLoopedTimes(const int64_t& _loopedTimes)
{
    m_loopedTimes = _loopedTimes;
    m_loopedTimesHasBeenSet = true;
}

bool TaskStatusInfo::LoopedTimesHasBeenSet() const
{
    return m_loopedTimesHasBeenSet;
}

int64_t TaskStatusInfo::GetOffsetTime() const
{
    return m_offsetTime;
}

void TaskStatusInfo::SetOffsetTime(const int64_t& _offsetTime)
{
    m_offsetTime = _offsetTime;
    m_offsetTimeHasBeenSet = true;
}

bool TaskStatusInfo::OffsetTimeHasBeenSet() const
{
    return m_offsetTimeHasBeenSet;
}

string TaskStatusInfo::GetReportTime() const
{
    return m_reportTime;
}

void TaskStatusInfo::SetReportTime(const string& _reportTime)
{
    m_reportTime = _reportTime;
    m_reportTimeHasBeenSet = true;
}

bool TaskStatusInfo::ReportTimeHasBeenSet() const
{
    return m_reportTimeHasBeenSet;
}

string TaskStatusInfo::GetRunStatus() const
{
    return m_runStatus;
}

void TaskStatusInfo::SetRunStatus(const string& _runStatus)
{
    m_runStatus = _runStatus;
    m_runStatusHasBeenSet = true;
}

bool TaskStatusInfo::RunStatusHasBeenSet() const
{
    return m_runStatusHasBeenSet;
}

int64_t TaskStatusInfo::GetFileDuration() const
{
    return m_fileDuration;
}

void TaskStatusInfo::SetFileDuration(const int64_t& _fileDuration)
{
    m_fileDuration = _fileDuration;
    m_fileDurationHasBeenSet = true;
}

bool TaskStatusInfo::FileDurationHasBeenSet() const
{
    return m_fileDurationHasBeenSet;
}

string TaskStatusInfo::GetNextFileUrl() const
{
    return m_nextFileUrl;
}

void TaskStatusInfo::SetNextFileUrl(const string& _nextFileUrl)
{
    m_nextFileUrl = _nextFileUrl;
    m_nextFileUrlHasBeenSet = true;
}

bool TaskStatusInfo::NextFileUrlHasBeenSet() const
{
    return m_nextFileUrlHasBeenSet;
}

