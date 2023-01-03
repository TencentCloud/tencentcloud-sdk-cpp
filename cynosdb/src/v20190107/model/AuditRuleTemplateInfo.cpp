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

#include <tencentcloud/cynosdb/v20190107/model/AuditRuleTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

AuditRuleTemplateInfo::AuditRuleTemplateInfo() :
    m_ruleTemplateIdHasBeenSet(false),
    m_ruleTemplateNameHasBeenSet(false),
    m_ruleFiltersHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createAtHasBeenSet(false)
{
}

CoreInternalOutcome AuditRuleTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleTemplateId") && !value["RuleTemplateId"].IsNull())
    {
        if (!value["RuleTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditRuleTemplateInfo.RuleTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTemplateId = string(value["RuleTemplateId"].GetString());
        m_ruleTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("RuleTemplateName") && !value["RuleTemplateName"].IsNull())
    {
        if (!value["RuleTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditRuleTemplateInfo.RuleTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTemplateName = string(value["RuleTemplateName"].GetString());
        m_ruleTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("RuleFilters") && !value["RuleFilters"].IsNull())
    {
        if (!value["RuleFilters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditRuleTemplateInfo.RuleFilters` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleFilters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleFilters item;
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

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditRuleTemplateInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditRuleTemplateInfo.CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(value["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditRuleTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTemplateName.c_str(), allocator).Move(), allocator);
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
    }

}


string AuditRuleTemplateInfo::GetRuleTemplateId() const
{
    return m_ruleTemplateId;
}

void AuditRuleTemplateInfo::SetRuleTemplateId(const string& _ruleTemplateId)
{
    m_ruleTemplateId = _ruleTemplateId;
    m_ruleTemplateIdHasBeenSet = true;
}

bool AuditRuleTemplateInfo::RuleTemplateIdHasBeenSet() const
{
    return m_ruleTemplateIdHasBeenSet;
}

string AuditRuleTemplateInfo::GetRuleTemplateName() const
{
    return m_ruleTemplateName;
}

void AuditRuleTemplateInfo::SetRuleTemplateName(const string& _ruleTemplateName)
{
    m_ruleTemplateName = _ruleTemplateName;
    m_ruleTemplateNameHasBeenSet = true;
}

bool AuditRuleTemplateInfo::RuleTemplateNameHasBeenSet() const
{
    return m_ruleTemplateNameHasBeenSet;
}

vector<RuleFilters> AuditRuleTemplateInfo::GetRuleFilters() const
{
    return m_ruleFilters;
}

void AuditRuleTemplateInfo::SetRuleFilters(const vector<RuleFilters>& _ruleFilters)
{
    m_ruleFilters = _ruleFilters;
    m_ruleFiltersHasBeenSet = true;
}

bool AuditRuleTemplateInfo::RuleFiltersHasBeenSet() const
{
    return m_ruleFiltersHasBeenSet;
}

string AuditRuleTemplateInfo::GetDescription() const
{
    return m_description;
}

void AuditRuleTemplateInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AuditRuleTemplateInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AuditRuleTemplateInfo::GetCreateAt() const
{
    return m_createAt;
}

void AuditRuleTemplateInfo::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool AuditRuleTemplateInfo::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

