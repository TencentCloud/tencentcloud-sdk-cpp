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

#include <tencentcloud/bm/v20180423/model/SuccessTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

SuccessTaskInfo::SuccessTaskInfo() :
    m_instanceIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_cmdTaskIdHasBeenSet(false)
{
}

CoreInternalOutcome SuccessTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessTaskInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessTaskInfo.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CmdTaskId") && !value["CmdTaskId"].IsNull())
    {
        if (!value["CmdTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessTaskInfo.CmdTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdTaskId = string(value["CmdTaskId"].GetString());
        m_cmdTaskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SuccessTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_cmdTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdTaskId.c_str(), allocator).Move(), allocator);
    }

}


string SuccessTaskInfo::GetInstanceId() const
{
    return m_instanceId;
}

void SuccessTaskInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SuccessTaskInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t SuccessTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void SuccessTaskInfo::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool SuccessTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string SuccessTaskInfo::GetCmdTaskId() const
{
    return m_cmdTaskId;
}

void SuccessTaskInfo::SetCmdTaskId(const string& _cmdTaskId)
{
    m_cmdTaskId = _cmdTaskId;
    m_cmdTaskIdHasBeenSet = true;
}

bool SuccessTaskInfo::CmdTaskIdHasBeenSet() const
{
    return m_cmdTaskIdHasBeenSet;
}

