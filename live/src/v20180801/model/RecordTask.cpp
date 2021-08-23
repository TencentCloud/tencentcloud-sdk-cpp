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

#include <tencentcloud/live/v20180801/model/RecordTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

RecordTask::RecordTask() :
    m_taskIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_stoppedHasBeenSet(false)
{
}

CoreInternalOutcome RecordTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTask.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTask.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTask.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTask.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTask.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTask.TemplateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetUint64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Stopped") && !value["Stopped"].IsNull())
    {
        if (!value["Stopped"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTask.Stopped` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stopped = value["Stopped"].GetUint64();
        m_stoppedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
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

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_stoppedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stopped";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stopped, allocator);
    }

}


string RecordTask::GetTaskId() const
{
    return m_taskId;
}

void RecordTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RecordTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string RecordTask::GetDomainName() const
{
    return m_domainName;
}

void RecordTask::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool RecordTask::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string RecordTask::GetAppName() const
{
    return m_appName;
}

void RecordTask::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool RecordTask::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string RecordTask::GetStreamName() const
{
    return m_streamName;
}

void RecordTask::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool RecordTask::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

uint64_t RecordTask::GetStartTime() const
{
    return m_startTime;
}

void RecordTask::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RecordTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t RecordTask::GetEndTime() const
{
    return m_endTime;
}

void RecordTask::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RecordTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t RecordTask::GetTemplateId() const
{
    return m_templateId;
}

void RecordTask::SetTemplateId(const uint64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool RecordTask::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

uint64_t RecordTask::GetStopped() const
{
    return m_stopped;
}

void RecordTask::SetStopped(const uint64_t& _stopped)
{
    m_stopped = _stopped;
    m_stoppedHasBeenSet = true;
}

bool RecordTask::StoppedHasBeenSet() const
{
    return m_stoppedHasBeenSet;
}

