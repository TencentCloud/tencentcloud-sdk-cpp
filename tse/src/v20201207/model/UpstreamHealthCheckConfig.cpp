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

#include <tencentcloud/tse/v20201207/model/UpstreamHealthCheckConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

UpstreamHealthCheckConfig::UpstreamHealthCheckConfig() :
    m_enableActiveHealthCheckHasBeenSet(false),
    m_activeHealthCheckHasBeenSet(false),
    m_enablePassiveHealthCheckHasBeenSet(false),
    m_passiveHealthCheckHasBeenSet(false),
    m_successesHasBeenSet(false),
    m_failuresHasBeenSet(false),
    m_timeoutsHasBeenSet(false),
    m_healthyHttpStatusesHasBeenSet(false),
    m_unhealthyHttpStatusesHasBeenSet(false),
    m_ignoreZeroWeightNodesHasBeenSet(false),
    m_zeroWeightHeathCheckHasBeenSet(false)
{
}

CoreInternalOutcome UpstreamHealthCheckConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableActiveHealthCheck") && !value["EnableActiveHealthCheck"].IsNull())
    {
        if (!value["EnableActiveHealthCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthCheckConfig.EnableActiveHealthCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableActiveHealthCheck = value["EnableActiveHealthCheck"].GetBool();
        m_enableActiveHealthCheckHasBeenSet = true;
    }

    if (value.HasMember("ActiveHealthCheck") && !value["ActiveHealthCheck"].IsNull())
    {
        if (!value["ActiveHealthCheck"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthCheckConfig.ActiveHealthCheck` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_activeHealthCheck.Deserialize(value["ActiveHealthCheck"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_activeHealthCheckHasBeenSet = true;
    }

    if (value.HasMember("EnablePassiveHealthCheck") && !value["EnablePassiveHealthCheck"].IsNull())
    {
        if (!value["EnablePassiveHealthCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthCheckConfig.EnablePassiveHealthCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enablePassiveHealthCheck = value["EnablePassiveHealthCheck"].GetBool();
        m_enablePassiveHealthCheckHasBeenSet = true;
    }

    if (value.HasMember("PassiveHealthCheck") && !value["PassiveHealthCheck"].IsNull())
    {
        if (!value["PassiveHealthCheck"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthCheckConfig.PassiveHealthCheck` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_passiveHealthCheck.Deserialize(value["PassiveHealthCheck"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_passiveHealthCheckHasBeenSet = true;
    }

    if (value.HasMember("Successes") && !value["Successes"].IsNull())
    {
        if (!value["Successes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthCheckConfig.Successes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successes = value["Successes"].GetUint64();
        m_successesHasBeenSet = true;
    }

    if (value.HasMember("Failures") && !value["Failures"].IsNull())
    {
        if (!value["Failures"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthCheckConfig.Failures` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failures = value["Failures"].GetUint64();
        m_failuresHasBeenSet = true;
    }

    if (value.HasMember("Timeouts") && !value["Timeouts"].IsNull())
    {
        if (!value["Timeouts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthCheckConfig.Timeouts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeouts = value["Timeouts"].GetUint64();
        m_timeoutsHasBeenSet = true;
    }

    if (value.HasMember("HealthyHttpStatuses") && !value["HealthyHttpStatuses"].IsNull())
    {
        if (!value["HealthyHttpStatuses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthCheckConfig.HealthyHttpStatuses` is not array type"));

        const rapidjson::Value &tmpValue = value["HealthyHttpStatuses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_healthyHttpStatuses.push_back((*itr).GetUint64());
        }
        m_healthyHttpStatusesHasBeenSet = true;
    }

    if (value.HasMember("UnhealthyHttpStatuses") && !value["UnhealthyHttpStatuses"].IsNull())
    {
        if (!value["UnhealthyHttpStatuses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthCheckConfig.UnhealthyHttpStatuses` is not array type"));

        const rapidjson::Value &tmpValue = value["UnhealthyHttpStatuses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_unhealthyHttpStatuses.push_back((*itr).GetUint64());
        }
        m_unhealthyHttpStatusesHasBeenSet = true;
    }

    if (value.HasMember("IgnoreZeroWeightNodes") && !value["IgnoreZeroWeightNodes"].IsNull())
    {
        if (!value["IgnoreZeroWeightNodes"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthCheckConfig.IgnoreZeroWeightNodes` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreZeroWeightNodes = value["IgnoreZeroWeightNodes"].GetBool();
        m_ignoreZeroWeightNodesHasBeenSet = true;
    }

    if (value.HasMember("ZeroWeightHeathCheck") && !value["ZeroWeightHeathCheck"].IsNull())
    {
        if (!value["ZeroWeightHeathCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHealthCheckConfig.ZeroWeightHeathCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_zeroWeightHeathCheck = value["ZeroWeightHeathCheck"].GetBool();
        m_zeroWeightHeathCheckHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpstreamHealthCheckConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableActiveHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableActiveHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableActiveHealthCheck, allocator);
    }

    if (m_activeHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_activeHealthCheck.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enablePassiveHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePassiveHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enablePassiveHealthCheck, allocator);
    }

    if (m_passiveHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassiveHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_passiveHealthCheck.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_successesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Successes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successes, allocator);
    }

    if (m_failuresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Failures";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failures, allocator);
    }

    if (m_timeoutsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeouts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeouts, allocator);
    }

    if (m_healthyHttpStatusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyHttpStatuses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_healthyHttpStatuses.begin(); itr != m_healthyHttpStatuses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_unhealthyHttpStatusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthyHttpStatuses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_unhealthyHttpStatuses.begin(); itr != m_unhealthyHttpStatuses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_ignoreZeroWeightNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreZeroWeightNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreZeroWeightNodes, allocator);
    }

    if (m_zeroWeightHeathCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZeroWeightHeathCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zeroWeightHeathCheck, allocator);
    }

}


bool UpstreamHealthCheckConfig::GetEnableActiveHealthCheck() const
{
    return m_enableActiveHealthCheck;
}

void UpstreamHealthCheckConfig::SetEnableActiveHealthCheck(const bool& _enableActiveHealthCheck)
{
    m_enableActiveHealthCheck = _enableActiveHealthCheck;
    m_enableActiveHealthCheckHasBeenSet = true;
}

bool UpstreamHealthCheckConfig::EnableActiveHealthCheckHasBeenSet() const
{
    return m_enableActiveHealthCheckHasBeenSet;
}

KongActiveHealthCheck UpstreamHealthCheckConfig::GetActiveHealthCheck() const
{
    return m_activeHealthCheck;
}

void UpstreamHealthCheckConfig::SetActiveHealthCheck(const KongActiveHealthCheck& _activeHealthCheck)
{
    m_activeHealthCheck = _activeHealthCheck;
    m_activeHealthCheckHasBeenSet = true;
}

bool UpstreamHealthCheckConfig::ActiveHealthCheckHasBeenSet() const
{
    return m_activeHealthCheckHasBeenSet;
}

bool UpstreamHealthCheckConfig::GetEnablePassiveHealthCheck() const
{
    return m_enablePassiveHealthCheck;
}

void UpstreamHealthCheckConfig::SetEnablePassiveHealthCheck(const bool& _enablePassiveHealthCheck)
{
    m_enablePassiveHealthCheck = _enablePassiveHealthCheck;
    m_enablePassiveHealthCheckHasBeenSet = true;
}

bool UpstreamHealthCheckConfig::EnablePassiveHealthCheckHasBeenSet() const
{
    return m_enablePassiveHealthCheckHasBeenSet;
}

KongPassiveHealthCheck UpstreamHealthCheckConfig::GetPassiveHealthCheck() const
{
    return m_passiveHealthCheck;
}

void UpstreamHealthCheckConfig::SetPassiveHealthCheck(const KongPassiveHealthCheck& _passiveHealthCheck)
{
    m_passiveHealthCheck = _passiveHealthCheck;
    m_passiveHealthCheckHasBeenSet = true;
}

bool UpstreamHealthCheckConfig::PassiveHealthCheckHasBeenSet() const
{
    return m_passiveHealthCheckHasBeenSet;
}

uint64_t UpstreamHealthCheckConfig::GetSuccesses() const
{
    return m_successes;
}

void UpstreamHealthCheckConfig::SetSuccesses(const uint64_t& _successes)
{
    m_successes = _successes;
    m_successesHasBeenSet = true;
}

bool UpstreamHealthCheckConfig::SuccessesHasBeenSet() const
{
    return m_successesHasBeenSet;
}

uint64_t UpstreamHealthCheckConfig::GetFailures() const
{
    return m_failures;
}

void UpstreamHealthCheckConfig::SetFailures(const uint64_t& _failures)
{
    m_failures = _failures;
    m_failuresHasBeenSet = true;
}

bool UpstreamHealthCheckConfig::FailuresHasBeenSet() const
{
    return m_failuresHasBeenSet;
}

uint64_t UpstreamHealthCheckConfig::GetTimeouts() const
{
    return m_timeouts;
}

void UpstreamHealthCheckConfig::SetTimeouts(const uint64_t& _timeouts)
{
    m_timeouts = _timeouts;
    m_timeoutsHasBeenSet = true;
}

bool UpstreamHealthCheckConfig::TimeoutsHasBeenSet() const
{
    return m_timeoutsHasBeenSet;
}

vector<uint64_t> UpstreamHealthCheckConfig::GetHealthyHttpStatuses() const
{
    return m_healthyHttpStatuses;
}

void UpstreamHealthCheckConfig::SetHealthyHttpStatuses(const vector<uint64_t>& _healthyHttpStatuses)
{
    m_healthyHttpStatuses = _healthyHttpStatuses;
    m_healthyHttpStatusesHasBeenSet = true;
}

bool UpstreamHealthCheckConfig::HealthyHttpStatusesHasBeenSet() const
{
    return m_healthyHttpStatusesHasBeenSet;
}

vector<uint64_t> UpstreamHealthCheckConfig::GetUnhealthyHttpStatuses() const
{
    return m_unhealthyHttpStatuses;
}

void UpstreamHealthCheckConfig::SetUnhealthyHttpStatuses(const vector<uint64_t>& _unhealthyHttpStatuses)
{
    m_unhealthyHttpStatuses = _unhealthyHttpStatuses;
    m_unhealthyHttpStatusesHasBeenSet = true;
}

bool UpstreamHealthCheckConfig::UnhealthyHttpStatusesHasBeenSet() const
{
    return m_unhealthyHttpStatusesHasBeenSet;
}

bool UpstreamHealthCheckConfig::GetIgnoreZeroWeightNodes() const
{
    return m_ignoreZeroWeightNodes;
}

void UpstreamHealthCheckConfig::SetIgnoreZeroWeightNodes(const bool& _ignoreZeroWeightNodes)
{
    m_ignoreZeroWeightNodes = _ignoreZeroWeightNodes;
    m_ignoreZeroWeightNodesHasBeenSet = true;
}

bool UpstreamHealthCheckConfig::IgnoreZeroWeightNodesHasBeenSet() const
{
    return m_ignoreZeroWeightNodesHasBeenSet;
}

bool UpstreamHealthCheckConfig::GetZeroWeightHeathCheck() const
{
    return m_zeroWeightHeathCheck;
}

void UpstreamHealthCheckConfig::SetZeroWeightHeathCheck(const bool& _zeroWeightHeathCheck)
{
    m_zeroWeightHeathCheck = _zeroWeightHeathCheck;
    m_zeroWeightHeathCheckHasBeenSet = true;
}

bool UpstreamHealthCheckConfig::ZeroWeightHeathCheckHasBeenSet() const
{
    return m_zeroWeightHeathCheckHasBeenSet;
}

