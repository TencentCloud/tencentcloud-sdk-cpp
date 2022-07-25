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

#include <tencentcloud/as/v20180419/model/InvocationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

InvocationResult::InvocationResult() :
    m_instanceIdHasBeenSet(false),
    m_invocationIdHasBeenSet(false),
    m_invocationTaskIdHasBeenSet(false),
    m_commandIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome InvocationResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationResult.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InvocationId") && !value["InvocationId"].IsNull())
    {
        if (!value["InvocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationResult.InvocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationId = string(value["InvocationId"].GetString());
        m_invocationIdHasBeenSet = true;
    }

    if (value.HasMember("InvocationTaskId") && !value["InvocationTaskId"].IsNull())
    {
        if (!value["InvocationTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationResult.InvocationTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationTaskId = string(value["InvocationTaskId"].GetString());
        m_invocationTaskIdHasBeenSet = true;
    }

    if (value.HasMember("CommandId") && !value["CommandId"].IsNull())
    {
        if (!value["CommandId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationResult.CommandId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandId = string(value["CommandId"].GetString());
        m_commandIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationResult.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationResult.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvocationResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invocationTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_commandIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commandId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

}


string InvocationResult::GetInstanceId() const
{
    return m_instanceId;
}

void InvocationResult::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InvocationResult::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InvocationResult::GetInvocationId() const
{
    return m_invocationId;
}

void InvocationResult::SetInvocationId(const string& _invocationId)
{
    m_invocationId = _invocationId;
    m_invocationIdHasBeenSet = true;
}

bool InvocationResult::InvocationIdHasBeenSet() const
{
    return m_invocationIdHasBeenSet;
}

string InvocationResult::GetInvocationTaskId() const
{
    return m_invocationTaskId;
}

void InvocationResult::SetInvocationTaskId(const string& _invocationTaskId)
{
    m_invocationTaskId = _invocationTaskId;
    m_invocationTaskIdHasBeenSet = true;
}

bool InvocationResult::InvocationTaskIdHasBeenSet() const
{
    return m_invocationTaskIdHasBeenSet;
}

string InvocationResult::GetCommandId() const
{
    return m_commandId;
}

void InvocationResult::SetCommandId(const string& _commandId)
{
    m_commandId = _commandId;
    m_commandIdHasBeenSet = true;
}

bool InvocationResult::CommandIdHasBeenSet() const
{
    return m_commandIdHasBeenSet;
}

string InvocationResult::GetTaskStatus() const
{
    return m_taskStatus;
}

void InvocationResult::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool InvocationResult::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string InvocationResult::GetErrorMessage() const
{
    return m_errorMessage;
}

void InvocationResult::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool InvocationResult::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

