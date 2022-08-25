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

#include <tencentcloud/tcr/v20190924/model/GCJobInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

GCJobInfo::GCJobInfo() :
    m_iDHasBeenSet(false),
    m_jobStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_scheduleHasBeenSet(false)
{
}

CoreInternalOutcome GCJobInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GCJobInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("JobStatus") && !value["JobStatus"].IsNull())
    {
        if (!value["JobStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GCJobInfo.JobStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatus = string(value["JobStatus"].GetString());
        m_jobStatusHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GCJobInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GCJobInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Schedule") && !value["Schedule"].IsNull())
    {
        if (!value["Schedule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GCJobInfo.Schedule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_schedule.Deserialize(value["Schedule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scheduleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GCJobInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_jobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_schedule.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t GCJobInfo::GetID() const
{
    return m_iD;
}

void GCJobInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool GCJobInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string GCJobInfo::GetJobStatus() const
{
    return m_jobStatus;
}

void GCJobInfo::SetJobStatus(const string& _jobStatus)
{
    m_jobStatus = _jobStatus;
    m_jobStatusHasBeenSet = true;
}

bool GCJobInfo::JobStatusHasBeenSet() const
{
    return m_jobStatusHasBeenSet;
}

string GCJobInfo::GetCreationTime() const
{
    return m_creationTime;
}

void GCJobInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool GCJobInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string GCJobInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void GCJobInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool GCJobInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

Schedule GCJobInfo::GetSchedule() const
{
    return m_schedule;
}

void GCJobInfo::SetSchedule(const Schedule& _schedule)
{
    m_schedule = _schedule;
    m_scheduleHasBeenSet = true;
}

bool GCJobInfo::ScheduleHasBeenSet() const
{
    return m_scheduleHasBeenSet;
}

