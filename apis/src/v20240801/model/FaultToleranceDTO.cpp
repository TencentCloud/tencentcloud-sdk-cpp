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

#include <tencentcloud/apis/v20240801/model/FaultToleranceDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

FaultToleranceDTO::FaultToleranceDTO() :
    m_enabledHasBeenSet(false),
    m_errorCodesHasBeenSet(false),
    m_errorCountHasBeenSet(false),
    m_isolationTimeHasBeenSet(false),
    m_maxSwitchCountHasBeenSet(false),
    m_switchTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome FaultToleranceDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FaultToleranceDTO.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodes") && !value["ErrorCodes"].IsNull())
    {
        if (!value["ErrorCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaultToleranceDTO.ErrorCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_errorCodes.push_back((*itr).GetString());
        }
        m_errorCodesHasBeenSet = true;
    }

    if (value.HasMember("ErrorCount") && !value["ErrorCount"].IsNull())
    {
        if (!value["ErrorCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaultToleranceDTO.ErrorCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCount = value["ErrorCount"].GetInt64();
        m_errorCountHasBeenSet = true;
    }

    if (value.HasMember("IsolationTime") && !value["IsolationTime"].IsNull())
    {
        if (!value["IsolationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaultToleranceDTO.IsolationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isolationTime = value["IsolationTime"].GetInt64();
        m_isolationTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxSwitchCount") && !value["MaxSwitchCount"].IsNull())
    {
        if (!value["MaxSwitchCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaultToleranceDTO.MaxSwitchCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSwitchCount = value["MaxSwitchCount"].GetInt64();
        m_maxSwitchCountHasBeenSet = true;
    }

    if (value.HasMember("SwitchTimeout") && !value["SwitchTimeout"].IsNull())
    {
        if (!value["SwitchTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaultToleranceDTO.SwitchTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switchTimeout = value["SwitchTimeout"].GetInt64();
        m_switchTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaultToleranceDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_errorCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorCodes.begin(); itr != m_errorCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_errorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCount, allocator);
    }

    if (m_isolationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolationTime, allocator);
    }

    if (m_maxSwitchCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSwitchCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSwitchCount, allocator);
    }

    if (m_switchTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchTimeout, allocator);
    }

}


bool FaultToleranceDTO::GetEnabled() const
{
    return m_enabled;
}

void FaultToleranceDTO::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool FaultToleranceDTO::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<string> FaultToleranceDTO::GetErrorCodes() const
{
    return m_errorCodes;
}

void FaultToleranceDTO::SetErrorCodes(const vector<string>& _errorCodes)
{
    m_errorCodes = _errorCodes;
    m_errorCodesHasBeenSet = true;
}

bool FaultToleranceDTO::ErrorCodesHasBeenSet() const
{
    return m_errorCodesHasBeenSet;
}

int64_t FaultToleranceDTO::GetErrorCount() const
{
    return m_errorCount;
}

void FaultToleranceDTO::SetErrorCount(const int64_t& _errorCount)
{
    m_errorCount = _errorCount;
    m_errorCountHasBeenSet = true;
}

bool FaultToleranceDTO::ErrorCountHasBeenSet() const
{
    return m_errorCountHasBeenSet;
}

int64_t FaultToleranceDTO::GetIsolationTime() const
{
    return m_isolationTime;
}

void FaultToleranceDTO::SetIsolationTime(const int64_t& _isolationTime)
{
    m_isolationTime = _isolationTime;
    m_isolationTimeHasBeenSet = true;
}

bool FaultToleranceDTO::IsolationTimeHasBeenSet() const
{
    return m_isolationTimeHasBeenSet;
}

int64_t FaultToleranceDTO::GetMaxSwitchCount() const
{
    return m_maxSwitchCount;
}

void FaultToleranceDTO::SetMaxSwitchCount(const int64_t& _maxSwitchCount)
{
    m_maxSwitchCount = _maxSwitchCount;
    m_maxSwitchCountHasBeenSet = true;
}

bool FaultToleranceDTO::MaxSwitchCountHasBeenSet() const
{
    return m_maxSwitchCountHasBeenSet;
}

int64_t FaultToleranceDTO::GetSwitchTimeout() const
{
    return m_switchTimeout;
}

void FaultToleranceDTO::SetSwitchTimeout(const int64_t& _switchTimeout)
{
    m_switchTimeout = _switchTimeout;
    m_switchTimeoutHasBeenSet = true;
}

bool FaultToleranceDTO::SwitchTimeoutHasBeenSet() const
{
    return m_switchTimeoutHasBeenSet;
}

