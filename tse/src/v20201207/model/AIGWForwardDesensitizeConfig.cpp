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

#include <tencentcloud/tse/v20201207/model/AIGWForwardDesensitizeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWForwardDesensitizeConfig::AIGWForwardDesensitizeConfig() :
    m_enabledHasBeenSet(false),
    m_predefinedRuleTypesHasBeenSet(false),
    m_customRulesHasBeenSet(false),
    m_placeholderFormatHasBeenSet(false),
    m_onFailureHasBeenSet(false)
{
}

CoreInternalOutcome AIGWForwardDesensitizeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWForwardDesensitizeConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("PredefinedRuleTypes") && !value["PredefinedRuleTypes"].IsNull())
    {
        if (!value["PredefinedRuleTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWForwardDesensitizeConfig.PredefinedRuleTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["PredefinedRuleTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_predefinedRuleTypes.push_back((*itr).GetString());
        }
        m_predefinedRuleTypesHasBeenSet = true;
    }

    if (value.HasMember("CustomRules") && !value["CustomRules"].IsNull())
    {
        if (!value["CustomRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWForwardDesensitizeConfig.CustomRules` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWCustomDesensitizeRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customRules.push_back(item);
        }
        m_customRulesHasBeenSet = true;
    }

    if (value.HasMember("PlaceholderFormat") && !value["PlaceholderFormat"].IsNull())
    {
        if (!value["PlaceholderFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWForwardDesensitizeConfig.PlaceholderFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_placeholderFormat = string(value["PlaceholderFormat"].GetString());
        m_placeholderFormatHasBeenSet = true;
    }

    if (value.HasMember("OnFailure") && !value["OnFailure"].IsNull())
    {
        if (!value["OnFailure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWForwardDesensitizeConfig.OnFailure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onFailure = string(value["OnFailure"].GetString());
        m_onFailureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWForwardDesensitizeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_predefinedRuleTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PredefinedRuleTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_predefinedRuleTypes.begin(); itr != m_predefinedRuleTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customRules.begin(); itr != m_customRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_placeholderFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaceholderFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_placeholderFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_onFailureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnFailure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_onFailure.c_str(), allocator).Move(), allocator);
    }

}


bool AIGWForwardDesensitizeConfig::GetEnabled() const
{
    return m_enabled;
}

void AIGWForwardDesensitizeConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool AIGWForwardDesensitizeConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<string> AIGWForwardDesensitizeConfig::GetPredefinedRuleTypes() const
{
    return m_predefinedRuleTypes;
}

void AIGWForwardDesensitizeConfig::SetPredefinedRuleTypes(const vector<string>& _predefinedRuleTypes)
{
    m_predefinedRuleTypes = _predefinedRuleTypes;
    m_predefinedRuleTypesHasBeenSet = true;
}

bool AIGWForwardDesensitizeConfig::PredefinedRuleTypesHasBeenSet() const
{
    return m_predefinedRuleTypesHasBeenSet;
}

vector<AIGWCustomDesensitizeRule> AIGWForwardDesensitizeConfig::GetCustomRules() const
{
    return m_customRules;
}

void AIGWForwardDesensitizeConfig::SetCustomRules(const vector<AIGWCustomDesensitizeRule>& _customRules)
{
    m_customRules = _customRules;
    m_customRulesHasBeenSet = true;
}

bool AIGWForwardDesensitizeConfig::CustomRulesHasBeenSet() const
{
    return m_customRulesHasBeenSet;
}

string AIGWForwardDesensitizeConfig::GetPlaceholderFormat() const
{
    return m_placeholderFormat;
}

void AIGWForwardDesensitizeConfig::SetPlaceholderFormat(const string& _placeholderFormat)
{
    m_placeholderFormat = _placeholderFormat;
    m_placeholderFormatHasBeenSet = true;
}

bool AIGWForwardDesensitizeConfig::PlaceholderFormatHasBeenSet() const
{
    return m_placeholderFormatHasBeenSet;
}

string AIGWForwardDesensitizeConfig::GetOnFailure() const
{
    return m_onFailure;
}

void AIGWForwardDesensitizeConfig::SetOnFailure(const string& _onFailure)
{
    m_onFailure = _onFailure;
    m_onFailureHasBeenSet = true;
}

bool AIGWForwardDesensitizeConfig::OnFailureHasBeenSet() const
{
    return m_onFailureHasBeenSet;
}

