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

#include <tencentcloud/tcb/v20180608/model/AgentRuntimeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

AgentRuntimeConfig::AgentRuntimeConfig() :
    m_codeHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_memorySizeHasBeenSet(false),
    m_installDependencyHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_sessionConfigHasBeenSet(false)
{
}

CoreInternalOutcome AgentRuntimeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeConfig.Code` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_code.Deserialize(value["Code"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Runtime") && !value["Runtime"].IsNull())
    {
        if (!value["Runtime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeConfig.Runtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtime = string(value["Runtime"].GetString());
        m_runtimeHasBeenSet = true;
    }

    if (value.HasMember("MemorySize") && !value["MemorySize"].IsNull())
    {
        if (!value["MemorySize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeConfig.MemorySize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memorySize = value["MemorySize"].GetInt64();
        m_memorySizeHasBeenSet = true;
    }

    if (value.HasMember("InstallDependency") && !value["InstallDependency"].IsNull())
    {
        if (!value["InstallDependency"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeConfig.InstallDependency` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_installDependency = value["InstallDependency"].GetBool();
        m_installDependencyHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeConfig.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("Environment") && !value["Environment"].IsNull())
    {
        if (!value["Environment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeConfig.Environment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environment = string(value["Environment"].GetString());
        m_environmentHasBeenSet = true;
    }

    if (value.HasMember("SessionConfig") && !value["SessionConfig"].IsNull())
    {
        if (!value["SessionConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeConfig.SessionConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sessionConfig.Deserialize(value["SessionConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sessionConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentRuntimeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_code.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_memorySizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemorySize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memorySize, allocator);
    }

    if (m_installDependencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallDependency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_installDependency, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sessionConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


AgentRuntimeCode AgentRuntimeConfig::GetCode() const
{
    return m_code;
}

void AgentRuntimeConfig::SetCode(const AgentRuntimeCode& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool AgentRuntimeConfig::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string AgentRuntimeConfig::GetRuntime() const
{
    return m_runtime;
}

void AgentRuntimeConfig::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool AgentRuntimeConfig::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

int64_t AgentRuntimeConfig::GetMemorySize() const
{
    return m_memorySize;
}

void AgentRuntimeConfig::SetMemorySize(const int64_t& _memorySize)
{
    m_memorySize = _memorySize;
    m_memorySizeHasBeenSet = true;
}

bool AgentRuntimeConfig::MemorySizeHasBeenSet() const
{
    return m_memorySizeHasBeenSet;
}

bool AgentRuntimeConfig::GetInstallDependency() const
{
    return m_installDependency;
}

void AgentRuntimeConfig::SetInstallDependency(const bool& _installDependency)
{
    m_installDependency = _installDependency;
    m_installDependencyHasBeenSet = true;
}

bool AgentRuntimeConfig::InstallDependencyHasBeenSet() const
{
    return m_installDependencyHasBeenSet;
}

int64_t AgentRuntimeConfig::GetTimeout() const
{
    return m_timeout;
}

void AgentRuntimeConfig::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool AgentRuntimeConfig::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string AgentRuntimeConfig::GetEnvironment() const
{
    return m_environment;
}

void AgentRuntimeConfig::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool AgentRuntimeConfig::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

AgentRuntimeSessionConfig AgentRuntimeConfig::GetSessionConfig() const
{
    return m_sessionConfig;
}

void AgentRuntimeConfig::SetSessionConfig(const AgentRuntimeSessionConfig& _sessionConfig)
{
    m_sessionConfig = _sessionConfig;
    m_sessionConfigHasBeenSet = true;
}

bool AgentRuntimeConfig::SessionConfigHasBeenSet() const
{
    return m_sessionConfigHasBeenSet;
}

