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

#include <tencentcloud/wedata/v20210820/model/TaskVersionDsDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskVersionDsDTO::TaskVersionDsDTO() :
    m_versionIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_versionNumHasBeenSet(false),
    m_versionRemarkHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_lastSchedulerCommitTimeHasBeenSet(false),
    m_usedVersionHasBeenSet(false),
    m_taskInfoHasBeenSet(false),
    m_taskParaInfoHasBeenSet(false),
    m_taskInputParamHasBeenSet(false),
    m_taskOutputParamHasBeenSet(false),
    m_taskLinkInfoHasBeenSet(false),
    m_approveStatusHasBeenSet(false),
    m_approveNameHasBeenSet(false),
    m_taskEventPublisherHasBeenSet(false),
    m_taskRegisterOutputTableHasBeenSet(false),
    m_taskCycleLinkInfoHasBeenSet(false),
    m_taskEventListenerHasBeenSet(false),
    m_approveTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskVersionDsDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("VersionNum") && !value["VersionNum"].IsNull())
    {
        if (!value["VersionNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.VersionNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionNum = string(value["VersionNum"].GetString());
        m_versionNumHasBeenSet = true;
    }

    if (value.HasMember("VersionRemark") && !value["VersionRemark"].IsNull())
    {
        if (!value["VersionRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.VersionRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionRemark = string(value["VersionRemark"].GetString());
        m_versionRemarkHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastSchedulerCommitTime") && !value["LastSchedulerCommitTime"].IsNull())
    {
        if (!value["LastSchedulerCommitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.LastSchedulerCommitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastSchedulerCommitTime = string(value["LastSchedulerCommitTime"].GetString());
        m_lastSchedulerCommitTimeHasBeenSet = true;
    }

    if (value.HasMember("UsedVersion") && !value["UsedVersion"].IsNull())
    {
        if (!value["UsedVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.UsedVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedVersion = value["UsedVersion"].GetInt64();
        m_usedVersionHasBeenSet = true;
    }

    if (value.HasMember("TaskInfo") && !value["TaskInfo"].IsNull())
    {
        if (!value["TaskInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.TaskInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskInfo.Deserialize(value["TaskInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskInfoHasBeenSet = true;
    }

    if (value.HasMember("TaskParaInfo") && !value["TaskParaInfo"].IsNull())
    {
        if (!value["TaskParaInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.TaskParaInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskParaInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParameterTaskDsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskParaInfo.push_back(item);
        }
        m_taskParaInfoHasBeenSet = true;
    }

    if (value.HasMember("TaskInputParam") && !value["TaskInputParam"].IsNull())
    {
        if (!value["TaskInputParam"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.TaskInputParam` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskInputParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParameterTaskInDsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskInputParam.push_back(item);
        }
        m_taskInputParamHasBeenSet = true;
    }

    if (value.HasMember("TaskOutputParam") && !value["TaskOutputParam"].IsNull())
    {
        if (!value["TaskOutputParam"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.TaskOutputParam` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskOutputParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParameterTaskOutDsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskOutputParam.push_back(item);
        }
        m_taskOutputParamHasBeenSet = true;
    }

    if (value.HasMember("TaskLinkInfo") && !value["TaskLinkInfo"].IsNull())
    {
        if (!value["TaskLinkInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.TaskLinkInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskLinkInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskLinkDsDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskLinkInfo.push_back(item);
        }
        m_taskLinkInfoHasBeenSet = true;
    }

    if (value.HasMember("ApproveStatus") && !value["ApproveStatus"].IsNull())
    {
        if (!value["ApproveStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.ApproveStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveStatus = string(value["ApproveStatus"].GetString());
        m_approveStatusHasBeenSet = true;
    }

    if (value.HasMember("ApproveName") && !value["ApproveName"].IsNull())
    {
        if (!value["ApproveName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.ApproveName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveName = string(value["ApproveName"].GetString());
        m_approveNameHasBeenSet = true;
    }

    if (value.HasMember("TaskEventPublisher") && !value["TaskEventPublisher"].IsNull())
    {
        if (!value["TaskEventPublisher"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.TaskEventPublisher` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskEventPublisher"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventPublisherDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskEventPublisher.push_back(item);
        }
        m_taskEventPublisherHasBeenSet = true;
    }

    if (value.HasMember("TaskRegisterOutputTable") && !value["TaskRegisterOutputTable"].IsNull())
    {
        if (!value["TaskRegisterOutputTable"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.TaskRegisterOutputTable` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskRegisterOutputTable"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskDataRegistryDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskRegisterOutputTable.push_back(item);
        }
        m_taskRegisterOutputTableHasBeenSet = true;
    }

    if (value.HasMember("TaskCycleLinkInfo") && !value["TaskCycleLinkInfo"].IsNull())
    {
        if (!value["TaskCycleLinkInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.TaskCycleLinkInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskCycleLinkInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskCycleLinkDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskCycleLinkInfo.push_back(item);
        }
        m_taskCycleLinkInfoHasBeenSet = true;
    }

    if (value.HasMember("TaskEventListener") && !value["TaskEventListener"].IsNull())
    {
        if (!value["TaskEventListener"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.TaskEventListener` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskEventListener"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventListenerDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskEventListener.push_back(item);
        }
        m_taskEventListenerHasBeenSet = true;
    }

    if (value.HasMember("ApproveTime") && !value["ApproveTime"].IsNull())
    {
        if (!value["ApproveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskVersionDsDTO.ApproveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveTime = string(value["ApproveTime"].GetString());
        m_approveTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskVersionDsDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionNum.c_str(), allocator).Move(), allocator);
    }

    if (m_versionRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
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

    if (m_lastSchedulerCommitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastSchedulerCommitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastSchedulerCommitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_usedVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedVersion, allocator);
    }

    if (m_taskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskParaInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskParaInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskParaInfo.begin(); itr != m_taskParaInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskInputParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInputParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskInputParam.begin(); itr != m_taskInputParam.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskOutputParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskOutputParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskOutputParam.begin(); itr != m_taskOutputParam.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskLinkInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskLinkInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskLinkInfo.begin(); itr != m_taskLinkInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_approveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_approveNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskEventPublisherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskEventPublisher";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskEventPublisher.begin(); itr != m_taskEventPublisher.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskRegisterOutputTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRegisterOutputTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskRegisterOutputTable.begin(); itr != m_taskRegisterOutputTable.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskCycleLinkInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCycleLinkInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskCycleLinkInfo.begin(); itr != m_taskCycleLinkInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskEventListenerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskEventListener";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskEventListener.begin(); itr != m_taskEventListener.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_approveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveTime.c_str(), allocator).Move(), allocator);
    }

}


string TaskVersionDsDTO::GetVersionId() const
{
    return m_versionId;
}

void TaskVersionDsDTO::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool TaskVersionDsDTO::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string TaskVersionDsDTO::GetTaskId() const
{
    return m_taskId;
}

void TaskVersionDsDTO::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskVersionDsDTO::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskVersionDsDTO::GetVersionNum() const
{
    return m_versionNum;
}

void TaskVersionDsDTO::SetVersionNum(const string& _versionNum)
{
    m_versionNum = _versionNum;
    m_versionNumHasBeenSet = true;
}

bool TaskVersionDsDTO::VersionNumHasBeenSet() const
{
    return m_versionNumHasBeenSet;
}

string TaskVersionDsDTO::GetVersionRemark() const
{
    return m_versionRemark;
}

void TaskVersionDsDTO::SetVersionRemark(const string& _versionRemark)
{
    m_versionRemark = _versionRemark;
    m_versionRemarkHasBeenSet = true;
}

bool TaskVersionDsDTO::VersionRemarkHasBeenSet() const
{
    return m_versionRemarkHasBeenSet;
}

string TaskVersionDsDTO::GetCreator() const
{
    return m_creator;
}

void TaskVersionDsDTO::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool TaskVersionDsDTO::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string TaskVersionDsDTO::GetCreateTime() const
{
    return m_createTime;
}

void TaskVersionDsDTO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskVersionDsDTO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskVersionDsDTO::GetUpdateTime() const
{
    return m_updateTime;
}

void TaskVersionDsDTO::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TaskVersionDsDTO::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TaskVersionDsDTO::GetLastSchedulerCommitTime() const
{
    return m_lastSchedulerCommitTime;
}

void TaskVersionDsDTO::SetLastSchedulerCommitTime(const string& _lastSchedulerCommitTime)
{
    m_lastSchedulerCommitTime = _lastSchedulerCommitTime;
    m_lastSchedulerCommitTimeHasBeenSet = true;
}

bool TaskVersionDsDTO::LastSchedulerCommitTimeHasBeenSet() const
{
    return m_lastSchedulerCommitTimeHasBeenSet;
}

int64_t TaskVersionDsDTO::GetUsedVersion() const
{
    return m_usedVersion;
}

void TaskVersionDsDTO::SetUsedVersion(const int64_t& _usedVersion)
{
    m_usedVersion = _usedVersion;
    m_usedVersionHasBeenSet = true;
}

bool TaskVersionDsDTO::UsedVersionHasBeenSet() const
{
    return m_usedVersionHasBeenSet;
}

TaskDsDTO TaskVersionDsDTO::GetTaskInfo() const
{
    return m_taskInfo;
}

void TaskVersionDsDTO::SetTaskInfo(const TaskDsDTO& _taskInfo)
{
    m_taskInfo = _taskInfo;
    m_taskInfoHasBeenSet = true;
}

bool TaskVersionDsDTO::TaskInfoHasBeenSet() const
{
    return m_taskInfoHasBeenSet;
}

vector<ParameterTaskDsDto> TaskVersionDsDTO::GetTaskParaInfo() const
{
    return m_taskParaInfo;
}

void TaskVersionDsDTO::SetTaskParaInfo(const vector<ParameterTaskDsDto>& _taskParaInfo)
{
    m_taskParaInfo = _taskParaInfo;
    m_taskParaInfoHasBeenSet = true;
}

bool TaskVersionDsDTO::TaskParaInfoHasBeenSet() const
{
    return m_taskParaInfoHasBeenSet;
}

vector<ParameterTaskInDsDto> TaskVersionDsDTO::GetTaskInputParam() const
{
    return m_taskInputParam;
}

void TaskVersionDsDTO::SetTaskInputParam(const vector<ParameterTaskInDsDto>& _taskInputParam)
{
    m_taskInputParam = _taskInputParam;
    m_taskInputParamHasBeenSet = true;
}

bool TaskVersionDsDTO::TaskInputParamHasBeenSet() const
{
    return m_taskInputParamHasBeenSet;
}

vector<ParameterTaskOutDsDto> TaskVersionDsDTO::GetTaskOutputParam() const
{
    return m_taskOutputParam;
}

void TaskVersionDsDTO::SetTaskOutputParam(const vector<ParameterTaskOutDsDto>& _taskOutputParam)
{
    m_taskOutputParam = _taskOutputParam;
    m_taskOutputParamHasBeenSet = true;
}

bool TaskVersionDsDTO::TaskOutputParamHasBeenSet() const
{
    return m_taskOutputParamHasBeenSet;
}

vector<TaskLinkDsDTO> TaskVersionDsDTO::GetTaskLinkInfo() const
{
    return m_taskLinkInfo;
}

void TaskVersionDsDTO::SetTaskLinkInfo(const vector<TaskLinkDsDTO>& _taskLinkInfo)
{
    m_taskLinkInfo = _taskLinkInfo;
    m_taskLinkInfoHasBeenSet = true;
}

bool TaskVersionDsDTO::TaskLinkInfoHasBeenSet() const
{
    return m_taskLinkInfoHasBeenSet;
}

string TaskVersionDsDTO::GetApproveStatus() const
{
    return m_approveStatus;
}

void TaskVersionDsDTO::SetApproveStatus(const string& _approveStatus)
{
    m_approveStatus = _approveStatus;
    m_approveStatusHasBeenSet = true;
}

bool TaskVersionDsDTO::ApproveStatusHasBeenSet() const
{
    return m_approveStatusHasBeenSet;
}

string TaskVersionDsDTO::GetApproveName() const
{
    return m_approveName;
}

void TaskVersionDsDTO::SetApproveName(const string& _approveName)
{
    m_approveName = _approveName;
    m_approveNameHasBeenSet = true;
}

bool TaskVersionDsDTO::ApproveNameHasBeenSet() const
{
    return m_approveNameHasBeenSet;
}

vector<EventPublisherDTO> TaskVersionDsDTO::GetTaskEventPublisher() const
{
    return m_taskEventPublisher;
}

void TaskVersionDsDTO::SetTaskEventPublisher(const vector<EventPublisherDTO>& _taskEventPublisher)
{
    m_taskEventPublisher = _taskEventPublisher;
    m_taskEventPublisherHasBeenSet = true;
}

bool TaskVersionDsDTO::TaskEventPublisherHasBeenSet() const
{
    return m_taskEventPublisherHasBeenSet;
}

vector<TaskDataRegistryDTO> TaskVersionDsDTO::GetTaskRegisterOutputTable() const
{
    return m_taskRegisterOutputTable;
}

void TaskVersionDsDTO::SetTaskRegisterOutputTable(const vector<TaskDataRegistryDTO>& _taskRegisterOutputTable)
{
    m_taskRegisterOutputTable = _taskRegisterOutputTable;
    m_taskRegisterOutputTableHasBeenSet = true;
}

bool TaskVersionDsDTO::TaskRegisterOutputTableHasBeenSet() const
{
    return m_taskRegisterOutputTableHasBeenSet;
}

vector<TaskCycleLinkDTO> TaskVersionDsDTO::GetTaskCycleLinkInfo() const
{
    return m_taskCycleLinkInfo;
}

void TaskVersionDsDTO::SetTaskCycleLinkInfo(const vector<TaskCycleLinkDTO>& _taskCycleLinkInfo)
{
    m_taskCycleLinkInfo = _taskCycleLinkInfo;
    m_taskCycleLinkInfoHasBeenSet = true;
}

bool TaskVersionDsDTO::TaskCycleLinkInfoHasBeenSet() const
{
    return m_taskCycleLinkInfoHasBeenSet;
}

vector<EventListenerDTO> TaskVersionDsDTO::GetTaskEventListener() const
{
    return m_taskEventListener;
}

void TaskVersionDsDTO::SetTaskEventListener(const vector<EventListenerDTO>& _taskEventListener)
{
    m_taskEventListener = _taskEventListener;
    m_taskEventListenerHasBeenSet = true;
}

bool TaskVersionDsDTO::TaskEventListenerHasBeenSet() const
{
    return m_taskEventListenerHasBeenSet;
}

string TaskVersionDsDTO::GetApproveTime() const
{
    return m_approveTime;
}

void TaskVersionDsDTO::SetApproveTime(const string& _approveTime)
{
    m_approveTime = _approveTime;
    m_approveTimeHasBeenSet = true;
}

bool TaskVersionDsDTO::ApproveTimeHasBeenSet() const
{
    return m_approveTimeHasBeenSet;
}

