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

#include <tencentcloud/wedata/v20210820/model/DescribePendingSubmitTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribePendingSubmitTaskInfo::DescribePendingSubmitTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_modifyTypeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_submitPreCheckHasBeenSet(false),
    m_submitPreCheckDetailListHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_executorGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribePendingSubmitTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePendingSubmitTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePendingSubmitTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("ModifyType") && !value["ModifyType"].IsNull())
    {
        if (!value["ModifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePendingSubmitTaskInfo.ModifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyType = string(value["ModifyType"].GetString());
        m_modifyTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePendingSubmitTaskInfo.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("SubmitPreCheck") && !value["SubmitPreCheck"].IsNull())
    {
        if (!value["SubmitPreCheck"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePendingSubmitTaskInfo.SubmitPreCheck` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitPreCheck = string(value["SubmitPreCheck"].GetString());
        m_submitPreCheckHasBeenSet = true;
    }

    if (value.HasMember("SubmitPreCheckDetailList") && !value["SubmitPreCheckDetailList"].IsNull())
    {
        if (!value["SubmitPreCheckDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribePendingSubmitTaskInfo.SubmitPreCheckDetailList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubmitPreCheckDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskSubmitPreCheckDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_submitPreCheckDetailList.push_back(item);
        }
        m_submitPreCheckDetailListHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupId") && !value["ExecutorGroupId"].IsNull())
    {
        if (!value["ExecutorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePendingSubmitTaskInfo.ExecutorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupId = string(value["ExecutorGroupId"].GetString());
        m_executorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupName") && !value["ExecutorGroupName"].IsNull())
    {
        if (!value["ExecutorGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePendingSubmitTaskInfo.ExecutorGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupName = string(value["ExecutorGroupName"].GetString());
        m_executorGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePendingSubmitTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_modifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_submitPreCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitPreCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitPreCheck.c_str(), allocator).Move(), allocator);
    }

    if (m_submitPreCheckDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitPreCheckDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_submitPreCheckDetailList.begin(); itr != m_submitPreCheckDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

}


string DescribePendingSubmitTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void DescribePendingSubmitTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribePendingSubmitTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribePendingSubmitTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void DescribePendingSubmitTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DescribePendingSubmitTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DescribePendingSubmitTaskInfo::GetModifyType() const
{
    return m_modifyType;
}

void DescribePendingSubmitTaskInfo::SetModifyType(const string& _modifyType)
{
    m_modifyType = _modifyType;
    m_modifyTypeHasBeenSet = true;
}

bool DescribePendingSubmitTaskInfo::ModifyTypeHasBeenSet() const
{
    return m_modifyTypeHasBeenSet;
}

string DescribePendingSubmitTaskInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void DescribePendingSubmitTaskInfo::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool DescribePendingSubmitTaskInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string DescribePendingSubmitTaskInfo::GetSubmitPreCheck() const
{
    return m_submitPreCheck;
}

void DescribePendingSubmitTaskInfo::SetSubmitPreCheck(const string& _submitPreCheck)
{
    m_submitPreCheck = _submitPreCheck;
    m_submitPreCheckHasBeenSet = true;
}

bool DescribePendingSubmitTaskInfo::SubmitPreCheckHasBeenSet() const
{
    return m_submitPreCheckHasBeenSet;
}

vector<TaskSubmitPreCheckDetailInfo> DescribePendingSubmitTaskInfo::GetSubmitPreCheckDetailList() const
{
    return m_submitPreCheckDetailList;
}

void DescribePendingSubmitTaskInfo::SetSubmitPreCheckDetailList(const vector<TaskSubmitPreCheckDetailInfo>& _submitPreCheckDetailList)
{
    m_submitPreCheckDetailList = _submitPreCheckDetailList;
    m_submitPreCheckDetailListHasBeenSet = true;
}

bool DescribePendingSubmitTaskInfo::SubmitPreCheckDetailListHasBeenSet() const
{
    return m_submitPreCheckDetailListHasBeenSet;
}

string DescribePendingSubmitTaskInfo::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void DescribePendingSubmitTaskInfo::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool DescribePendingSubmitTaskInfo::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string DescribePendingSubmitTaskInfo::GetExecutorGroupName() const
{
    return m_executorGroupName;
}

void DescribePendingSubmitTaskInfo::SetExecutorGroupName(const string& _executorGroupName)
{
    m_executorGroupName = _executorGroupName;
    m_executorGroupNameHasBeenSet = true;
}

bool DescribePendingSubmitTaskInfo::ExecutorGroupNameHasBeenSet() const
{
    return m_executorGroupNameHasBeenSet;
}

