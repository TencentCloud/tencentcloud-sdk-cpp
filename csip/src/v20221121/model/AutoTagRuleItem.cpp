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

#include <tencentcloud/csip/v20221121/model/AutoTagRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AutoTagRuleItem::AutoTagRuleItem() :
    m_ruleIDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_assetTypesHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_openStatusesHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AutoTagRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoTagRuleItem.RuleID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetUint64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoTagRuleItem.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoTagRuleItem.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoTagRuleItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoTagRuleItem.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("AssetTypes") && !value["AssetTypes"].IsNull())
    {
        if (!value["AssetTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoTagRuleItem.AssetTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetTypes.push_back((*itr).GetString());
        }
        m_assetTypesHasBeenSet = true;
    }

    if (value.HasMember("Ports") && !value["Ports"].IsNull())
    {
        if (!value["Ports"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoTagRuleItem.Ports` is not array type"));

        const rapidjson::Value &tmpValue = value["Ports"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ports.push_back((*itr).GetString());
        }
        m_portsHasBeenSet = true;
    }

    if (value.HasMember("OpenStatuses") && !value["OpenStatuses"].IsNull())
    {
        if (!value["OpenStatuses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoTagRuleItem.OpenStatuses` is not array type"));

        const rapidjson::Value &tmpValue = value["OpenStatuses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_openStatuses.push_back((*itr).GetString());
        }
        m_openStatusesHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoTagRuleItem.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoTagRuleItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoTagRuleItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoTagRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_assetTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetTypes.begin(); itr != m_assetTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_openStatusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenStatuses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_openStatuses.begin(); itr != m_openStatuses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AutoTagRuleItem::GetRuleID() const
{
    return m_ruleID;
}

void AutoTagRuleItem::SetRuleID(const uint64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool AutoTagRuleItem::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string AutoTagRuleItem::GetRuleName() const
{
    return m_ruleName;
}

void AutoTagRuleItem::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool AutoTagRuleItem::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string AutoTagRuleItem::GetTag() const
{
    return m_tag;
}

void AutoTagRuleItem::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AutoTagRuleItem::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AutoTagRuleItem::GetDescription() const
{
    return m_description;
}

void AutoTagRuleItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AutoTagRuleItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool AutoTagRuleItem::GetEnable() const
{
    return m_enable;
}

void AutoTagRuleItem::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool AutoTagRuleItem::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

vector<string> AutoTagRuleItem::GetAssetTypes() const
{
    return m_assetTypes;
}

void AutoTagRuleItem::SetAssetTypes(const vector<string>& _assetTypes)
{
    m_assetTypes = _assetTypes;
    m_assetTypesHasBeenSet = true;
}

bool AutoTagRuleItem::AssetTypesHasBeenSet() const
{
    return m_assetTypesHasBeenSet;
}

vector<string> AutoTagRuleItem::GetPorts() const
{
    return m_ports;
}

void AutoTagRuleItem::SetPorts(const vector<string>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool AutoTagRuleItem::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

vector<string> AutoTagRuleItem::GetOpenStatuses() const
{
    return m_openStatuses;
}

void AutoTagRuleItem::SetOpenStatuses(const vector<string>& _openStatuses)
{
    m_openStatuses = _openStatuses;
    m_openStatusesHasBeenSet = true;
}

bool AutoTagRuleItem::OpenStatusesHasBeenSet() const
{
    return m_openStatusesHasBeenSet;
}

uint64_t AutoTagRuleItem::GetPriority() const
{
    return m_priority;
}

void AutoTagRuleItem::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool AutoTagRuleItem::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string AutoTagRuleItem::GetCreateTime() const
{
    return m_createTime;
}

void AutoTagRuleItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AutoTagRuleItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AutoTagRuleItem::GetUpdateTime() const
{
    return m_updateTime;
}

void AutoTagRuleItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AutoTagRuleItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

