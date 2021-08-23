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

#include <tencentcloud/cdn/v20180606/model/ScdnCCRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ScdnCCRules::ScdnCCRules() :
    m_ruleTypeHasBeenSet(false),
    m_ruleValueHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_detectionTimeHasBeenSet(false),
    m_frequencyLimitHasBeenSet(false),
    m_punishmentSwitchHasBeenSet(false),
    m_punishmentTimeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_redirectUrlHasBeenSet(false)
{
}

CoreInternalOutcome ScdnCCRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnCCRules.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleValue") && !value["RuleValue"].IsNull())
    {
        if (!value["RuleValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScdnCCRules.RuleValue` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleValue.push_back((*itr).GetString());
        }
        m_ruleValueHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnCCRules.Qps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetUint64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("DetectionTime") && !value["DetectionTime"].IsNull())
    {
        if (!value["DetectionTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnCCRules.DetectionTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_detectionTime = value["DetectionTime"].GetUint64();
        m_detectionTimeHasBeenSet = true;
    }

    if (value.HasMember("FrequencyLimit") && !value["FrequencyLimit"].IsNull())
    {
        if (!value["FrequencyLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnCCRules.FrequencyLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frequencyLimit = value["FrequencyLimit"].GetUint64();
        m_frequencyLimitHasBeenSet = true;
    }

    if (value.HasMember("PunishmentSwitch") && !value["PunishmentSwitch"].IsNull())
    {
        if (!value["PunishmentSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnCCRules.PunishmentSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_punishmentSwitch = string(value["PunishmentSwitch"].GetString());
        m_punishmentSwitchHasBeenSet = true;
    }

    if (value.HasMember("PunishmentTime") && !value["PunishmentTime"].IsNull())
    {
        if (!value["PunishmentTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnCCRules.PunishmentTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_punishmentTime = value["PunishmentTime"].GetUint64();
        m_punishmentTimeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnCCRules.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("RedirectUrl") && !value["RedirectUrl"].IsNull())
    {
        if (!value["RedirectUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnCCRules.RedirectUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirectUrl = string(value["RedirectUrl"].GetString());
        m_redirectUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScdnCCRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleValue.begin(); itr != m_ruleValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_detectionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectionTime, allocator);
    }

    if (m_frequencyLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrequencyLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frequencyLimit, allocator);
    }

    if (m_punishmentSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PunishmentSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_punishmentSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_punishmentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PunishmentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_punishmentTime, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redirectUrl.c_str(), allocator).Move(), allocator);
    }

}


string ScdnCCRules::GetRuleType() const
{
    return m_ruleType;
}

void ScdnCCRules::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool ScdnCCRules::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<string> ScdnCCRules::GetRuleValue() const
{
    return m_ruleValue;
}

void ScdnCCRules::SetRuleValue(const vector<string>& _ruleValue)
{
    m_ruleValue = _ruleValue;
    m_ruleValueHasBeenSet = true;
}

bool ScdnCCRules::RuleValueHasBeenSet() const
{
    return m_ruleValueHasBeenSet;
}

uint64_t ScdnCCRules::GetQps() const
{
    return m_qps;
}

void ScdnCCRules::SetQps(const uint64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool ScdnCCRules::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

uint64_t ScdnCCRules::GetDetectionTime() const
{
    return m_detectionTime;
}

void ScdnCCRules::SetDetectionTime(const uint64_t& _detectionTime)
{
    m_detectionTime = _detectionTime;
    m_detectionTimeHasBeenSet = true;
}

bool ScdnCCRules::DetectionTimeHasBeenSet() const
{
    return m_detectionTimeHasBeenSet;
}

uint64_t ScdnCCRules::GetFrequencyLimit() const
{
    return m_frequencyLimit;
}

void ScdnCCRules::SetFrequencyLimit(const uint64_t& _frequencyLimit)
{
    m_frequencyLimit = _frequencyLimit;
    m_frequencyLimitHasBeenSet = true;
}

bool ScdnCCRules::FrequencyLimitHasBeenSet() const
{
    return m_frequencyLimitHasBeenSet;
}

string ScdnCCRules::GetPunishmentSwitch() const
{
    return m_punishmentSwitch;
}

void ScdnCCRules::SetPunishmentSwitch(const string& _punishmentSwitch)
{
    m_punishmentSwitch = _punishmentSwitch;
    m_punishmentSwitchHasBeenSet = true;
}

bool ScdnCCRules::PunishmentSwitchHasBeenSet() const
{
    return m_punishmentSwitchHasBeenSet;
}

uint64_t ScdnCCRules::GetPunishmentTime() const
{
    return m_punishmentTime;
}

void ScdnCCRules::SetPunishmentTime(const uint64_t& _punishmentTime)
{
    m_punishmentTime = _punishmentTime;
    m_punishmentTimeHasBeenSet = true;
}

bool ScdnCCRules::PunishmentTimeHasBeenSet() const
{
    return m_punishmentTimeHasBeenSet;
}

string ScdnCCRules::GetAction() const
{
    return m_action;
}

void ScdnCCRules::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool ScdnCCRules::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string ScdnCCRules::GetRedirectUrl() const
{
    return m_redirectUrl;
}

void ScdnCCRules::SetRedirectUrl(const string& _redirectUrl)
{
    m_redirectUrl = _redirectUrl;
    m_redirectUrlHasBeenSet = true;
}

bool ScdnCCRules::RedirectUrlHasBeenSet() const
{
    return m_redirectUrlHasBeenSet;
}

