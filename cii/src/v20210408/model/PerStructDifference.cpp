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

#include <tencentcloud/cii/v20210408/model/PerStructDifference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

PerStructDifference::PerStructDifference() :
    m_subTaskIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_modifyItemsHasBeenSet(false),
    m_newItemsHasBeenSet(false),
    m_removeItemsHasBeenSet(false)
{
}

CoreInternalOutcome PerStructDifference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubTaskId") && !value["SubTaskId"].IsNull())
    {
        if (!value["SubTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PerStructDifference.SubTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTaskId = string(value["SubTaskId"].GetString());
        m_subTaskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PerStructDifference.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("ModifyItems") && !value["ModifyItems"].IsNull())
    {
        if (!value["ModifyItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PerStructDifference.ModifyItems` is not array type"));

        const rapidjson::Value &tmpValue = value["ModifyItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StructureModifyItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modifyItems.push_back(item);
        }
        m_modifyItemsHasBeenSet = true;
    }

    if (value.HasMember("NewItems") && !value["NewItems"].IsNull())
    {
        if (!value["NewItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PerStructDifference.NewItems` is not array type"));

        const rapidjson::Value &tmpValue = value["NewItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StructureOneItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_newItems.push_back(item);
        }
        m_newItemsHasBeenSet = true;
    }

    if (value.HasMember("RemoveItems") && !value["RemoveItems"].IsNull())
    {
        if (!value["RemoveItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PerStructDifference.RemoveItems` is not array type"));

        const rapidjson::Value &tmpValue = value["RemoveItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StructureOneItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_removeItems.push_back(item);
        }
        m_removeItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PerStructDifference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modifyItems.begin(); itr != m_modifyItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_newItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_newItems.begin(); itr != m_newItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_removeItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_removeItems.begin(); itr != m_removeItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PerStructDifference::GetSubTaskId() const
{
    return m_subTaskId;
}

void PerStructDifference::SetSubTaskId(const string& _subTaskId)
{
    m_subTaskId = _subTaskId;
    m_subTaskIdHasBeenSet = true;
}

bool PerStructDifference::SubTaskIdHasBeenSet() const
{
    return m_subTaskIdHasBeenSet;
}

string PerStructDifference::GetTaskType() const
{
    return m_taskType;
}

void PerStructDifference::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool PerStructDifference::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<StructureModifyItem> PerStructDifference::GetModifyItems() const
{
    return m_modifyItems;
}

void PerStructDifference::SetModifyItems(const vector<StructureModifyItem>& _modifyItems)
{
    m_modifyItems = _modifyItems;
    m_modifyItemsHasBeenSet = true;
}

bool PerStructDifference::ModifyItemsHasBeenSet() const
{
    return m_modifyItemsHasBeenSet;
}

vector<StructureOneItem> PerStructDifference::GetNewItems() const
{
    return m_newItems;
}

void PerStructDifference::SetNewItems(const vector<StructureOneItem>& _newItems)
{
    m_newItems = _newItems;
    m_newItemsHasBeenSet = true;
}

bool PerStructDifference::NewItemsHasBeenSet() const
{
    return m_newItemsHasBeenSet;
}

vector<StructureOneItem> PerStructDifference::GetRemoveItems() const
{
    return m_removeItems;
}

void PerStructDifference::SetRemoveItems(const vector<StructureOneItem>& _removeItems)
{
    m_removeItems = _removeItems;
    m_removeItemsHasBeenSet = true;
}

bool PerStructDifference::RemoveItemsHasBeenSet() const
{
    return m_removeItemsHasBeenSet;
}

