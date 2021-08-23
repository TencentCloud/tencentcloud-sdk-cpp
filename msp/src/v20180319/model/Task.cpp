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

#include <tencentcloud/msp/v20180319/model/Task.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Msp::V20180319::Model;
using namespace std;

Task::Task() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_migrationTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_srcInfoHasBeenSet(false),
    m_migrationTimeLineHasBeenSet(false),
    m_updatedHasBeenSet(false),
    m_dstInfoHasBeenSet(false)
{
}

CoreInternalOutcome Task::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("MigrationType") && !value["MigrationType"].IsNull())
    {
        if (!value["MigrationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.MigrationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_migrationType = string(value["MigrationType"].GetString());
        m_migrationTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("SrcInfo") && !value["SrcInfo"].IsNull())
    {
        if (!value["SrcInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.SrcInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_srcInfo.Deserialize(value["SrcInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_srcInfoHasBeenSet = true;
    }

    if (value.HasMember("MigrationTimeLine") && !value["MigrationTimeLine"].IsNull())
    {
        if (!value["MigrationTimeLine"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.MigrationTimeLine` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_migrationTimeLine.Deserialize(value["MigrationTimeLine"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_migrationTimeLineHasBeenSet = true;
    }

    if (value.HasMember("Updated") && !value["Updated"].IsNull())
    {
        if (!value["Updated"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.Updated` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updated = string(value["Updated"].GetString());
        m_updatedHasBeenSet = true;
    }

    if (value.HasMember("DstInfo") && !value["DstInfo"].IsNull())
    {
        if (!value["DstInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.DstInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dstInfo.Deserialize(value["DstInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dstInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Task::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_migrationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_migrationType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_migrationTimeLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrationTimeLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_migrationTimeLine.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_updatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Updated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updated.c_str(), allocator).Move(), allocator);
    }

    if (m_dstInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Task::GetTaskId() const
{
    return m_taskId;
}

void Task::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool Task::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string Task::GetTaskName() const
{
    return m_taskName;
}

void Task::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool Task::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string Task::GetMigrationType() const
{
    return m_migrationType;
}

void Task::SetMigrationType(const string& _migrationType)
{
    m_migrationType = _migrationType;
    m_migrationTypeHasBeenSet = true;
}

bool Task::MigrationTypeHasBeenSet() const
{
    return m_migrationTypeHasBeenSet;
}

string Task::GetStatus() const
{
    return m_status;
}

void Task::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Task::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t Task::GetProjectId() const
{
    return m_projectId;
}

void Task::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Task::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Task::GetProjectName() const
{
    return m_projectName;
}

void Task::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool Task::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

SrcInfo Task::GetSrcInfo() const
{
    return m_srcInfo;
}

void Task::SetSrcInfo(const SrcInfo& _srcInfo)
{
    m_srcInfo = _srcInfo;
    m_srcInfoHasBeenSet = true;
}

bool Task::SrcInfoHasBeenSet() const
{
    return m_srcInfoHasBeenSet;
}

TimeObj Task::GetMigrationTimeLine() const
{
    return m_migrationTimeLine;
}

void Task::SetMigrationTimeLine(const TimeObj& _migrationTimeLine)
{
    m_migrationTimeLine = _migrationTimeLine;
    m_migrationTimeLineHasBeenSet = true;
}

bool Task::MigrationTimeLineHasBeenSet() const
{
    return m_migrationTimeLineHasBeenSet;
}

string Task::GetUpdated() const
{
    return m_updated;
}

void Task::SetUpdated(const string& _updated)
{
    m_updated = _updated;
    m_updatedHasBeenSet = true;
}

bool Task::UpdatedHasBeenSet() const
{
    return m_updatedHasBeenSet;
}

DstInfo Task::GetDstInfo() const
{
    return m_dstInfo;
}

void Task::SetDstInfo(const DstInfo& _dstInfo)
{
    m_dstInfo = _dstInfo;
    m_dstInfoHasBeenSet = true;
}

bool Task::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}

