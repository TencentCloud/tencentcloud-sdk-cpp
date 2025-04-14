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

#include <tencentcloud/wedata/v20210820/model/InstanceDetailVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceDetailVO::InstanceDetailVO() :
    m_instanceKeyHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_inChargeListHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskCycleTypeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_executorGroupNameHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_nextCurDateHasBeenSet(false),
    m_tryLimitHasBeenSet(false),
    m_triesHasBeenSet(false),
    m_totalRunNumHasBeenSet(false),
    m_lifeRoundNumHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_schedulerTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_instanceRunTypeHasBeenSet(false),
    m_executionJobIdHasBeenSet(false),
    m_instanceLifeCycleListHasBeenSet(false),
    m_latestLogHasBeenSet(false)
{
}

CoreInternalOutcome InstanceDetailVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("InChargeList") && !value["InChargeList"].IsNull())
    {
        if (!value["InChargeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.InChargeList` is not array type"));

        const rapidjson::Value &tmpValue = value["InChargeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inChargeList.push_back((*itr).GetString());
        }
        m_inChargeListHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskCycleType") && !value["TaskCycleType"].IsNull())
    {
        if (!value["TaskCycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.TaskCycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCycleType = string(value["TaskCycleType"].GetString());
        m_taskCycleTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.TaskType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskType.Deserialize(value["TaskType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupId") && !value["ExecutorGroupId"].IsNull())
    {
        if (!value["ExecutorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.ExecutorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupId = string(value["ExecutorGroupId"].GetString());
        m_executorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupName") && !value["ExecutorGroupName"].IsNull())
    {
        if (!value["ExecutorGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.ExecutorGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupName = string(value["ExecutorGroupName"].GetString());
        m_executorGroupNameHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("NextCurDate") && !value["NextCurDate"].IsNull())
    {
        if (!value["NextCurDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.NextCurDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextCurDate = string(value["NextCurDate"].GetString());
        m_nextCurDateHasBeenSet = true;
    }

    if (value.HasMember("TryLimit") && !value["TryLimit"].IsNull())
    {
        if (!value["TryLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.TryLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tryLimit = value["TryLimit"].GetUint64();
        m_tryLimitHasBeenSet = true;
    }

    if (value.HasMember("Tries") && !value["Tries"].IsNull())
    {
        if (!value["Tries"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.Tries` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tries = value["Tries"].GetUint64();
        m_triesHasBeenSet = true;
    }

    if (value.HasMember("TotalRunNum") && !value["TotalRunNum"].IsNull())
    {
        if (!value["TotalRunNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.TotalRunNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRunNum = value["TotalRunNum"].GetUint64();
        m_totalRunNumHasBeenSet = true;
    }

    if (value.HasMember("LifeRoundNum") && !value["LifeRoundNum"].IsNull())
    {
        if (!value["LifeRoundNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.LifeRoundNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeRoundNum = value["LifeRoundNum"].GetUint64();
        m_lifeRoundNumHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.InstanceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetUint64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.InstanceState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = value["InstanceState"].GetUint64();
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("SchedulerTime") && !value["SchedulerTime"].IsNull())
    {
        if (!value["SchedulerTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.SchedulerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerTime = string(value["SchedulerTime"].GetString());
        m_schedulerTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.CostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = string(value["CostTime"].GetString());
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceRunType") && !value["InstanceRunType"].IsNull())
    {
        if (!value["InstanceRunType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.InstanceRunType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRunType = string(value["InstanceRunType"].GetString());
        m_instanceRunTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionJobId") && !value["ExecutionJobId"].IsNull())
    {
        if (!value["ExecutionJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.ExecutionJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionJobId = string(value["ExecutionJobId"].GetString());
        m_executionJobIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceLifeCycleList") && !value["InstanceLifeCycleList"].IsNull())
    {
        if (!value["InstanceLifeCycleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.InstanceLifeCycleList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceLifeCycleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceLifeCycleVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceLifeCycleList.push_back(item);
        }
        m_instanceLifeCycleListHasBeenSet = true;
    }

    if (value.HasMember("LatestLog") && !value["LatestLog"].IsNull())
    {
        if (!value["LatestLog"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetailVO.LatestLog` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_latestLog.Deserialize(value["LatestLog"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_latestLogHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceDetailVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inChargeList.begin(); itr != m_inChargeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

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

    if (m_taskCycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskCycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_nextCurDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextCurDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextCurDate.c_str(), allocator).Move(), allocator);
    }

    if (m_tryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tryLimit, allocator);
    }

    if (m_triesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tries, allocator);
    }

    if (m_totalRunNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRunNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRunNum, allocator);
    }

    if (m_lifeRoundNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeRoundNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeRoundNum, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceState, allocator);
    }

    if (m_schedulerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerTime.c_str(), allocator).Move(), allocator);
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

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_costTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRunTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRunType.c_str(), allocator).Move(), allocator);
    }

    if (m_executionJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceLifeCycleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceLifeCycleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceLifeCycleList.begin(); itr != m_instanceLifeCycleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_latestLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_latestLog.ToJsonObject(value[key.c_str()], allocator);
    }

}


string InstanceDetailVO::GetInstanceKey() const
{
    return m_instanceKey;
}

void InstanceDetailVO::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool InstanceDetailVO::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

string InstanceDetailVO::GetProjectId() const
{
    return m_projectId;
}

void InstanceDetailVO::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InstanceDetailVO::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string InstanceDetailVO::GetFolderId() const
{
    return m_folderId;
}

void InstanceDetailVO::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool InstanceDetailVO::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string InstanceDetailVO::GetFolderName() const
{
    return m_folderName;
}

void InstanceDetailVO::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool InstanceDetailVO::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string InstanceDetailVO::GetWorkflowId() const
{
    return m_workflowId;
}

void InstanceDetailVO::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool InstanceDetailVO::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string InstanceDetailVO::GetWorkflowName() const
{
    return m_workflowName;
}

void InstanceDetailVO::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool InstanceDetailVO::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

vector<string> InstanceDetailVO::GetInChargeList() const
{
    return m_inChargeList;
}

void InstanceDetailVO::SetInChargeList(const vector<string>& _inChargeList)
{
    m_inChargeList = _inChargeList;
    m_inChargeListHasBeenSet = true;
}

bool InstanceDetailVO::InChargeListHasBeenSet() const
{
    return m_inChargeListHasBeenSet;
}

string InstanceDetailVO::GetTaskId() const
{
    return m_taskId;
}

void InstanceDetailVO::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InstanceDetailVO::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string InstanceDetailVO::GetTaskName() const
{
    return m_taskName;
}

void InstanceDetailVO::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool InstanceDetailVO::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string InstanceDetailVO::GetTaskCycleType() const
{
    return m_taskCycleType;
}

void InstanceDetailVO::SetTaskCycleType(const string& _taskCycleType)
{
    m_taskCycleType = _taskCycleType;
    m_taskCycleTypeHasBeenSet = true;
}

bool InstanceDetailVO::TaskCycleTypeHasBeenSet() const
{
    return m_taskCycleTypeHasBeenSet;
}

TaskTypeOpsDto InstanceDetailVO::GetTaskType() const
{
    return m_taskType;
}

void InstanceDetailVO::SetTaskType(const TaskTypeOpsDto& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool InstanceDetailVO::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string InstanceDetailVO::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void InstanceDetailVO::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool InstanceDetailVO::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string InstanceDetailVO::GetExecutorGroupName() const
{
    return m_executorGroupName;
}

void InstanceDetailVO::SetExecutorGroupName(const string& _executorGroupName)
{
    m_executorGroupName = _executorGroupName;
    m_executorGroupNameHasBeenSet = true;
}

bool InstanceDetailVO::ExecutorGroupNameHasBeenSet() const
{
    return m_executorGroupNameHasBeenSet;
}

string InstanceDetailVO::GetCurRunDate() const
{
    return m_curRunDate;
}

void InstanceDetailVO::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool InstanceDetailVO::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string InstanceDetailVO::GetNextCurDate() const
{
    return m_nextCurDate;
}

void InstanceDetailVO::SetNextCurDate(const string& _nextCurDate)
{
    m_nextCurDate = _nextCurDate;
    m_nextCurDateHasBeenSet = true;
}

bool InstanceDetailVO::NextCurDateHasBeenSet() const
{
    return m_nextCurDateHasBeenSet;
}

uint64_t InstanceDetailVO::GetTryLimit() const
{
    return m_tryLimit;
}

void InstanceDetailVO::SetTryLimit(const uint64_t& _tryLimit)
{
    m_tryLimit = _tryLimit;
    m_tryLimitHasBeenSet = true;
}

bool InstanceDetailVO::TryLimitHasBeenSet() const
{
    return m_tryLimitHasBeenSet;
}

uint64_t InstanceDetailVO::GetTries() const
{
    return m_tries;
}

void InstanceDetailVO::SetTries(const uint64_t& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool InstanceDetailVO::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}

uint64_t InstanceDetailVO::GetTotalRunNum() const
{
    return m_totalRunNum;
}

void InstanceDetailVO::SetTotalRunNum(const uint64_t& _totalRunNum)
{
    m_totalRunNum = _totalRunNum;
    m_totalRunNumHasBeenSet = true;
}

bool InstanceDetailVO::TotalRunNumHasBeenSet() const
{
    return m_totalRunNumHasBeenSet;
}

uint64_t InstanceDetailVO::GetLifeRoundNum() const
{
    return m_lifeRoundNum;
}

void InstanceDetailVO::SetLifeRoundNum(const uint64_t& _lifeRoundNum)
{
    m_lifeRoundNum = _lifeRoundNum;
    m_lifeRoundNumHasBeenSet = true;
}

bool InstanceDetailVO::LifeRoundNumHasBeenSet() const
{
    return m_lifeRoundNumHasBeenSet;
}

uint64_t InstanceDetailVO::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceDetailVO::SetInstanceType(const uint64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceDetailVO::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t InstanceDetailVO::GetInstanceState() const
{
    return m_instanceState;
}

void InstanceDetailVO::SetInstanceState(const uint64_t& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool InstanceDetailVO::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string InstanceDetailVO::GetSchedulerTime() const
{
    return m_schedulerTime;
}

void InstanceDetailVO::SetSchedulerTime(const string& _schedulerTime)
{
    m_schedulerTime = _schedulerTime;
    m_schedulerTimeHasBeenSet = true;
}

bool InstanceDetailVO::SchedulerTimeHasBeenSet() const
{
    return m_schedulerTimeHasBeenSet;
}

string InstanceDetailVO::GetStartTime() const
{
    return m_startTime;
}

void InstanceDetailVO::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InstanceDetailVO::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InstanceDetailVO::GetEndTime() const
{
    return m_endTime;
}

void InstanceDetailVO::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InstanceDetailVO::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string InstanceDetailVO::GetCostTime() const
{
    return m_costTime;
}

void InstanceDetailVO::SetCostTime(const string& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool InstanceDetailVO::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

string InstanceDetailVO::GetInstanceRunType() const
{
    return m_instanceRunType;
}

void InstanceDetailVO::SetInstanceRunType(const string& _instanceRunType)
{
    m_instanceRunType = _instanceRunType;
    m_instanceRunTypeHasBeenSet = true;
}

bool InstanceDetailVO::InstanceRunTypeHasBeenSet() const
{
    return m_instanceRunTypeHasBeenSet;
}

string InstanceDetailVO::GetExecutionJobId() const
{
    return m_executionJobId;
}

void InstanceDetailVO::SetExecutionJobId(const string& _executionJobId)
{
    m_executionJobId = _executionJobId;
    m_executionJobIdHasBeenSet = true;
}

bool InstanceDetailVO::ExecutionJobIdHasBeenSet() const
{
    return m_executionJobIdHasBeenSet;
}

vector<InstanceLifeCycleVO> InstanceDetailVO::GetInstanceLifeCycleList() const
{
    return m_instanceLifeCycleList;
}

void InstanceDetailVO::SetInstanceLifeCycleList(const vector<InstanceLifeCycleVO>& _instanceLifeCycleList)
{
    m_instanceLifeCycleList = _instanceLifeCycleList;
    m_instanceLifeCycleListHasBeenSet = true;
}

bool InstanceDetailVO::InstanceLifeCycleListHasBeenSet() const
{
    return m_instanceLifeCycleListHasBeenSet;
}

InstanceLogVO InstanceDetailVO::GetLatestLog() const
{
    return m_latestLog;
}

void InstanceDetailVO::SetLatestLog(const InstanceLogVO& _latestLog)
{
    m_latestLog = _latestLog;
    m_latestLogHasBeenSet = true;
}

bool InstanceDetailVO::LatestLogHasBeenSet() const
{
    return m_latestLogHasBeenSet;
}

