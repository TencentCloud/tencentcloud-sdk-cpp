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

#include <tencentcloud/mps/v20190612/model/SchedulesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SchedulesInfo::SchedulesInfo() :
    m_scheduleIdHasBeenSet(false),
    m_scheduleNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_triggerHasBeenSet(false),
    m_activitiesHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputDirHasBeenSet(false),
    m_taskNotifyConfigHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

CoreInternalOutcome SchedulesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScheduleId") && !value["ScheduleId"].IsNull())
    {
        if (!value["ScheduleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulesInfo.ScheduleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleId = value["ScheduleId"].GetInt64();
        m_scheduleIdHasBeenSet = true;
    }

    if (value.HasMember("ScheduleName") && !value["ScheduleName"].IsNull())
    {
        if (!value["ScheduleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulesInfo.ScheduleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleName = string(value["ScheduleName"].GetString());
        m_scheduleNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulesInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulesInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Trigger") && !value["Trigger"].IsNull())
    {
        if (!value["Trigger"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulesInfo.Trigger` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trigger.Deserialize(value["Trigger"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_triggerHasBeenSet = true;
    }

    if (value.HasMember("Activities") && !value["Activities"].IsNull())
    {
        if (!value["Activities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulesInfo.Activities` is not array type"));

        const rapidjson::Value &tmpValue = value["Activities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Activity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_activities.push_back(item);
        }
        m_activitiesHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulesInfo.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }

    if (value.HasMember("OutputDir") && !value["OutputDir"].IsNull())
    {
        if (!value["OutputDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulesInfo.OutputDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputDir = string(value["OutputDir"].GetString());
        m_outputDirHasBeenSet = true;
    }

    if (value.HasMember("TaskNotifyConfig") && !value["TaskNotifyConfig"].IsNull())
    {
        if (!value["TaskNotifyConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulesInfo.TaskNotifyConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskNotifyConfig.Deserialize(value["TaskNotifyConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskNotifyConfigHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulesInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulesInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulesInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchedulesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduleId, allocator);
    }

    if (m_scheduleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trigger.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_activitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Activities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_activities.begin(); itr != m_activities.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputDir.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNotifyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNotifyConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskNotifyConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

}


int64_t SchedulesInfo::GetScheduleId() const
{
    return m_scheduleId;
}

void SchedulesInfo::SetScheduleId(const int64_t& _scheduleId)
{
    m_scheduleId = _scheduleId;
    m_scheduleIdHasBeenSet = true;
}

bool SchedulesInfo::ScheduleIdHasBeenSet() const
{
    return m_scheduleIdHasBeenSet;
}

string SchedulesInfo::GetScheduleName() const
{
    return m_scheduleName;
}

void SchedulesInfo::SetScheduleName(const string& _scheduleName)
{
    m_scheduleName = _scheduleName;
    m_scheduleNameHasBeenSet = true;
}

bool SchedulesInfo::ScheduleNameHasBeenSet() const
{
    return m_scheduleNameHasBeenSet;
}

string SchedulesInfo::GetType() const
{
    return m_type;
}

void SchedulesInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SchedulesInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SchedulesInfo::GetStatus() const
{
    return m_status;
}

void SchedulesInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SchedulesInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

WorkflowTrigger SchedulesInfo::GetTrigger() const
{
    return m_trigger;
}

void SchedulesInfo::SetTrigger(const WorkflowTrigger& _trigger)
{
    m_trigger = _trigger;
    m_triggerHasBeenSet = true;
}

bool SchedulesInfo::TriggerHasBeenSet() const
{
    return m_triggerHasBeenSet;
}

vector<Activity> SchedulesInfo::GetActivities() const
{
    return m_activities;
}

void SchedulesInfo::SetActivities(const vector<Activity>& _activities)
{
    m_activities = _activities;
    m_activitiesHasBeenSet = true;
}

bool SchedulesInfo::ActivitiesHasBeenSet() const
{
    return m_activitiesHasBeenSet;
}

TaskOutputStorage SchedulesInfo::GetOutputStorage() const
{
    return m_outputStorage;
}

void SchedulesInfo::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool SchedulesInfo::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string SchedulesInfo::GetOutputDir() const
{
    return m_outputDir;
}

void SchedulesInfo::SetOutputDir(const string& _outputDir)
{
    m_outputDir = _outputDir;
    m_outputDirHasBeenSet = true;
}

bool SchedulesInfo::OutputDirHasBeenSet() const
{
    return m_outputDirHasBeenSet;
}

TaskNotifyConfig SchedulesInfo::GetTaskNotifyConfig() const
{
    return m_taskNotifyConfig;
}

void SchedulesInfo::SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig)
{
    m_taskNotifyConfig = _taskNotifyConfig;
    m_taskNotifyConfigHasBeenSet = true;
}

bool SchedulesInfo::TaskNotifyConfigHasBeenSet() const
{
    return m_taskNotifyConfigHasBeenSet;
}

string SchedulesInfo::GetCreateTime() const
{
    return m_createTime;
}

void SchedulesInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SchedulesInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SchedulesInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void SchedulesInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SchedulesInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string SchedulesInfo::GetResourceId() const
{
    return m_resourceId;
}

void SchedulesInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool SchedulesInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

