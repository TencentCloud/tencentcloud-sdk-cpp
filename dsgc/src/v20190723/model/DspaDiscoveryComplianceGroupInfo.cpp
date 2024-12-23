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

#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryComplianceGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDiscoveryComplianceGroupInfo::DspaDiscoveryComplianceGroupInfo() :
    m_complianceGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_complianceGroupTypeHasBeenSet(false),
    m_complianceGroupRulesHasBeenSet(false),
    m_levelGroupIdHasBeenSet(false),
    m_disabledHasBeenSet(false),
    m_isAliasHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome DspaDiscoveryComplianceGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComplianceGroupId") && !value["ComplianceGroupId"].IsNull())
    {
        if (!value["ComplianceGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupInfo.ComplianceGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_complianceGroupId = value["ComplianceGroupId"].GetInt64();
        m_complianceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ComplianceGroupType") && !value["ComplianceGroupType"].IsNull())
    {
        if (!value["ComplianceGroupType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupInfo.ComplianceGroupType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_complianceGroupType = value["ComplianceGroupType"].GetInt64();
        m_complianceGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("ComplianceGroupRules") && !value["ComplianceGroupRules"].IsNull())
    {
        if (!value["ComplianceGroupRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupInfo.ComplianceGroupRules` is not array type"));

        const rapidjson::Value &tmpValue = value["ComplianceGroupRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspaDiscoveryComplianceGroupRule item;
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
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupInfo.LevelGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelGroupId = value["LevelGroupId"].GetUint64();
        m_levelGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Disabled") && !value["Disabled"].IsNull())
    {
        if (!value["Disabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupInfo.Disabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disabled = value["Disabled"].GetBool();
        m_disabledHasBeenSet = true;
    }

    if (value.HasMember("IsAlias") && !value["IsAlias"].IsNull())
    {
        if (!value["IsAlias"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupInfo.IsAlias` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAlias = value["IsAlias"].GetBool();
        m_isAliasHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryComplianceGroupInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDiscoveryComplianceGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_disabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disabled, allocator);
    }

    if (m_isAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAlias, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t DspaDiscoveryComplianceGroupInfo::GetComplianceGroupId() const
{
    return m_complianceGroupId;
}

void DspaDiscoveryComplianceGroupInfo::SetComplianceGroupId(const int64_t& _complianceGroupId)
{
    m_complianceGroupId = _complianceGroupId;
    m_complianceGroupIdHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupInfo::ComplianceGroupIdHasBeenSet() const
{
    return m_complianceGroupIdHasBeenSet;
}

string DspaDiscoveryComplianceGroupInfo::GetName() const
{
    return m_name;
}

void DspaDiscoveryComplianceGroupInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DspaDiscoveryComplianceGroupInfo::GetDescription() const
{
    return m_description;
}

void DspaDiscoveryComplianceGroupInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DspaDiscoveryComplianceGroupInfo::GetComplianceGroupType() const
{
    return m_complianceGroupType;
}

void DspaDiscoveryComplianceGroupInfo::SetComplianceGroupType(const int64_t& _complianceGroupType)
{
    m_complianceGroupType = _complianceGroupType;
    m_complianceGroupTypeHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupInfo::ComplianceGroupTypeHasBeenSet() const
{
    return m_complianceGroupTypeHasBeenSet;
}

vector<DspaDiscoveryComplianceGroupRule> DspaDiscoveryComplianceGroupInfo::GetComplianceGroupRules() const
{
    return m_complianceGroupRules;
}

void DspaDiscoveryComplianceGroupInfo::SetComplianceGroupRules(const vector<DspaDiscoveryComplianceGroupRule>& _complianceGroupRules)
{
    m_complianceGroupRules = _complianceGroupRules;
    m_complianceGroupRulesHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupInfo::ComplianceGroupRulesHasBeenSet() const
{
    return m_complianceGroupRulesHasBeenSet;
}

uint64_t DspaDiscoveryComplianceGroupInfo::GetLevelGroupId() const
{
    return m_levelGroupId;
}

void DspaDiscoveryComplianceGroupInfo::SetLevelGroupId(const uint64_t& _levelGroupId)
{
    m_levelGroupId = _levelGroupId;
    m_levelGroupIdHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupInfo::LevelGroupIdHasBeenSet() const
{
    return m_levelGroupIdHasBeenSet;
}

bool DspaDiscoveryComplianceGroupInfo::GetDisabled() const
{
    return m_disabled;
}

void DspaDiscoveryComplianceGroupInfo::SetDisabled(const bool& _disabled)
{
    m_disabled = _disabled;
    m_disabledHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupInfo::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}

bool DspaDiscoveryComplianceGroupInfo::GetIsAlias() const
{
    return m_isAlias;
}

void DspaDiscoveryComplianceGroupInfo::SetIsAlias(const bool& _isAlias)
{
    m_isAlias = _isAlias;
    m_isAliasHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupInfo::IsAliasHasBeenSet() const
{
    return m_isAliasHasBeenSet;
}

int64_t DspaDiscoveryComplianceGroupInfo::GetStatus() const
{
    return m_status;
}

void DspaDiscoveryComplianceGroupInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DspaDiscoveryComplianceGroupInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void DspaDiscoveryComplianceGroupInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool DspaDiscoveryComplianceGroupInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

