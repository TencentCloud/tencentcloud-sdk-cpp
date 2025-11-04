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

#include <tencentcloud/thpc/v20230321/model/Application.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

Application::Application() :
    m_commandsHasBeenSet(false),
    m_storageMountsHasBeenSet(false),
    m_envVarsHasBeenSet(false),
    m_dockerHasBeenSet(false),
    m_outputRedirectHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

CoreInternalOutcome Application::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Commands") && !value["Commands"].IsNull())
    {
        if (!value["Commands"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Application.Commands` is not array type"));

        const rapidjson::Value &tmpValue = value["Commands"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommandItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_commands.push_back(item);
        }
        m_commandsHasBeenSet = true;
    }

    if (value.HasMember("StorageMounts") && !value["StorageMounts"].IsNull())
    {
        if (!value["StorageMounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Application.StorageMounts` is not array type"));

        const rapidjson::Value &tmpValue = value["StorageMounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StorageMount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_storageMounts.push_back(item);
        }
        m_storageMountsHasBeenSet = true;
    }

    if (value.HasMember("EnvVars") && !value["EnvVars"].IsNull())
    {
        if (!value["EnvVars"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Application.EnvVars` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvVars"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnvVar item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envVars.push_back(item);
        }
        m_envVarsHasBeenSet = true;
    }

    if (value.HasMember("Docker") && !value["Docker"].IsNull())
    {
        if (!value["Docker"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Application.Docker` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_docker.Deserialize(value["Docker"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dockerHasBeenSet = true;
    }

    if (value.HasMember("OutputRedirect") && !value["OutputRedirect"].IsNull())
    {
        if (!value["OutputRedirect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Application.OutputRedirect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputRedirect.Deserialize(value["OutputRedirect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputRedirectHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(value["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Application.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Application::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_commandsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Commands";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_commands.begin(); itr != m_commands.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_storageMountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageMounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageMounts.begin(); itr != m_storageMounts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_envVarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvVars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envVars.begin(); itr != m_envVars.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dockerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Docker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_docker.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputRedirect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

}


vector<CommandItem> Application::GetCommands() const
{
    return m_commands;
}

void Application::SetCommands(const vector<CommandItem>& _commands)
{
    m_commands = _commands;
    m_commandsHasBeenSet = true;
}

bool Application::CommandsHasBeenSet() const
{
    return m_commandsHasBeenSet;
}

vector<StorageMount> Application::GetStorageMounts() const
{
    return m_storageMounts;
}

void Application::SetStorageMounts(const vector<StorageMount>& _storageMounts)
{
    m_storageMounts = _storageMounts;
    m_storageMountsHasBeenSet = true;
}

bool Application::StorageMountsHasBeenSet() const
{
    return m_storageMountsHasBeenSet;
}

vector<EnvVar> Application::GetEnvVars() const
{
    return m_envVars;
}

void Application::SetEnvVars(const vector<EnvVar>& _envVars)
{
    m_envVars = _envVars;
    m_envVarsHasBeenSet = true;
}

bool Application::EnvVarsHasBeenSet() const
{
    return m_envVarsHasBeenSet;
}

Docker Application::GetDocker() const
{
    return m_docker;
}

void Application::SetDocker(const Docker& _docker)
{
    m_docker = _docker;
    m_dockerHasBeenSet = true;
}

bool Application::DockerHasBeenSet() const
{
    return m_dockerHasBeenSet;
}

OutputRedirect Application::GetOutputRedirect() const
{
    return m_outputRedirect;
}

void Application::SetOutputRedirect(const OutputRedirect& _outputRedirect)
{
    m_outputRedirect = _outputRedirect;
    m_outputRedirectHasBeenSet = true;
}

bool Application::OutputRedirectHasBeenSet() const
{
    return m_outputRedirectHasBeenSet;
}

string Application::GetJobType() const
{
    return m_jobType;
}

void Application::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool Application::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

string Application::GetTaskType() const
{
    return m_taskType;
}

void Application::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool Application::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

