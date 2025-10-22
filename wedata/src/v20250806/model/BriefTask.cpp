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

#include <tencentcloud/wedata/v20250806/model/BriefTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

BriefTask::BriefTask() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_ownerUinListHasBeenSet(false)
{
}

CoreInternalOutcome BriefTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefTask.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BriefTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("OwnerUinList") && !value["OwnerUinList"].IsNull())
    {
        if (!value["OwnerUinList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BriefTask.OwnerUinList` is not array type"));

        const rapidjson::Value &tmpValue = value["OwnerUinList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ownerUinList.push_back((*itr).GetString());
        }
        m_ownerUinListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BriefTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUinList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerUinList.begin(); itr != m_ownerUinList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string BriefTask::GetTaskId() const
{
    return m_taskId;
}

void BriefTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BriefTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string BriefTask::GetTaskName() const
{
    return m_taskName;
}

void BriefTask::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool BriefTask::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string BriefTask::GetCreateTime() const
{
    return m_createTime;
}

void BriefTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BriefTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<string> BriefTask::GetOwnerUinList() const
{
    return m_ownerUinList;
}

void BriefTask::SetOwnerUinList(const vector<string>& _ownerUinList)
{
    m_ownerUinList = _ownerUinList;
    m_ownerUinListHasBeenSet = true;
}

bool BriefTask::OwnerUinListHasBeenSet() const
{
    return m_ownerUinListHasBeenSet;
}

