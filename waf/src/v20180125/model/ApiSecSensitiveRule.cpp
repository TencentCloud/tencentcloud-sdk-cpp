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

#include <tencentcloud/waf/v20180125/model/ApiSecSensitiveRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiSecSensitiveRule::ApiSecSensitiveRule() :
    m_ruleNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_customRuleHasBeenSet(false),
    m_isPanHasBeenSet(false)
{
}

CoreInternalOutcome ApiSecSensitiveRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveRule.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveRule.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveRule.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveRule.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("CustomRule") && !value["CustomRule"].IsNull())
    {
        if (!value["CustomRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveRule.CustomRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customRule.Deserialize(value["CustomRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customRuleHasBeenSet = true;
    }

    if (value.HasMember("IsPan") && !value["IsPan"].IsNull())
    {
        if (!value["IsPan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecSensitiveRule.IsPan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPan = value["IsPan"].GetInt64();
        m_isPanHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiSecSensitiveRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_customRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isPanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPan, allocator);
    }

}


string ApiSecSensitiveRule::GetRuleName() const
{
    return m_ruleName;
}

void ApiSecSensitiveRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ApiSecSensitiveRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string ApiSecSensitiveRule::GetSource() const
{
    return m_source;
}

void ApiSecSensitiveRule::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ApiSecSensitiveRule::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

uint64_t ApiSecSensitiveRule::GetStatus() const
{
    return m_status;
}

void ApiSecSensitiveRule::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApiSecSensitiveRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApiSecSensitiveRule::GetLevel() const
{
    return m_level;
}

void ApiSecSensitiveRule::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ApiSecSensitiveRule::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t ApiSecSensitiveRule::GetTimestamp() const
{
    return m_timestamp;
}

void ApiSecSensitiveRule::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool ApiSecSensitiveRule::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

ApiSecCustomSensitiveRule ApiSecSensitiveRule::GetCustomRule() const
{
    return m_customRule;
}

void ApiSecSensitiveRule::SetCustomRule(const ApiSecCustomSensitiveRule& _customRule)
{
    m_customRule = _customRule;
    m_customRuleHasBeenSet = true;
}

bool ApiSecSensitiveRule::CustomRuleHasBeenSet() const
{
    return m_customRuleHasBeenSet;
}

int64_t ApiSecSensitiveRule::GetIsPan() const
{
    return m_isPan;
}

void ApiSecSensitiveRule::SetIsPan(const int64_t& _isPan)
{
    m_isPan = _isPan;
    m_isPanHasBeenSet = true;
}

bool ApiSecSensitiveRule::IsPanHasBeenSet() const
{
    return m_isPanHasBeenSet;
}

