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

#include <tencentcloud/cfg/v20210820/model/TaskGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskGroup::TaskGroup() :
    m_taskGroupIdHasBeenSet(false),
    m_taskGroupTitleHasBeenSet(false),
    m_taskGroupDescriptionHasBeenSet(false),
    m_taskGroupOrderHasBeenSet(false),
    m_objectTypeIdHasBeenSet(false),
    m_taskGroupCreateTimeHasBeenSet(false),
    m_taskGroupUpdateTimeHasBeenSet(false),
    m_taskGroupActionsHasBeenSet(false),
    m_taskGroupInstanceListHasBeenSet(false),
    m_taskGroupModeHasBeenSet(false),
    m_taskGroupDiscardInstanceListHasBeenSet(false),
    m_taskGroupSelectedInstanceListHasBeenSet(false),
    m_taskGroupInstancesExecuteRuleHasBeenSet(false)
{
}

CoreInternalOutcome TaskGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskGroupId") && !value["TaskGroupId"].IsNull())
    {
        if (!value["TaskGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroup.TaskGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupId = value["TaskGroupId"].GetInt64();
        m_taskGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupTitle") && !value["TaskGroupTitle"].IsNull())
    {
        if (!value["TaskGroupTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroup.TaskGroupTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupTitle = string(value["TaskGroupTitle"].GetString());
        m_taskGroupTitleHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupDescription") && !value["TaskGroupDescription"].IsNull())
    {
        if (!value["TaskGroupDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroup.TaskGroupDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupDescription = string(value["TaskGroupDescription"].GetString());
        m_taskGroupDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupOrder") && !value["TaskGroupOrder"].IsNull())
    {
        if (!value["TaskGroupOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroup.TaskGroupOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupOrder = value["TaskGroupOrder"].GetInt64();
        m_taskGroupOrderHasBeenSet = true;
    }

    if (value.HasMember("ObjectTypeId") && !value["ObjectTypeId"].IsNull())
    {
        if (!value["ObjectTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroup.ObjectTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_objectTypeId = value["ObjectTypeId"].GetInt64();
        m_objectTypeIdHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupCreateTime") && !value["TaskGroupCreateTime"].IsNull())
    {
        if (!value["TaskGroupCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroup.TaskGroupCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupCreateTime = string(value["TaskGroupCreateTime"].GetString());
        m_taskGroupCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupUpdateTime") && !value["TaskGroupUpdateTime"].IsNull())
    {
        if (!value["TaskGroupUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroup.TaskGroupUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupUpdateTime = string(value["TaskGroupUpdateTime"].GetString());
        m_taskGroupUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActions") && !value["TaskGroupActions"].IsNull())
    {
        if (!value["TaskGroupActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskGroup.TaskGroupActions` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskGroupActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskGroupAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskGroupActions.push_back(item);
        }
        m_taskGroupActionsHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstanceList") && !value["TaskGroupInstanceList"].IsNull())
    {
        if (!value["TaskGroupInstanceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskGroup.TaskGroupInstanceList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskGroupInstanceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskGroupInstanceList.push_back((*itr).GetString());
        }
        m_taskGroupInstanceListHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupMode") && !value["TaskGroupMode"].IsNull())
    {
        if (!value["TaskGroupMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroup.TaskGroupMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupMode = value["TaskGroupMode"].GetInt64();
        m_taskGroupModeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupDiscardInstanceList") && !value["TaskGroupDiscardInstanceList"].IsNull())
    {
        if (!value["TaskGroupDiscardInstanceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskGroup.TaskGroupDiscardInstanceList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskGroupDiscardInstanceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskGroupDiscardInstanceList.push_back((*itr).GetString());
        }
        m_taskGroupDiscardInstanceListHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupSelectedInstanceList") && !value["TaskGroupSelectedInstanceList"].IsNull())
    {
        if (!value["TaskGroupSelectedInstanceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskGroup.TaskGroupSelectedInstanceList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskGroupSelectedInstanceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskGroupSelectedInstanceList.push_back((*itr).GetString());
        }
        m_taskGroupSelectedInstanceListHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstancesExecuteRule") && !value["TaskGroupInstancesExecuteRule"].IsNull())
    {
        if (!value["TaskGroupInstancesExecuteRule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskGroup.TaskGroupInstancesExecuteRule` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskGroupInstancesExecuteRule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskGroupInstancesExecuteRules item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskGroupInstancesExecuteRule.push_back(item);
        }
        m_taskGroupInstancesExecuteRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupId, allocator);
    }

    if (m_taskGroupTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupOrder, allocator);
    }

    if (m_objectTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_objectTypeId, allocator);
    }

    if (m_taskGroupCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskGroupActions.begin(); itr != m_taskGroupActions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskGroupInstanceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstanceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskGroupInstanceList.begin(); itr != m_taskGroupInstanceList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskGroupModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupMode, allocator);
    }

    if (m_taskGroupDiscardInstanceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupDiscardInstanceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskGroupDiscardInstanceList.begin(); itr != m_taskGroupDiscardInstanceList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskGroupSelectedInstanceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupSelectedInstanceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskGroupSelectedInstanceList.begin(); itr != m_taskGroupSelectedInstanceList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskGroupInstancesExecuteRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstancesExecuteRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskGroupInstancesExecuteRule.begin(); itr != m_taskGroupInstancesExecuteRule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t TaskGroup::GetTaskGroupId() const
{
    return m_taskGroupId;
}

void TaskGroup::SetTaskGroupId(const int64_t& _taskGroupId)
{
    m_taskGroupId = _taskGroupId;
    m_taskGroupIdHasBeenSet = true;
}

bool TaskGroup::TaskGroupIdHasBeenSet() const
{
    return m_taskGroupIdHasBeenSet;
}

string TaskGroup::GetTaskGroupTitle() const
{
    return m_taskGroupTitle;
}

void TaskGroup::SetTaskGroupTitle(const string& _taskGroupTitle)
{
    m_taskGroupTitle = _taskGroupTitle;
    m_taskGroupTitleHasBeenSet = true;
}

bool TaskGroup::TaskGroupTitleHasBeenSet() const
{
    return m_taskGroupTitleHasBeenSet;
}

string TaskGroup::GetTaskGroupDescription() const
{
    return m_taskGroupDescription;
}

void TaskGroup::SetTaskGroupDescription(const string& _taskGroupDescription)
{
    m_taskGroupDescription = _taskGroupDescription;
    m_taskGroupDescriptionHasBeenSet = true;
}

bool TaskGroup::TaskGroupDescriptionHasBeenSet() const
{
    return m_taskGroupDescriptionHasBeenSet;
}

int64_t TaskGroup::GetTaskGroupOrder() const
{
    return m_taskGroupOrder;
}

void TaskGroup::SetTaskGroupOrder(const int64_t& _taskGroupOrder)
{
    m_taskGroupOrder = _taskGroupOrder;
    m_taskGroupOrderHasBeenSet = true;
}

bool TaskGroup::TaskGroupOrderHasBeenSet() const
{
    return m_taskGroupOrderHasBeenSet;
}

int64_t TaskGroup::GetObjectTypeId() const
{
    return m_objectTypeId;
}

void TaskGroup::SetObjectTypeId(const int64_t& _objectTypeId)
{
    m_objectTypeId = _objectTypeId;
    m_objectTypeIdHasBeenSet = true;
}

bool TaskGroup::ObjectTypeIdHasBeenSet() const
{
    return m_objectTypeIdHasBeenSet;
}

string TaskGroup::GetTaskGroupCreateTime() const
{
    return m_taskGroupCreateTime;
}

void TaskGroup::SetTaskGroupCreateTime(const string& _taskGroupCreateTime)
{
    m_taskGroupCreateTime = _taskGroupCreateTime;
    m_taskGroupCreateTimeHasBeenSet = true;
}

bool TaskGroup::TaskGroupCreateTimeHasBeenSet() const
{
    return m_taskGroupCreateTimeHasBeenSet;
}

string TaskGroup::GetTaskGroupUpdateTime() const
{
    return m_taskGroupUpdateTime;
}

void TaskGroup::SetTaskGroupUpdateTime(const string& _taskGroupUpdateTime)
{
    m_taskGroupUpdateTime = _taskGroupUpdateTime;
    m_taskGroupUpdateTimeHasBeenSet = true;
}

bool TaskGroup::TaskGroupUpdateTimeHasBeenSet() const
{
    return m_taskGroupUpdateTimeHasBeenSet;
}

vector<TaskGroupAction> TaskGroup::GetTaskGroupActions() const
{
    return m_taskGroupActions;
}

void TaskGroup::SetTaskGroupActions(const vector<TaskGroupAction>& _taskGroupActions)
{
    m_taskGroupActions = _taskGroupActions;
    m_taskGroupActionsHasBeenSet = true;
}

bool TaskGroup::TaskGroupActionsHasBeenSet() const
{
    return m_taskGroupActionsHasBeenSet;
}

vector<string> TaskGroup::GetTaskGroupInstanceList() const
{
    return m_taskGroupInstanceList;
}

void TaskGroup::SetTaskGroupInstanceList(const vector<string>& _taskGroupInstanceList)
{
    m_taskGroupInstanceList = _taskGroupInstanceList;
    m_taskGroupInstanceListHasBeenSet = true;
}

bool TaskGroup::TaskGroupInstanceListHasBeenSet() const
{
    return m_taskGroupInstanceListHasBeenSet;
}

int64_t TaskGroup::GetTaskGroupMode() const
{
    return m_taskGroupMode;
}

void TaskGroup::SetTaskGroupMode(const int64_t& _taskGroupMode)
{
    m_taskGroupMode = _taskGroupMode;
    m_taskGroupModeHasBeenSet = true;
}

bool TaskGroup::TaskGroupModeHasBeenSet() const
{
    return m_taskGroupModeHasBeenSet;
}

vector<string> TaskGroup::GetTaskGroupDiscardInstanceList() const
{
    return m_taskGroupDiscardInstanceList;
}

void TaskGroup::SetTaskGroupDiscardInstanceList(const vector<string>& _taskGroupDiscardInstanceList)
{
    m_taskGroupDiscardInstanceList = _taskGroupDiscardInstanceList;
    m_taskGroupDiscardInstanceListHasBeenSet = true;
}

bool TaskGroup::TaskGroupDiscardInstanceListHasBeenSet() const
{
    return m_taskGroupDiscardInstanceListHasBeenSet;
}

vector<string> TaskGroup::GetTaskGroupSelectedInstanceList() const
{
    return m_taskGroupSelectedInstanceList;
}

void TaskGroup::SetTaskGroupSelectedInstanceList(const vector<string>& _taskGroupSelectedInstanceList)
{
    m_taskGroupSelectedInstanceList = _taskGroupSelectedInstanceList;
    m_taskGroupSelectedInstanceListHasBeenSet = true;
}

bool TaskGroup::TaskGroupSelectedInstanceListHasBeenSet() const
{
    return m_taskGroupSelectedInstanceListHasBeenSet;
}

vector<TaskGroupInstancesExecuteRules> TaskGroup::GetTaskGroupInstancesExecuteRule() const
{
    return m_taskGroupInstancesExecuteRule;
}

void TaskGroup::SetTaskGroupInstancesExecuteRule(const vector<TaskGroupInstancesExecuteRules>& _taskGroupInstancesExecuteRule)
{
    m_taskGroupInstancesExecuteRule = _taskGroupInstancesExecuteRule;
    m_taskGroupInstancesExecuteRuleHasBeenSet = true;
}

bool TaskGroup::TaskGroupInstancesExecuteRuleHasBeenSet() const
{
    return m_taskGroupInstancesExecuteRuleHasBeenSet;
}

