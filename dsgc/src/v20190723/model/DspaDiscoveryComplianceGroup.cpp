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

#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryComplianceGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDiscoveryComplianceGroup::DspaDiscoveryComplianceGroup() :
    m_complianceGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_complianceGroupTypeHasBeenSet(false),
    m_complianceGroupRulesHasBeenSet(false),
    m_levelGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome DspaDiscoveryComplianceGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComplianceGroupId") && !value["ComplianceGroupId"].IsNull())
    {
        if (!value["ComplianceGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroup.ComplianceGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_complianceGroupId = value["ComplianceGroupId"].GetInt64();
        m_complianceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroup.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ComplianceGroupType") && !value["ComplianceGroupType"].IsNull())
    {
        if (!value["ComplianceGroupType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroup.ComplianceGroupType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_complianceGroupType = value["ComplianceGroupType"].GetInt64();
        m_complianceGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("ComplianceGroupRules") && !value["ComplianceGroupRules"].IsNull())
    {
        if (!value["ComplianceGroupRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroup.ComplianceGroupRules` is not array type"));

        const rapidjson::Value &tmpValue = value["ComplianceGroupRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspaDiscoveryComplianceGroupRuleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_complianceGroupRules.push_back(item);
        }
        m_complianceGroupRulesHasBeenSet = true;
    }

    if (value.HasMember("LevelGroupId") && !value["LevelGroupId"].IsNull())
    {
        if (!value["LevelGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroup.LevelGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelGroupId = value["LevelGroupId"].GetUint64();
        m_levelGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDiscoveryComplianceGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_complianceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complianceGroupId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complianceGroupType, allocator);
    }

    if (m_complianceGroupRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceGroupRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_complianceGroupRules.begin(); itr != m_complianceGroupRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_levelGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelGroupId, allocator);
    }

}


int64_t DspaDiscoveryComplianceGroup::GetComplianceGroupId() const
{
    return m_complianceGroupId;
}

void DspaDiscoveryComplianceGroup::SetComplianceGroupId(const int64_t& _complianceGroupId)
{
    m_complianceGroupId = _complianceGroupId;
    m_complianceGroupIdHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroup::ComplianceGroupIdHasBeenSet() const
{
    return m_complianceGroupIdHasBeenSet;
}

string DspaDiscoveryComplianceGroup::GetName() const
{
    return m_name;
}

void DspaDiscoveryComplianceGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DspaDiscoveryComplianceGroup::GetDescription() const
{
    return m_description;
}

void DspaDiscoveryComplianceGroup::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroup::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DspaDiscoveryComplianceGroup::GetComplianceGroupType() const
{
    return m_complianceGroupType;
}

void DspaDiscoveryComplianceGroup::SetComplianceGroupType(const int64_t& _complianceGroupType)
{
    m_complianceGroupType = _complianceGroupType;
    m_complianceGroupTypeHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroup::ComplianceGroupTypeHasBeenSet() const
{
    return m_complianceGroupTypeHasBeenSet;
}

vector<DspaDiscoveryComplianceGroupRuleInfo> DspaDiscoveryComplianceGroup::GetComplianceGroupRules() const
{
    return m_complianceGroupRules;
}

void DspaDiscoveryComplianceGroup::SetComplianceGroupRules(const vector<DspaDiscoveryComplianceGroupRuleInfo>& _complianceGroupRules)
{
    m_complianceGroupRules = _complianceGroupRules;
    m_complianceGroupRulesHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroup::ComplianceGroupRulesHasBeenSet() const
{
    return m_complianceGroupRulesHasBeenSet;
}

uint64_t DspaDiscoveryComplianceGroup::GetLevelGroupId() const
{
    return m_levelGroupId;
}

void DspaDiscoveryComplianceGroup::SetLevelGroupId(const uint64_t& _levelGroupId)
{
    m_levelGroupId = _levelGroupId;
    m_levelGroupIdHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroup::LevelGroupIdHasBeenSet() const
{
    return m_levelGroupIdHasBeenSet;
}

