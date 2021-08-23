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

#include <tencentcloud/batch/v20170312/model/Task.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

Task::Task() :
    m_applicationHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskInstanceNumHasBeenSet(false),
    m_computeEnvHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_redirectInfoHasBeenSet(false),
    m_redirectLocalInfoHasBeenSet(false),
    m_inputMappingsHasBeenSet(false),
    m_outputMappingsHasBeenSet(false),
    m_outputMappingConfigsHasBeenSet(false),
    m_envVarsHasBeenSet(false),
    m_authenticationsHasBeenSet(false),
    m_failedActionHasBeenSet(false),
    m_maxRetryCountHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_maxConcurrentNumHasBeenSet(false),
    m_restartComputeNodeHasBeenSet(false),
    m_resourceMaxRetryCountHasBeenSet(false)
{
}

CoreInternalOutcome Task::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Application") && !value["Application"].IsNull())
    {
        if (!value["Application"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.Application` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_application.Deserialize(value["Application"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_applicationHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskInstanceNum") && !value["TaskInstanceNum"].IsNull())
    {
        if (!value["TaskInstanceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskInstanceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskInstanceNum = value["TaskInstanceNum"].GetUint64();
        m_taskInstanceNumHasBeenSet = true;
    }

    if (value.HasMember("ComputeEnv") && !value["ComputeEnv"].IsNull())
    {
        if (!value["ComputeEnv"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.ComputeEnv` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_computeEnv.Deserialize(value["ComputeEnv"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_computeEnvHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("RedirectInfo") && !value["RedirectInfo"].IsNull())
    {
        if (!value["RedirectInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.RedirectInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_redirectInfo.Deserialize(value["RedirectInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_redirectInfoHasBeenSet = true;
    }

    if (value.HasMember("RedirectLocalInfo") && !value["RedirectLocalInfo"].IsNull())
    {
        if (!value["RedirectLocalInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.RedirectLocalInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_redirectLocalInfo.Deserialize(value["RedirectLocalInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_redirectLocalInfoHasBeenSet = true;
    }

    if (value.HasMember("InputMappings") && !value["InputMappings"].IsNull())
    {
        if (!value["InputMappings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.InputMappings` is not array type"));

        const rapidjson::Value &tmpValue = value["InputMappings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputMappings.push_back(item);
        }
        m_inputMappingsHasBeenSet = true;
    }

    if (value.HasMember("OutputMappings") && !value["OutputMappings"].IsNull())
    {
        if (!value["OutputMappings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.OutputMappings` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputMappings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutputMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputMappings.push_back(item);
        }
        m_outputMappingsHasBeenSet = true;
    }

    if (value.HasMember("OutputMappingConfigs") && !value["OutputMappingConfigs"].IsNull())
    {
        if (!value["OutputMappingConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.OutputMappingConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputMappingConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutputMappingConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputMappingConfigs.push_back(item);
        }
        m_outputMappingConfigsHasBeenSet = true;
    }

    if (value.HasMember("EnvVars") && !value["EnvVars"].IsNull())
    {
        if (!value["EnvVars"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.EnvVars` is not array type"));

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

    if (value.HasMember("Authentications") && !value["Authentications"].IsNull())
    {
        if (!value["Authentications"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.Authentications` is not array type"));

        const rapidjson::Value &tmpValue = value["Authentications"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Authentication item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authentications.push_back(item);
        }
        m_authenticationsHasBeenSet = true;
    }

    if (value.HasMember("FailedAction") && !value["FailedAction"].IsNull())
    {
        if (!value["FailedAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.FailedAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedAction = string(value["FailedAction"].GetString());
        m_failedActionHasBeenSet = true;
    }

    if (value.HasMember("MaxRetryCount") && !value["MaxRetryCount"].IsNull())
    {
        if (!value["MaxRetryCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.MaxRetryCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetryCount = value["MaxRetryCount"].GetUint64();
        m_maxRetryCountHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrentNum") && !value["MaxConcurrentNum"].IsNull())
    {
        if (!value["MaxConcurrentNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.MaxConcurrentNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrentNum = value["MaxConcurrentNum"].GetUint64();
        m_maxConcurrentNumHasBeenSet = true;
    }

    if (value.HasMember("RestartComputeNode") && !value["RestartComputeNode"].IsNull())
    {
        if (!value["RestartComputeNode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Task.RestartComputeNode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_restartComputeNode = value["RestartComputeNode"].GetBool();
        m_restartComputeNodeHasBeenSet = true;
    }

    if (value.HasMember("ResourceMaxRetryCount") && !value["ResourceMaxRetryCount"].IsNull())
    {
        if (!value["ResourceMaxRetryCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.ResourceMaxRetryCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceMaxRetryCount = value["ResourceMaxRetryCount"].GetUint64();
        m_resourceMaxRetryCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Task::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Application";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_application.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInstanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskInstanceNum, allocator);
    }

    if (m_computeEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeEnv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_computeEnv.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redirectInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_redirectLocalInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectLocalInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redirectLocalInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inputMappingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputMappings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputMappings.begin(); itr != m_inputMappings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputMappingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMappings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputMappings.begin(); itr != m_outputMappings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputMappingConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMappingConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputMappingConfigs.begin(); itr != m_outputMappingConfigs.end(); ++itr, ++i)
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

    if (m_authenticationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authentications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authentications.begin(); itr != m_authentications.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_failedActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedAction.c_str(), allocator).Move(), allocator);
    }

    if (m_maxRetryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetryCount, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_maxConcurrentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrentNum, allocator);
    }

    if (m_restartComputeNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartComputeNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartComputeNode, allocator);
    }

    if (m_resourceMaxRetryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceMaxRetryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceMaxRetryCount, allocator);
    }

}


Application Task::GetApplication() const
{
    return m_application;
}

void Task::SetApplication(const Application& _application)
{
    m_application = _application;
    m_applicationHasBeenSet = true;
}

bool Task::ApplicationHasBeenSet() const
{
    return m_applicationHasBeenSet;
}

string Task::GetTaskName() const
{
    return m_taskName;
}

void Task::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool Task::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t Task::GetTaskInstanceNum() const
{
    return m_taskInstanceNum;
}

void Task::SetTaskInstanceNum(const uint64_t& _taskInstanceNum)
{
    m_taskInstanceNum = _taskInstanceNum;
    m_taskInstanceNumHasBeenSet = true;
}

bool Task::TaskInstanceNumHasBeenSet() const
{
    return m_taskInstanceNumHasBeenSet;
}

AnonymousComputeEnv Task::GetComputeEnv() const
{
    return m_computeEnv;
}

void Task::SetComputeEnv(const AnonymousComputeEnv& _computeEnv)
{
    m_computeEnv = _computeEnv;
    m_computeEnvHasBeenSet = true;
}

bool Task::ComputeEnvHasBeenSet() const
{
    return m_computeEnvHasBeenSet;
}

string Task::GetEnvId() const
{
    return m_envId;
}

void Task::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool Task::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

RedirectInfo Task::GetRedirectInfo() const
{
    return m_redirectInfo;
}

void Task::SetRedirectInfo(const RedirectInfo& _redirectInfo)
{
    m_redirectInfo = _redirectInfo;
    m_redirectInfoHasBeenSet = true;
}

bool Task::RedirectInfoHasBeenSet() const
{
    return m_redirectInfoHasBeenSet;
}

RedirectLocalInfo Task::GetRedirectLocalInfo() const
{
    return m_redirectLocalInfo;
}

void Task::SetRedirectLocalInfo(const RedirectLocalInfo& _redirectLocalInfo)
{
    m_redirectLocalInfo = _redirectLocalInfo;
    m_redirectLocalInfoHasBeenSet = true;
}

bool Task::RedirectLocalInfoHasBeenSet() const
{
    return m_redirectLocalInfoHasBeenSet;
}

vector<InputMapping> Task::GetInputMappings() const
{
    return m_inputMappings;
}

void Task::SetInputMappings(const vector<InputMapping>& _inputMappings)
{
    m_inputMappings = _inputMappings;
    m_inputMappingsHasBeenSet = true;
}

bool Task::InputMappingsHasBeenSet() const
{
    return m_inputMappingsHasBeenSet;
}

vector<OutputMapping> Task::GetOutputMappings() const
{
    return m_outputMappings;
}

void Task::SetOutputMappings(const vector<OutputMapping>& _outputMappings)
{
    m_outputMappings = _outputMappings;
    m_outputMappingsHasBeenSet = true;
}

bool Task::OutputMappingsHasBeenSet() const
{
    return m_outputMappingsHasBeenSet;
}

vector<OutputMappingConfig> Task::GetOutputMappingConfigs() const
{
    return m_outputMappingConfigs;
}

void Task::SetOutputMappingConfigs(const vector<OutputMappingConfig>& _outputMappingConfigs)
{
    m_outputMappingConfigs = _outputMappingConfigs;
    m_outputMappingConfigsHasBeenSet = true;
}

bool Task::OutputMappingConfigsHasBeenSet() const
{
    return m_outputMappingConfigsHasBeenSet;
}

vector<EnvVar> Task::GetEnvVars() const
{
    return m_envVars;
}

void Task::SetEnvVars(const vector<EnvVar>& _envVars)
{
    m_envVars = _envVars;
    m_envVarsHasBeenSet = true;
}

bool Task::EnvVarsHasBeenSet() const
{
    return m_envVarsHasBeenSet;
}

vector<Authentication> Task::GetAuthentications() const
{
    return m_authentications;
}

void Task::SetAuthentications(const vector<Authentication>& _authentications)
{
    m_authentications = _authentications;
    m_authenticationsHasBeenSet = true;
}

bool Task::AuthenticationsHasBeenSet() const
{
    return m_authenticationsHasBeenSet;
}

string Task::GetFailedAction() const
{
    return m_failedAction;
}

void Task::SetFailedAction(const string& _failedAction)
{
    m_failedAction = _failedAction;
    m_failedActionHasBeenSet = true;
}

bool Task::FailedActionHasBeenSet() const
{
    return m_failedActionHasBeenSet;
}

uint64_t Task::GetMaxRetryCount() const
{
    return m_maxRetryCount;
}

void Task::SetMaxRetryCount(const uint64_t& _maxRetryCount)
{
    m_maxRetryCount = _maxRetryCount;
    m_maxRetryCountHasBeenSet = true;
}

bool Task::MaxRetryCountHasBeenSet() const
{
    return m_maxRetryCountHasBeenSet;
}

uint64_t Task::GetTimeout() const
{
    return m_timeout;
}

void Task::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool Task::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

uint64_t Task::GetMaxConcurrentNum() const
{
    return m_maxConcurrentNum;
}

void Task::SetMaxConcurrentNum(const uint64_t& _maxConcurrentNum)
{
    m_maxConcurrentNum = _maxConcurrentNum;
    m_maxConcurrentNumHasBeenSet = true;
}

bool Task::MaxConcurrentNumHasBeenSet() const
{
    return m_maxConcurrentNumHasBeenSet;
}

bool Task::GetRestartComputeNode() const
{
    return m_restartComputeNode;
}

void Task::SetRestartComputeNode(const bool& _restartComputeNode)
{
    m_restartComputeNode = _restartComputeNode;
    m_restartComputeNodeHasBeenSet = true;
}

bool Task::RestartComputeNodeHasBeenSet() const
{
    return m_restartComputeNodeHasBeenSet;
}

uint64_t Task::GetResourceMaxRetryCount() const
{
    return m_resourceMaxRetryCount;
}

void Task::SetResourceMaxRetryCount(const uint64_t& _resourceMaxRetryCount)
{
    m_resourceMaxRetryCount = _resourceMaxRetryCount;
    m_resourceMaxRetryCountHasBeenSet = true;
}

bool Task::ResourceMaxRetryCountHasBeenSet() const
{
    return m_resourceMaxRetryCountHasBeenSet;
}

