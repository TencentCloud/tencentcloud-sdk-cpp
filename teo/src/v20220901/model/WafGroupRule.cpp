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

#include <tencentcloud/teo/v20220901/model/WafGroupRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

WafGroupRule::WafGroupRule() :
    m_ruleIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleLevelDescHasBeenSet(false),
    m_ruleTagsHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleTypeNameHasBeenSet(false),
    m_ruleTypeIdHasBeenSet(false),
    m_ruleTypeDescHasBeenSet(false)
{
}

CoreInternalOutcome WafGroupRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupRule.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RuleLevelDesc") && !value["RuleLevelDesc"].IsNull())
    {
        if (!value["RuleLevelDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupRule.RuleLevelDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleLevelDesc = string(value["RuleLevelDesc"].GetString());
        m_ruleLevelDescHasBeenSet = true;
    }

    if (value.HasMember("RuleTags") && !value["RuleTags"].IsNull())
    {
        if (!value["RuleTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WafGroupRule.RuleTags` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleTags.push_back((*itr).GetString());
        }
        m_ruleTagsHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupRule.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RuleTypeName") && !value["RuleTypeName"].IsNull())
    {
        if (!value["RuleTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupRule.RuleTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTypeName = string(value["RuleTypeName"].GetString());
        m_ruleTypeNameHasBeenSet = true;
    }

    if (value.HasMember("RuleTypeId") && !value["RuleTypeId"].IsNull())
    {
        if (!value["RuleTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupRule.RuleTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTypeId = value["RuleTypeId"].GetInt64();
        m_ruleTypeIdHasBeenSet = true;
    }

    if (value.HasMember("RuleTypeDesc") && !value["RuleTypeDesc"].IsNull())
    {
        if (!value["RuleTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupRule.RuleTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTypeDesc = string(value["RuleTypeDesc"].GetString());
        m_ruleTypeDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WafGroupRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleLevelDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleLevelDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleLevelDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleTags.begin(); itr != m_ruleTags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleTypeId, allocator);
    }

    if (m_ruleTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTypeDesc.c_str(), allocator).Move(), allocator);
    }

}


int64_t WafGroupRule::GetRuleId() const
{
    return m_ruleId;
}

void WafGroupRule::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool WafGroupRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string WafGroupRule::GetDescription() const
{
    return m_description;
}

void WafGroupRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WafGroupRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string WafGroupRule::GetRuleLevelDesc() const
{
    return m_ruleLevelDesc;
}

void WafGroupRule::SetRuleLevelDesc(const string& _ruleLevelDesc)
{
    m_ruleLevelDesc = _ruleLevelDesc;
    m_ruleLevelDescHasBeenSet = true;
}

bool WafGroupRule::RuleLevelDescHasBeenSet() const
{
    return m_ruleLevelDescHasBeenSet;
}

vector<string> WafGroupRule::GetRuleTags() const
{
    return m_ruleTags;
}

void WafGroupRule::SetRuleTags(const vector<string>& _ruleTags)
{
    m_ruleTags = _ruleTags;
    m_ruleTagsHasBeenSet = true;
}

bool WafGroupRule::RuleTagsHasBeenSet() const
{
    return m_ruleTagsHasBeenSet;
}

string WafGroupRule::GetUpdateTime() const
{
    return m_updateTime;
}

void WafGroupRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WafGroupRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string WafGroupRule::GetStatus() const
{
    return m_status;
}

void WafGroupRule::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WafGroupRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string WafGroupRule::GetRuleTypeName() const
{
    return m_ruleTypeName;
}

void WafGroupRule::SetRuleTypeName(const string& _ruleTypeName)
{
    m_ruleTypeName = _ruleTypeName;
    m_ruleTypeNameHasBeenSet = true;
}

bool WafGroupRule::RuleTypeNameHasBeenSet() const
{
    return m_ruleTypeNameHasBeenSet;
}

int64_t WafGroupRule::GetRuleTypeId() const
{
    return m_ruleTypeId;
}

void WafGroupRule::SetRuleTypeId(const int64_t& _ruleTypeId)
{
    m_ruleTypeId = _ruleTypeId;
    m_ruleTypeIdHasBeenSet = true;
}

bool WafGroupRule::RuleTypeIdHasBeenSet() const
{
    return m_ruleTypeIdHasBeenSet;
}

string WafGroupRule::GetRuleTypeDesc() const
{
    return m_ruleTypeDesc;
}

void WafGroupRule::SetRuleTypeDesc(const string& _ruleTypeDesc)
{
    m_ruleTypeDesc = _ruleTypeDesc;
    m_ruleTypeDescHasBeenSet = true;
}

bool WafGroupRule::RuleTypeDescHasBeenSet() const
{
    return m_ruleTypeDescHasBeenSet;
}

