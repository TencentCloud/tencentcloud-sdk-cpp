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

#include <tencentcloud/wedata/v20210820/model/RealTimeTaskInstanceNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RealTimeTaskInstanceNodeInfo::RealTimeTaskInstanceNodeInfo() :
    m_taskNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_instanceNodeInfoListHasBeenSet(false)
{
}

CoreInternalOutcome RealTimeTaskInstanceNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealTimeTaskInstanceNodeInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealTimeTaskInstanceNodeInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceNodeInfoList") && !value["InstanceNodeInfoList"].IsNull())
    {
        if (!value["InstanceNodeInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RealTimeTaskInstanceNodeInfo.InstanceNodeInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceNodeInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceNodeInfoList.push_back(item);
        }
        m_instanceNodeInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RealTimeTaskInstanceNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNodeInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNodeInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceNodeInfoList.begin(); itr != m_instanceNodeInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RealTimeTaskInstanceNodeInfo::GetTaskName() const
{
    return m_taskName;
}

void RealTimeTaskInstanceNodeInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool RealTimeTaskInstanceNodeInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string RealTimeTaskInstanceNodeInfo::GetTaskId() const
{
    return m_taskId;
}

void RealTimeTaskInstanceNodeInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RealTimeTaskInstanceNodeInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<InstanceNodeInfo> RealTimeTaskInstanceNodeInfo::GetInstanceNodeInfoList() const
{
    return m_instanceNodeInfoList;
}

void RealTimeTaskInstanceNodeInfo::SetInstanceNodeInfoList(const vector<InstanceNodeInfo>& _instanceNodeInfoList)
{
    m_instanceNodeInfoList = _instanceNodeInfoList;
    m_instanceNodeInfoListHasBeenSet = true;
}

bool RealTimeTaskInstanceNodeInfo::InstanceNodeInfoListHasBeenSet() const
{
    return m_instanceNodeInfoListHasBeenSet;
}

