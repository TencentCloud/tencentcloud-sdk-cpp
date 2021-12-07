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

#include <tencentcloud/tcss/v20201101/model/AccessControlSystemChildRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AccessControlSystemChildRuleInfo::AccessControlSystemChildRuleInfo() :
    m_ruleIdHasBeenSet(false),
    m_ruleModeHasBeenSet(false),
    m_isEnableHasBeenSet(false),
    m_ruleTypeHasBeenSet(false)
{
}

CoreInternalOutcome AccessControlSystemChildRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlSystemChildRuleInfo.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleMode") && !value["RuleMode"].IsNull())
    {
        if (!value["RuleMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlSystemChildRuleInfo.RuleMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleMode = string(value["RuleMode"].GetString());
        m_ruleModeHasBeenSet = true;
    }

    if (value.HasMember("IsEnable") && !value["IsEnable"].IsNull())
    {
        if (!value["IsEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlSystemChildRuleInfo.IsEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnable = value["IsEnable"].GetBool();
        m_isEnableHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlSystemChildRuleInfo.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessControlSystemChildRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleMode.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnable, allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

}


string AccessControlSystemChildRuleInfo::GetRuleId() const
{
    return m_ruleId;
}

void AccessControlSystemChildRuleInfo::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AccessControlSystemChildRuleInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string AccessControlSystemChildRuleInfo::GetRuleMode() const
{
    return m_ruleMode;
}

void AccessControlSystemChildRuleInfo::SetRuleMode(const string& _ruleMode)
{
    m_ruleMode = _ruleMode;
    m_ruleModeHasBeenSet = true;
}

bool AccessControlSystemChildRuleInfo::RuleModeHasBeenSet() const
{
    return m_ruleModeHasBeenSet;
}

bool AccessControlSystemChildRuleInfo::GetIsEnable() const
{
    return m_isEnable;
}

void AccessControlSystemChildRuleInfo::SetIsEnable(const bool& _isEnable)
{
    m_isEnable = _isEnable;
    m_isEnableHasBeenSet = true;
}

bool AccessControlSystemChildRuleInfo::IsEnableHasBeenSet() const
{
    return m_isEnableHasBeenSet;
}

string AccessControlSystemChildRuleInfo::GetRuleType() const
{
    return m_ruleType;
}

void AccessControlSystemChildRuleInfo::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool AccessControlSystemChildRuleInfo::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

