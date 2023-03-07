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

#include <tencentcloud/cwp/v20180228/model/BaselineItemInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineItemInfo::BaselineItemInfo() :
    m_itemIdHasBeenSet(false),
    m_itemNameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_itemDescHasBeenSet(false),
    m_fixMethodHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_sysRuleIdHasBeenSet(false),
    m_relatedCustomRuleInfoHasBeenSet(false)
{
}

CoreInternalOutcome BaselineItemInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemInfo.ItemId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = value["ItemId"].GetInt64();
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("ItemName") && !value["ItemName"].IsNull())
    {
        if (!value["ItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemInfo.ItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemName = string(value["ItemName"].GetString());
        m_itemNameHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemInfo.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("ItemDesc") && !value["ItemDesc"].IsNull())
    {
        if (!value["ItemDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemInfo.ItemDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemDesc = string(value["ItemDesc"].GetString());
        m_itemDescHasBeenSet = true;
    }

    if (value.HasMember("FixMethod") && !value["FixMethod"].IsNull())
    {
        if (!value["FixMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemInfo.FixMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixMethod = string(value["FixMethod"].GetString());
        m_fixMethodHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemInfo.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("SysRuleId") && !value["SysRuleId"].IsNull())
    {
        if (!value["SysRuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemInfo.SysRuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sysRuleId = value["SysRuleId"].GetInt64();
        m_sysRuleIdHasBeenSet = true;
    }

    if (value.HasMember("RelatedCustomRuleInfo") && !value["RelatedCustomRuleInfo"].IsNull())
    {
        if (!value["RelatedCustomRuleInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineItemInfo.RelatedCustomRuleInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedCustomRuleInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineCustomRuleIdName item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relatedCustomRuleInfo.push_back(item);
        }
        m_relatedCustomRuleInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineItemInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemId, allocator);
    }

    if (m_itemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_itemDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_fixMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_sysRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysRuleId, allocator);
    }

    if (m_relatedCustomRuleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedCustomRuleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relatedCustomRuleInfo.begin(); itr != m_relatedCustomRuleInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t BaselineItemInfo::GetItemId() const
{
    return m_itemId;
}

void BaselineItemInfo::SetItemId(const int64_t& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool BaselineItemInfo::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string BaselineItemInfo::GetItemName() const
{
    return m_itemName;
}

void BaselineItemInfo::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool BaselineItemInfo::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

uint64_t BaselineItemInfo::GetRuleId() const
{
    return m_ruleId;
}

void BaselineItemInfo::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool BaselineItemInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string BaselineItemInfo::GetItemDesc() const
{
    return m_itemDesc;
}

void BaselineItemInfo::SetItemDesc(const string& _itemDesc)
{
    m_itemDesc = _itemDesc;
    m_itemDescHasBeenSet = true;
}

bool BaselineItemInfo::ItemDescHasBeenSet() const
{
    return m_itemDescHasBeenSet;
}

string BaselineItemInfo::GetFixMethod() const
{
    return m_fixMethod;
}

void BaselineItemInfo::SetFixMethod(const string& _fixMethod)
{
    m_fixMethod = _fixMethod;
    m_fixMethodHasBeenSet = true;
}

bool BaselineItemInfo::FixMethodHasBeenSet() const
{
    return m_fixMethodHasBeenSet;
}

string BaselineItemInfo::GetRuleName() const
{
    return m_ruleName;
}

void BaselineItemInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool BaselineItemInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t BaselineItemInfo::GetLevel() const
{
    return m_level;
}

void BaselineItemInfo::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BaselineItemInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t BaselineItemInfo::GetSysRuleId() const
{
    return m_sysRuleId;
}

void BaselineItemInfo::SetSysRuleId(const int64_t& _sysRuleId)
{
    m_sysRuleId = _sysRuleId;
    m_sysRuleIdHasBeenSet = true;
}

bool BaselineItemInfo::SysRuleIdHasBeenSet() const
{
    return m_sysRuleIdHasBeenSet;
}

vector<BaselineCustomRuleIdName> BaselineItemInfo::GetRelatedCustomRuleInfo() const
{
    return m_relatedCustomRuleInfo;
}

void BaselineItemInfo::SetRelatedCustomRuleInfo(const vector<BaselineCustomRuleIdName>& _relatedCustomRuleInfo)
{
    m_relatedCustomRuleInfo = _relatedCustomRuleInfo;
    m_relatedCustomRuleInfoHasBeenSet = true;
}

bool BaselineItemInfo::RelatedCustomRuleInfoHasBeenSet() const
{
    return m_relatedCustomRuleInfoHasBeenSet;
}

