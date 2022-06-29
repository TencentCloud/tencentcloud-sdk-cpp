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

#include <tencentcloud/tcss/v20201101/model/AbnormalProcessChildRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AbnormalProcessChildRuleInfo::AbnormalProcessChildRuleInfo() :
    m_ruleModeHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleLevelHasBeenSet(false)
{
}

CoreInternalOutcome AbnormalProcessChildRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleMode") && !value["RuleMode"].IsNull())
    {
        if (!value["RuleMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessChildRuleInfo.RuleMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleMode = string(value["RuleMode"].GetString());
        m_ruleModeHasBeenSet = true;
    }

    if (value.HasMember("ProcessPath") && !value["ProcessPath"].IsNull())
    {
        if (!value["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessChildRuleInfo.ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(value["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessChildRuleInfo.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleLevel") && !value["RuleLevel"].IsNull())
    {
        if (!value["RuleLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessChildRuleInfo.RuleLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleLevel = string(value["RuleLevel"].GetString());
        m_ruleLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbnormalProcessChildRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleMode.c_str(), allocator).Move(), allocator);
    }

    if (m_processPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPath.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleLevel.c_str(), allocator).Move(), allocator);
    }

}


string AbnormalProcessChildRuleInfo::GetRuleMode() const
{
    return m_ruleMode;
}

void AbnormalProcessChildRuleInfo::SetRuleMode(const string& _ruleMode)
{
    m_ruleMode = _ruleMode;
    m_ruleModeHasBeenSet = true;
}

bool AbnormalProcessChildRuleInfo::RuleModeHasBeenSet() const
{
    return m_ruleModeHasBeenSet;
}

string AbnormalProcessChildRuleInfo::GetProcessPath() const
{
    return m_processPath;
}

void AbnormalProcessChildRuleInfo::SetProcessPath(const string& _processPath)
{
    m_processPath = _processPath;
    m_processPathHasBeenSet = true;
}

bool AbnormalProcessChildRuleInfo::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

string AbnormalProcessChildRuleInfo::GetRuleId() const
{
    return m_ruleId;
}

void AbnormalProcessChildRuleInfo::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AbnormalProcessChildRuleInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string AbnormalProcessChildRuleInfo::GetRuleLevel() const
{
    return m_ruleLevel;
}

void AbnormalProcessChildRuleInfo::SetRuleLevel(const string& _ruleLevel)
{
    m_ruleLevel = _ruleLevel;
    m_ruleLevelHasBeenSet = true;
}

bool AbnormalProcessChildRuleInfo::RuleLevelHasBeenSet() const
{
    return m_ruleLevelHasBeenSet;
}

