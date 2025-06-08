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

#include <tencentcloud/teo/v20220901/model/SlowAttackDefense.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SlowAttackDefense::SlowAttackDefense() :
    m_enabledHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_minimalRequestBodyTransferRateHasBeenSet(false),
    m_requestBodyTransferTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome SlowAttackDefense::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowAttackDefense.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SlowAttackDefense.Action` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_action.Deserialize(value["Action"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionHasBeenSet = true;
    }

    if (value.HasMember("MinimalRequestBodyTransferRate") && !value["MinimalRequestBodyTransferRate"].IsNull())
    {
        if (!value["MinimalRequestBodyTransferRate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SlowAttackDefense.MinimalRequestBodyTransferRate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_minimalRequestBodyTransferRate.Deserialize(value["MinimalRequestBodyTransferRate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_minimalRequestBodyTransferRateHasBeenSet = true;
    }

    if (value.HasMember("RequestBodyTransferTimeout") && !value["RequestBodyTransferTimeout"].IsNull())
    {
        if (!value["RequestBodyTransferTimeout"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SlowAttackDefense.RequestBodyTransferTimeout` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_requestBodyTransferTimeout.Deserialize(value["RequestBodyTransferTimeout"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_requestBodyTransferTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowAttackDefense::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_action.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_minimalRequestBodyTransferRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinimalRequestBodyTransferRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_minimalRequestBodyTransferRate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requestBodyTransferTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestBodyTransferTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requestBodyTransferTimeout.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SlowAttackDefense::GetEnabled() const
{
    return m_enabled;
}

void SlowAttackDefense::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool SlowAttackDefense::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

SecurityAction SlowAttackDefense::GetAction() const
{
    return m_action;
}

void SlowAttackDefense::SetAction(const SecurityAction& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SlowAttackDefense::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

MinimalRequestBodyTransferRate SlowAttackDefense::GetMinimalRequestBodyTransferRate() const
{
    return m_minimalRequestBodyTransferRate;
}

void SlowAttackDefense::SetMinimalRequestBodyTransferRate(const MinimalRequestBodyTransferRate& _minimalRequestBodyTransferRate)
{
    m_minimalRequestBodyTransferRate = _minimalRequestBodyTransferRate;
    m_minimalRequestBodyTransferRateHasBeenSet = true;
}

bool SlowAttackDefense::MinimalRequestBodyTransferRateHasBeenSet() const
{
    return m_minimalRequestBodyTransferRateHasBeenSet;
}

RequestBodyTransferTimeout SlowAttackDefense::GetRequestBodyTransferTimeout() const
{
    return m_requestBodyTransferTimeout;
}

void SlowAttackDefense::SetRequestBodyTransferTimeout(const RequestBodyTransferTimeout& _requestBodyTransferTimeout)
{
    m_requestBodyTransferTimeout = _requestBodyTransferTimeout;
    m_requestBodyTransferTimeoutHasBeenSet = true;
}

bool SlowAttackDefense::RequestBodyTransferTimeoutHasBeenSet() const
{
    return m_requestBodyTransferTimeoutHasBeenSet;
}

