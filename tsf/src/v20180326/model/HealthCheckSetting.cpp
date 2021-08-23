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

#include <tencentcloud/tsf/v20180326/model/HealthCheckSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

HealthCheckSetting::HealthCheckSetting() :
    m_actionTypeHasBeenSet(false),
    m_initialDelaySecondsHasBeenSet(false),
    m_timeoutSecondsHasBeenSet(false),
    m_periodSecondsHasBeenSet(false),
    m_successThresholdHasBeenSet(false),
    m_failureThresholdHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_portHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome HealthCheckSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckSetting.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("InitialDelaySeconds") && !value["InitialDelaySeconds"].IsNull())
    {
        if (!value["InitialDelaySeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckSetting.InitialDelaySeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_initialDelaySeconds = value["InitialDelaySeconds"].GetUint64();
        m_initialDelaySecondsHasBeenSet = true;
    }

    if (value.HasMember("TimeoutSeconds") && !value["TimeoutSeconds"].IsNull())
    {
        if (!value["TimeoutSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckSetting.TimeoutSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutSeconds = value["TimeoutSeconds"].GetUint64();
        m_timeoutSecondsHasBeenSet = true;
    }

    if (value.HasMember("PeriodSeconds") && !value["PeriodSeconds"].IsNull())
    {
        if (!value["PeriodSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckSetting.PeriodSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_periodSeconds = value["PeriodSeconds"].GetUint64();
        m_periodSecondsHasBeenSet = true;
    }

    if (value.HasMember("SuccessThreshold") && !value["SuccessThreshold"].IsNull())
    {
        if (!value["SuccessThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckSetting.SuccessThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successThreshold = value["SuccessThreshold"].GetUint64();
        m_successThresholdHasBeenSet = true;
    }

    if (value.HasMember("FailureThreshold") && !value["FailureThreshold"].IsNull())
    {
        if (!value["FailureThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckSetting.FailureThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failureThreshold = value["FailureThreshold"].GetUint64();
        m_failureThresholdHasBeenSet = true;
    }

    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckSetting.Scheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheme = string(value["Scheme"].GetString());
        m_schemeHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckSetting.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckSetting.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HealthCheckSetting.Command` is not array type"));

        const rapidjson::Value &tmpValue = value["Command"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_command.push_back((*itr).GetString());
        }
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckSetting.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthCheckSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_initialDelaySecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialDelaySeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initialDelaySeconds, allocator);
    }

    if (m_timeoutSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutSeconds, allocator);
    }

    if (m_periodSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_periodSeconds, allocator);
    }

    if (m_successThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successThreshold, allocator);
    }

    if (m_failureThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failureThreshold, allocator);
    }

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_command.begin(); itr != m_command.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string HealthCheckSetting::GetActionType() const
{
    return m_actionType;
}

void HealthCheckSetting::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool HealthCheckSetting::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

uint64_t HealthCheckSetting::GetInitialDelaySeconds() const
{
    return m_initialDelaySeconds;
}

void HealthCheckSetting::SetInitialDelaySeconds(const uint64_t& _initialDelaySeconds)
{
    m_initialDelaySeconds = _initialDelaySeconds;
    m_initialDelaySecondsHasBeenSet = true;
}

bool HealthCheckSetting::InitialDelaySecondsHasBeenSet() const
{
    return m_initialDelaySecondsHasBeenSet;
}

uint64_t HealthCheckSetting::GetTimeoutSeconds() const
{
    return m_timeoutSeconds;
}

void HealthCheckSetting::SetTimeoutSeconds(const uint64_t& _timeoutSeconds)
{
    m_timeoutSeconds = _timeoutSeconds;
    m_timeoutSecondsHasBeenSet = true;
}

bool HealthCheckSetting::TimeoutSecondsHasBeenSet() const
{
    return m_timeoutSecondsHasBeenSet;
}

uint64_t HealthCheckSetting::GetPeriodSeconds() const
{
    return m_periodSeconds;
}

void HealthCheckSetting::SetPeriodSeconds(const uint64_t& _periodSeconds)
{
    m_periodSeconds = _periodSeconds;
    m_periodSecondsHasBeenSet = true;
}

bool HealthCheckSetting::PeriodSecondsHasBeenSet() const
{
    return m_periodSecondsHasBeenSet;
}

uint64_t HealthCheckSetting::GetSuccessThreshold() const
{
    return m_successThreshold;
}

void HealthCheckSetting::SetSuccessThreshold(const uint64_t& _successThreshold)
{
    m_successThreshold = _successThreshold;
    m_successThresholdHasBeenSet = true;
}

bool HealthCheckSetting::SuccessThresholdHasBeenSet() const
{
    return m_successThresholdHasBeenSet;
}

uint64_t HealthCheckSetting::GetFailureThreshold() const
{
    return m_failureThreshold;
}

void HealthCheckSetting::SetFailureThreshold(const uint64_t& _failureThreshold)
{
    m_failureThreshold = _failureThreshold;
    m_failureThresholdHasBeenSet = true;
}

bool HealthCheckSetting::FailureThresholdHasBeenSet() const
{
    return m_failureThresholdHasBeenSet;
}

string HealthCheckSetting::GetScheme() const
{
    return m_scheme;
}

void HealthCheckSetting::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool HealthCheckSetting::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

uint64_t HealthCheckSetting::GetPort() const
{
    return m_port;
}

void HealthCheckSetting::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool HealthCheckSetting::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string HealthCheckSetting::GetPath() const
{
    return m_path;
}

void HealthCheckSetting::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool HealthCheckSetting::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

vector<string> HealthCheckSetting::GetCommand() const
{
    return m_command;
}

void HealthCheckSetting::SetCommand(const vector<string>& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool HealthCheckSetting::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string HealthCheckSetting::GetType() const
{
    return m_type;
}

void HealthCheckSetting::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HealthCheckSetting::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

