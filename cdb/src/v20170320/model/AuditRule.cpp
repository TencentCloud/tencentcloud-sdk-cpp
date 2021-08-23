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

#include <tencentcloud/cdb/v20170320/model/AuditRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

AuditRule::AuditRule() :
    m_ruleIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleFiltersHasBeenSet(false),
    m_auditAllHasBeenSet(false)
{
}

CoreInternalOutcome AuditRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditRule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditRule.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RuleFilters") && !value["RuleFilters"].IsNull())
    {
        if (!value["RuleFilters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditRule.RuleFilters` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleFilters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuditFilter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleFilters.push_back(item);
        }
        m_ruleFiltersHasBeenSet = true;
    }

    if (value.HasMember("AuditAll") && !value["AuditAll"].IsNull())
    {
        if (!value["AuditAll"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AuditRule.AuditAll` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_auditAll = value["AuditAll"].GetBool();
        m_auditAllHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleFilters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleFilters.begin(); itr != m_ruleFilters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_auditAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditAll, allocator);
    }

}


string AuditRule::GetRuleId() const
{
    return m_ruleId;
}

void AuditRule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AuditRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string AuditRule::GetCreateTime() const
{
    return m_createTime;
}

void AuditRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AuditRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AuditRule::GetModifyTime() const
{
    return m_modifyTime;
}

void AuditRule::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool AuditRule::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string AuditRule::GetRuleName() const
{
    return m_ruleName;
}

void AuditRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool AuditRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string AuditRule::GetDescription() const
{
    return m_description;
}

void AuditRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AuditRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<AuditFilter> AuditRule::GetRuleFilters() const
{
    return m_ruleFilters;
}

void AuditRule::SetRuleFilters(const vector<AuditFilter>& _ruleFilters)
{
    m_ruleFilters = _ruleFilters;
    m_ruleFiltersHasBeenSet = true;
}

bool AuditRule::RuleFiltersHasBeenSet() const
{
    return m_ruleFiltersHasBeenSet;
}

bool AuditRule::GetAuditAll() const
{
    return m_auditAll;
}

void AuditRule::SetAuditAll(const bool& _auditAll)
{
    m_auditAll = _auditAll;
    m_auditAllHasBeenSet = true;
}

bool AuditRule::AuditAllHasBeenSet() const
{
    return m_auditAllHasBeenSet;
}

