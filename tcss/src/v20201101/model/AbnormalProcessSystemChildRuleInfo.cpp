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

#include <tencentcloud/tcss/v20201101/model/AbnormalProcessSystemChildRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AbnormalProcessSystemChildRuleInfo::AbnormalProcessSystemChildRuleInfo() :
    m_ruleIdHasBeenSet(false),
    m_isEnableHasBeenSet(false),
    m_ruleModeHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_ruleLevelHasBeenSet(false)
{
}

CoreInternalOutcome AbnormalProcessSystemChildRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessSystemChildRuleInfo.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("IsEnable") && !value["IsEnable"].IsNull())
    {
        if (!value["IsEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessSystemChildRuleInfo.IsEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnable = value["IsEnable"].GetBool();
        m_isEnableHasBeenSet = true;
    }

    if (value.HasMember("RuleMode") && !value["RuleMode"].IsNull())
    {
        if (!value["RuleMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessSystemChildRuleInfo.RuleMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleMode = string(value["RuleMode"].GetString());
        m_ruleModeHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessSystemChildRuleInfo.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleLevel") && !value["RuleLevel"].IsNull())
    {
        if (!value["RuleLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessSystemChildRuleInfo.RuleLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleLevel = string(value["RuleLevel"].GetString());
        m_ruleLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbnormalProcessSystemChildRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnable, allocator);
    }

    if (m_ruleModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleMode.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleLevel.c_str(), allocator).Move(), allocator);
    }

}


string AbnormalProcessSystemChildRuleInfo::GetRuleId() const
{
    return m_ruleId;
}

void AbnormalProcessSystemChildRuleInfo::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AbnormalProcessSystemChildRuleInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

bool AbnormalProcessSystemChildRuleInfo::GetIsEnable() const
{
    return m_isEnable;
}

void AbnormalProcessSystemChildRuleInfo::SetIsEnable(const bool& _isEnable)
{
    m_isEnable = _isEnable;
    m_isEnableHasBeenSet = true;
}

bool AbnormalProcessSystemChildRuleInfo::IsEnableHasBeenSet() const
{
    return m_isEnableHasBeenSet;
}

string AbnormalProcessSystemChildRuleInfo::GetRuleMode() const
{
    return m_ruleMode;
}

void AbnormalProcessSystemChildRuleInfo::SetRuleMode(const string& _ruleMode)
{
    m_ruleMode = _ruleMode;
    m_ruleModeHasBeenSet = true;
}

bool AbnormalProcessSystemChildRuleInfo::RuleModeHasBeenSet() const
{
    return m_ruleModeHasBeenSet;
}

string AbnormalProcessSystemChildRuleInfo::GetRuleType() const
{
    return m_ruleType;
}

void AbnormalProcessSystemChildRuleInfo::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool AbnormalProcessSystemChildRuleInfo::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string AbnormalProcessSystemChildRuleInfo::GetRuleLevel() const
{
    return m_ruleLevel;
}

void AbnormalProcessSystemChildRuleInfo::SetRuleLevel(const string& _ruleLevel)
{
    m_ruleLevel = _ruleLevel;
    m_ruleLevelHasBeenSet = true;
}

bool AbnormalProcessSystemChildRuleInfo::RuleLevelHasBeenSet() const
{
    return m_ruleLevelHasBeenSet;
}

