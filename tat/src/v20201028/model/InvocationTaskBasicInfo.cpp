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

#include <tencentcloud/tat/v20201028/model/InvocationTaskBasicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

InvocationTaskBasicInfo::InvocationTaskBasicInfo() :
    m_invocationTaskIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome InvocationTaskBasicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InvocationTaskId") && !value["InvocationTaskId"].IsNull())
    {
        if (!value["InvocationTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationTaskBasicInfo.InvocationTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationTaskId = string(value["InvocationTaskId"].GetString());
        m_invocationTaskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationTaskBasicInfo.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationTaskBasicInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvocationTaskBasicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_invocationTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invocationTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


string InvocationTaskBasicInfo::GetInvocationTaskId() const
{
    return m_invocationTaskId;
}

void InvocationTaskBasicInfo::SetInvocationTaskId(const string& _invocationTaskId)
{
    m_invocationTaskId = _invocationTaskId;
    m_invocationTaskIdHasBeenSet = true;
}

bool InvocationTaskBasicInfo::InvocationTaskIdHasBeenSet() const
{
    return m_invocationTaskIdHasBeenSet;
}

string InvocationTaskBasicInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void InvocationTaskBasicInfo::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool InvocationTaskBasicInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string InvocationTaskBasicInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InvocationTaskBasicInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InvocationTaskBasicInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

