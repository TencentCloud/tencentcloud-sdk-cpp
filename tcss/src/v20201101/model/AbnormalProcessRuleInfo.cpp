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

#include <tencentcloud/tcss/v20201101/model/AbnormalProcessRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AbnormalProcessRuleInfo::AbnormalProcessRuleInfo() :
    m_isEnableHasBeenSet(false),
    m_imageIdsHasBeenSet(false),
    m_childRulesHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_systemChildRulesHasBeenSet(false),
    m_isDefaultHasBeenSet(false)
{
}

CoreInternalOutcome AbnormalProcessRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsEnable") && !value["IsEnable"].IsNull())
    {
        if (!value["IsEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleInfo.IsEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnable = value["IsEnable"].GetBool();
        m_isEnableHasBeenSet = true;
    }

    if (value.HasMember("ImageIds") && !value["ImageIds"].IsNull())
    {
        if (!value["ImageIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleInfo.ImageIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageIds.push_back((*itr).GetString());
        }
        m_imageIdsHasBeenSet = true;
    }

    if (value.HasMember("ChildRules") && !value["ChildRules"].IsNull())
    {
        if (!value["ChildRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleInfo.ChildRules` is not array type"));

        const rapidjson::Value &tmpValue = value["ChildRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AbnormalProcessChildRuleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_childRules.push_back(item);
        }
        m_childRulesHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleInfo.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("SystemChildRules") && !value["SystemChildRules"].IsNull())
    {
        if (!value["SystemChildRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleInfo.SystemChildRules` is not array type"));

        const rapidjson::Value &tmpValue = value["SystemChildRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AbnormalProcessSystemChildRuleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_systemChildRules.push_back(item);
        }
        m_systemChildRulesHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleInfo.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbnormalProcessRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnable, allocator);
    }

    if (m_imageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIds.begin(); itr != m_imageIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_childRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_childRules.begin(); itr != m_childRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_systemChildRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemChildRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_systemChildRules.begin(); itr != m_systemChildRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

}


bool AbnormalProcessRuleInfo::GetIsEnable() const
{
    return m_isEnable;
}

void AbnormalProcessRuleInfo::SetIsEnable(const bool& _isEnable)
{
    m_isEnable = _isEnable;
    m_isEnableHasBeenSet = true;
}

bool AbnormalProcessRuleInfo::IsEnableHasBeenSet() const
{
    return m_isEnableHasBeenSet;
}

vector<string> AbnormalProcessRuleInfo::GetImageIds() const
{
    return m_imageIds;
}

void AbnormalProcessRuleInfo::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool AbnormalProcessRuleInfo::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

vector<AbnormalProcessChildRuleInfo> AbnormalProcessRuleInfo::GetChildRules() const
{
    return m_childRules;
}

void AbnormalProcessRuleInfo::SetChildRules(const vector<AbnormalProcessChildRuleInfo>& _childRules)
{
    m_childRules = _childRules;
    m_childRulesHasBeenSet = true;
}

bool AbnormalProcessRuleInfo::ChildRulesHasBeenSet() const
{
    return m_childRulesHasBeenSet;
}

string AbnormalProcessRuleInfo::GetRuleName() const
{
    return m_ruleName;
}

void AbnormalProcessRuleInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool AbnormalProcessRuleInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string AbnormalProcessRuleInfo::GetRuleId() const
{
    return m_ruleId;
}

void AbnormalProcessRuleInfo::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AbnormalProcessRuleInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

vector<AbnormalProcessSystemChildRuleInfo> AbnormalProcessRuleInfo::GetSystemChildRules() const
{
    return m_systemChildRules;
}

void AbnormalProcessRuleInfo::SetSystemChildRules(const vector<AbnormalProcessSystemChildRuleInfo>& _systemChildRules)
{
    m_systemChildRules = _systemChildRules;
    m_systemChildRulesHasBeenSet = true;
}

bool AbnormalProcessRuleInfo::SystemChildRulesHasBeenSet() const
{
    return m_systemChildRulesHasBeenSet;
}

bool AbnormalProcessRuleInfo::GetIsDefault() const
{
    return m_isDefault;
}

void AbnormalProcessRuleInfo::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool AbnormalProcessRuleInfo::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

