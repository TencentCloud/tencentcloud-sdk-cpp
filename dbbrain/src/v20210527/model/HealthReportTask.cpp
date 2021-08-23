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

#include <tencentcloud/dbbrain/v20210527/model/HealthReportTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

HealthReportTask::HealthReportTask() :
    m_asyncRequestIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_instanceInfoHasBeenSet(false),
    m_healthStatusHasBeenSet(false)
{
}

CoreInternalOutcome HealthReportTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AsyncRequestId") && !value["AsyncRequestId"].IsNull())
    {
        if (!value["AsyncRequestId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthReportTask.AsyncRequestId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_asyncRequestId = value["AsyncRequestId"].GetInt64();
        m_asyncRequestIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthReportTask.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthReportTask.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthReportTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthReportTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthReportTask.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceInfo") && !value["InstanceInfo"].IsNull())
    {
        if (!value["InstanceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HealthReportTask.InstanceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceInfo.Deserialize(value["InstanceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceInfoHasBeenSet = true;
    }

    if (value.HasMember("HealthStatus") && !value["HealthStatus"].IsNull())
    {
        if (!value["HealthStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HealthReportTask.HealthStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthStatus.Deserialize(value["HealthStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthReportTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_asyncRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asyncRequestId, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_instanceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_healthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthStatus.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t HealthReportTask::GetAsyncRequestId() const
{
    return m_asyncRequestId;
}

void HealthReportTask::SetAsyncRequestId(const int64_t& _asyncRequestId)
{
    m_asyncRequestId = _asyncRequestId;
    m_asyncRequestIdHasBeenSet = true;
}

bool HealthReportTask::AsyncRequestIdHasBeenSet() const
{
    return m_asyncRequestIdHasBeenSet;
}

string HealthReportTask::GetSource() const
{
    return m_source;
}

void HealthReportTask::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool HealthReportTask::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t HealthReportTask::GetProgress() const
{
    return m_progress;
}

void HealthReportTask::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool HealthReportTask::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string HealthReportTask::GetCreateTime() const
{
    return m_createTime;
}

void HealthReportTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HealthReportTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HealthReportTask::GetStartTime() const
{
    return m_startTime;
}

void HealthReportTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool HealthReportTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string HealthReportTask::GetEndTime() const
{
    return m_endTime;
}

void HealthReportTask::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool HealthReportTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

InstanceBasicInfo HealthReportTask::GetInstanceInfo() const
{
    return m_instanceInfo;
}

void HealthReportTask::SetInstanceInfo(const InstanceBasicInfo& _instanceInfo)
{
    m_instanceInfo = _instanceInfo;
    m_instanceInfoHasBeenSet = true;
}

bool HealthReportTask::InstanceInfoHasBeenSet() const
{
    return m_instanceInfoHasBeenSet;
}

HealthStatus HealthReportTask::GetHealthStatus() const
{
    return m_healthStatus;
}

void HealthReportTask::SetHealthStatus(const HealthStatus& _healthStatus)
{
    m_healthStatus = _healthStatus;
    m_healthStatusHasBeenSet = true;
}

bool HealthReportTask::HealthStatusHasBeenSet() const
{
    return m_healthStatusHasBeenSet;
}

