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

#include <tencentcloud/cwp/v20180228/model/VulIgnoreRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulIgnoreRule::VulIgnoreRule() :
    m_vulIDHasBeenSet(false),
    m_assetScopeTypeHasBeenSet(false),
    m_includeQuuidListHasBeenSet(false),
    m_excludeQuuidListHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_configHostCountHasBeenSet(false),
    m_affectedHostCountHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome VulIgnoreRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulID") && !value["VulID"].IsNull())
    {
        if (!value["VulID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRule.VulID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulID = value["VulID"].GetUint64();
        m_vulIDHasBeenSet = true;
    }

    if (value.HasMember("AssetScopeType") && !value["AssetScopeType"].IsNull())
    {
        if (!value["AssetScopeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRule.AssetScopeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetScopeType = value["AssetScopeType"].GetUint64();
        m_assetScopeTypeHasBeenSet = true;
    }

    if (value.HasMember("IncludeQuuidList") && !value["IncludeQuuidList"].IsNull())
    {
        if (!value["IncludeQuuidList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRule.IncludeQuuidList` is not array type"));

        const rapidjson::Value &tmpValue = value["IncludeQuuidList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_includeQuuidList.push_back((*itr).GetString());
        }
        m_includeQuuidListHasBeenSet = true;
    }

    if (value.HasMember("ExcludeQuuidList") && !value["ExcludeQuuidList"].IsNull())
    {
        if (!value["ExcludeQuuidList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRule.ExcludeQuuidList` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeQuuidList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeQuuidList.push_back((*itr).GetString());
        }
        m_excludeQuuidListHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRule.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ConfigHostCount") && !value["ConfigHostCount"].IsNull())
    {
        if (!value["ConfigHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRule.ConfigHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configHostCount = value["ConfigHostCount"].GetUint64();
        m_configHostCountHasBeenSet = true;
    }

    if (value.HasMember("AffectedHostCount") && !value["AffectedHostCount"].IsNull())
    {
        if (!value["AffectedHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRule.AffectedHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedHostCount = value["AffectedHostCount"].GetUint64();
        m_affectedHostCountHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRule.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRule.RuleID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetUint64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulIgnoreRule.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulIgnoreRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulID, allocator);
    }

    if (m_assetScopeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetScopeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetScopeType, allocator);
    }

    if (m_includeQuuidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeQuuidList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeQuuidList.begin(); itr != m_includeQuuidList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeQuuidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeQuuidList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeQuuidList.begin(); itr != m_excludeQuuidList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_configHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configHostCount, allocator);
    }

    if (m_affectedHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedHostCount, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t VulIgnoreRule::GetVulID() const
{
    return m_vulID;
}

void VulIgnoreRule::SetVulID(const uint64_t& _vulID)
{
    m_vulID = _vulID;
    m_vulIDHasBeenSet = true;
}

bool VulIgnoreRule::VulIDHasBeenSet() const
{
    return m_vulIDHasBeenSet;
}

uint64_t VulIgnoreRule::GetAssetScopeType() const
{
    return m_assetScopeType;
}

void VulIgnoreRule::SetAssetScopeType(const uint64_t& _assetScopeType)
{
    m_assetScopeType = _assetScopeType;
    m_assetScopeTypeHasBeenSet = true;
}

bool VulIgnoreRule::AssetScopeTypeHasBeenSet() const
{
    return m_assetScopeTypeHasBeenSet;
}

vector<string> VulIgnoreRule::GetIncludeQuuidList() const
{
    return m_includeQuuidList;
}

void VulIgnoreRule::SetIncludeQuuidList(const vector<string>& _includeQuuidList)
{
    m_includeQuuidList = _includeQuuidList;
    m_includeQuuidListHasBeenSet = true;
}

bool VulIgnoreRule::IncludeQuuidListHasBeenSet() const
{
    return m_includeQuuidListHasBeenSet;
}

vector<string> VulIgnoreRule::GetExcludeQuuidList() const
{
    return m_excludeQuuidList;
}

void VulIgnoreRule::SetExcludeQuuidList(const vector<string>& _excludeQuuidList)
{
    m_excludeQuuidList = _excludeQuuidList;
    m_excludeQuuidListHasBeenSet = true;
}

bool VulIgnoreRule::ExcludeQuuidListHasBeenSet() const
{
    return m_excludeQuuidListHasBeenSet;
}

string VulIgnoreRule::GetRemark() const
{
    return m_remark;
}

void VulIgnoreRule::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool VulIgnoreRule::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t VulIgnoreRule::GetConfigHostCount() const
{
    return m_configHostCount;
}

void VulIgnoreRule::SetConfigHostCount(const uint64_t& _configHostCount)
{
    m_configHostCount = _configHostCount;
    m_configHostCountHasBeenSet = true;
}

bool VulIgnoreRule::ConfigHostCountHasBeenSet() const
{
    return m_configHostCountHasBeenSet;
}

uint64_t VulIgnoreRule::GetAffectedHostCount() const
{
    return m_affectedHostCount;
}

void VulIgnoreRule::SetAffectedHostCount(const uint64_t& _affectedHostCount)
{
    m_affectedHostCount = _affectedHostCount;
    m_affectedHostCountHasBeenSet = true;
}

bool VulIgnoreRule::AffectedHostCountHasBeenSet() const
{
    return m_affectedHostCountHasBeenSet;
}

string VulIgnoreRule::GetVulName() const
{
    return m_vulName;
}

void VulIgnoreRule::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulIgnoreRule::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

uint64_t VulIgnoreRule::GetRuleID() const
{
    return m_ruleID;
}

void VulIgnoreRule::SetRuleID(const uint64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool VulIgnoreRule::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string VulIgnoreRule::GetModifyTime() const
{
    return m_modifyTime;
}

void VulIgnoreRule::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool VulIgnoreRule::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

