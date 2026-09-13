/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/databuddy/v20260715/model/WorkflowBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

WorkflowBrief::WorkflowBrief() :
    m_workflowNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_ownerUserNameHasBeenSet(false),
    m_ownerUserUinHasBeenSet(false),
    m_ownerDisplayNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_labelListHasBeenSet(false),
    m_triggerHasBeenSet(false),
    m_runUserUinHasBeenSet(false),
    m_runUserNameHasBeenSet(false),
    m_taskListHasBeenSet(false),
    m_workflowRunListHasBeenSet(false),
    m_resourceGroupInfoListHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false),
    m_gitConfigIdHasBeenSet(false),
    m_gitBranchHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserName") && !value["OwnerUserName"].IsNull())
    {
        if (!value["OwnerUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.OwnerUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserName = string(value["OwnerUserName"].GetString());
        m_ownerUserNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserUin") && !value["OwnerUserUin"].IsNull())
    {
        if (!value["OwnerUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.OwnerUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserUin = string(value["OwnerUserUin"].GetString());
        m_ownerUserUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerDisplayName") && !value["OwnerDisplayName"].IsNull())
    {
        if (!value["OwnerDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.OwnerDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerDisplayName = string(value["OwnerDisplayName"].GetString());
        m_ownerDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LabelList") && !value["LabelList"].IsNull())
    {
        if (!value["LabelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.LabelList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelList.push_back(item);
        }
        m_labelListHasBeenSet = true;
    }

    if (value.HasMember("Trigger") && !value["Trigger"].IsNull())
    {
        if (!value["Trigger"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.Trigger` is not array type"));

        const rapidjson::Value &tmpValue = value["Trigger"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkflowTriggerConfiguration item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trigger.push_back(item);
        }
        m_triggerHasBeenSet = true;
    }

    if (value.HasMember("RunUserUin") && !value["RunUserUin"].IsNull())
    {
        if (!value["RunUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.RunUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runUserUin = string(value["RunUserUin"].GetString());
        m_runUserUinHasBeenSet = true;
    }

    if (value.HasMember("RunUserName") && !value["RunUserName"].IsNull())
    {
        if (!value["RunUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.RunUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runUserName = string(value["RunUserName"].GetString());
        m_runUserNameHasBeenSet = true;
    }

    if (value.HasMember("TaskList") && !value["TaskList"].IsNull())
    {
        if (!value["TaskList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.TaskList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkflowTaskNodeBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskList.push_back(item);
        }
        m_taskListHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunList") && !value["WorkflowRunList"].IsNull())
    {
        if (!value["WorkflowRunList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.WorkflowRunList` is not array type"));

        const rapidjson::Value &tmpValue = value["WorkflowRunList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkflowRunBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_workflowRunList.push_back(item);
        }
        m_workflowRunListHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupInfoList") && !value["ResourceGroupInfoList"].IsNull())
    {
        if (!value["ResourceGroupInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.ResourceGroupInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceGroupInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceGroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceGroupInfoList.push_back(item);
        }
        m_resourceGroupInfoListHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.Permission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permission = string(value["Permission"].GetString());
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("BundleInfo") && !value["BundleInfo"].IsNull())
    {
        if (!value["BundleInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.BundleInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleInfo = string(value["BundleInfo"].GetString());
        m_bundleInfoHasBeenSet = true;
    }

    if (value.HasMember("GitConfigId") && !value["GitConfigId"].IsNull())
    {
        if (!value["GitConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.GitConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitConfigId = string(value["GitConfigId"].GetString());
        m_gitConfigIdHasBeenSet = true;
    }

    if (value.HasMember("GitBranch") && !value["GitBranch"].IsNull())
    {
        if (!value["GitBranch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowBrief.GitBranch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gitBranch = string(value["GitBranch"].GetString());
        m_gitBranchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerDisplayName.c_str(), allocator).Move(), allocator);
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

    if (m_labelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelList.begin(); itr != m_labelList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_triggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trigger.begin(); itr != m_trigger.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_runUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_runUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskList.begin(); itr != m_taskList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_workflowRunListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workflowRunList.begin(); itr != m_workflowRunList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceGroupInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceGroupInfoList.begin(); itr != m_resourceGroupInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permission.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_gitConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gitConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_gitBranchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitBranch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gitBranch.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowBrief::GetWorkflowName() const
{
    return m_workflowName;
}

void WorkflowBrief::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool WorkflowBrief::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string WorkflowBrief::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkflowBrief::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkflowBrief::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string WorkflowBrief::GetDescription() const
{
    return m_description;
}

void WorkflowBrief::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WorkflowBrief::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string WorkflowBrief::GetCreateUserUin() const
{
    return m_createUserUin;
}

void WorkflowBrief::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool WorkflowBrief::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string WorkflowBrief::GetOwnerUserName() const
{
    return m_ownerUserName;
}

void WorkflowBrief::SetOwnerUserName(const string& _ownerUserName)
{
    m_ownerUserName = _ownerUserName;
    m_ownerUserNameHasBeenSet = true;
}

bool WorkflowBrief::OwnerUserNameHasBeenSet() const
{
    return m_ownerUserNameHasBeenSet;
}

string WorkflowBrief::GetOwnerUserUin() const
{
    return m_ownerUserUin;
}

void WorkflowBrief::SetOwnerUserUin(const string& _ownerUserUin)
{
    m_ownerUserUin = _ownerUserUin;
    m_ownerUserUinHasBeenSet = true;
}

bool WorkflowBrief::OwnerUserUinHasBeenSet() const
{
    return m_ownerUserUinHasBeenSet;
}

string WorkflowBrief::GetOwnerDisplayName() const
{
    return m_ownerDisplayName;
}

void WorkflowBrief::SetOwnerDisplayName(const string& _ownerDisplayName)
{
    m_ownerDisplayName = _ownerDisplayName;
    m_ownerDisplayNameHasBeenSet = true;
}

bool WorkflowBrief::OwnerDisplayNameHasBeenSet() const
{
    return m_ownerDisplayNameHasBeenSet;
}

string WorkflowBrief::GetCreateTime() const
{
    return m_createTime;
}

void WorkflowBrief::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkflowBrief::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WorkflowBrief::GetUpdateTime() const
{
    return m_updateTime;
}

void WorkflowBrief::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WorkflowBrief::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<LabelBrief> WorkflowBrief::GetLabelList() const
{
    return m_labelList;
}

void WorkflowBrief::SetLabelList(const vector<LabelBrief>& _labelList)
{
    m_labelList = _labelList;
    m_labelListHasBeenSet = true;
}

bool WorkflowBrief::LabelListHasBeenSet() const
{
    return m_labelListHasBeenSet;
}

vector<WorkflowTriggerConfiguration> WorkflowBrief::GetTrigger() const
{
    return m_trigger;
}

void WorkflowBrief::SetTrigger(const vector<WorkflowTriggerConfiguration>& _trigger)
{
    m_trigger = _trigger;
    m_triggerHasBeenSet = true;
}

bool WorkflowBrief::TriggerHasBeenSet() const
{
    return m_triggerHasBeenSet;
}

string WorkflowBrief::GetRunUserUin() const
{
    return m_runUserUin;
}

void WorkflowBrief::SetRunUserUin(const string& _runUserUin)
{
    m_runUserUin = _runUserUin;
    m_runUserUinHasBeenSet = true;
}

bool WorkflowBrief::RunUserUinHasBeenSet() const
{
    return m_runUserUinHasBeenSet;
}

string WorkflowBrief::GetRunUserName() const
{
    return m_runUserName;
}

void WorkflowBrief::SetRunUserName(const string& _runUserName)
{
    m_runUserName = _runUserName;
    m_runUserNameHasBeenSet = true;
}

bool WorkflowBrief::RunUserNameHasBeenSet() const
{
    return m_runUserNameHasBeenSet;
}

vector<WorkflowTaskNodeBrief> WorkflowBrief::GetTaskList() const
{
    return m_taskList;
}

void WorkflowBrief::SetTaskList(const vector<WorkflowTaskNodeBrief>& _taskList)
{
    m_taskList = _taskList;
    m_taskListHasBeenSet = true;
}

bool WorkflowBrief::TaskListHasBeenSet() const
{
    return m_taskListHasBeenSet;
}

vector<WorkflowRunBrief> WorkflowBrief::GetWorkflowRunList() const
{
    return m_workflowRunList;
}

void WorkflowBrief::SetWorkflowRunList(const vector<WorkflowRunBrief>& _workflowRunList)
{
    m_workflowRunList = _workflowRunList;
    m_workflowRunListHasBeenSet = true;
}

bool WorkflowBrief::WorkflowRunListHasBeenSet() const
{
    return m_workflowRunListHasBeenSet;
}

vector<ResourceGroupInfo> WorkflowBrief::GetResourceGroupInfoList() const
{
    return m_resourceGroupInfoList;
}

void WorkflowBrief::SetResourceGroupInfoList(const vector<ResourceGroupInfo>& _resourceGroupInfoList)
{
    m_resourceGroupInfoList = _resourceGroupInfoList;
    m_resourceGroupInfoListHasBeenSet = true;
}

bool WorkflowBrief::ResourceGroupInfoListHasBeenSet() const
{
    return m_resourceGroupInfoListHasBeenSet;
}

string WorkflowBrief::GetPermission() const
{
    return m_permission;
}

void WorkflowBrief::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool WorkflowBrief::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string WorkflowBrief::GetBundleId() const
{
    return m_bundleId;
}

void WorkflowBrief::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool WorkflowBrief::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string WorkflowBrief::GetBundleInfo() const
{
    return m_bundleInfo;
}

void WorkflowBrief::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool WorkflowBrief::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}

string WorkflowBrief::GetGitConfigId() const
{
    return m_gitConfigId;
}

void WorkflowBrief::SetGitConfigId(const string& _gitConfigId)
{
    m_gitConfigId = _gitConfigId;
    m_gitConfigIdHasBeenSet = true;
}

bool WorkflowBrief::GitConfigIdHasBeenSet() const
{
    return m_gitConfigIdHasBeenSet;
}

string WorkflowBrief::GetGitBranch() const
{
    return m_gitBranch;
}

void WorkflowBrief::SetGitBranch(const string& _gitBranch)
{
    m_gitBranch = _gitBranch;
    m_gitBranchHasBeenSet = true;
}

bool WorkflowBrief::GitBranchHasBeenSet() const
{
    return m_gitBranchHasBeenSet;
}

