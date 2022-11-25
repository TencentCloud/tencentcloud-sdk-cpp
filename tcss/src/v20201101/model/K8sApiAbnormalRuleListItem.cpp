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

#include <tencentcloud/tcss/v20201101/model/K8sApiAbnormalRuleListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

K8sApiAbnormalRuleListItem::K8sApiAbnormalRuleListItem() :
    m_ruleIDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_effectClusterCountHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_oprUinHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome K8sApiAbnormalRuleListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleListItem.RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(value["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleListItem.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleListItem.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("EffectClusterCount") && !value["EffectClusterCount"].IsNull())
    {
        if (!value["EffectClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleListItem.EffectClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectClusterCount = value["EffectClusterCount"].GetUint64();
        m_effectClusterCountHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleListItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("OprUin") && !value["OprUin"].IsNull())
    {
        if (!value["OprUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleListItem.OprUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oprUin = string(value["OprUin"].GetString());
        m_oprUinHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleListItem.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void K8sApiAbnormalRuleListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_effectClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectClusterCount, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_oprUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OprUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oprUin.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string K8sApiAbnormalRuleListItem::GetRuleID() const
{
    return m_ruleID;
}

void K8sApiAbnormalRuleListItem::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool K8sApiAbnormalRuleListItem::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string K8sApiAbnormalRuleListItem::GetRuleName() const
{
    return m_ruleName;
}

void K8sApiAbnormalRuleListItem::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool K8sApiAbnormalRuleListItem::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string K8sApiAbnormalRuleListItem::GetRuleType() const
{
    return m_ruleType;
}

void K8sApiAbnormalRuleListItem::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool K8sApiAbnormalRuleListItem::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

uint64_t K8sApiAbnormalRuleListItem::GetEffectClusterCount() const
{
    return m_effectClusterCount;
}

void K8sApiAbnormalRuleListItem::SetEffectClusterCount(const uint64_t& _effectClusterCount)
{
    m_effectClusterCount = _effectClusterCount;
    m_effectClusterCountHasBeenSet = true;
}

bool K8sApiAbnormalRuleListItem::EffectClusterCountHasBeenSet() const
{
    return m_effectClusterCountHasBeenSet;
}

string K8sApiAbnormalRuleListItem::GetUpdateTime() const
{
    return m_updateTime;
}

void K8sApiAbnormalRuleListItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool K8sApiAbnormalRuleListItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string K8sApiAbnormalRuleListItem::GetOprUin() const
{
    return m_oprUin;
}

void K8sApiAbnormalRuleListItem::SetOprUin(const string& _oprUin)
{
    m_oprUin = _oprUin;
    m_oprUinHasBeenSet = true;
}

bool K8sApiAbnormalRuleListItem::OprUinHasBeenSet() const
{
    return m_oprUinHasBeenSet;
}

bool K8sApiAbnormalRuleListItem::GetStatus() const
{
    return m_status;
}

void K8sApiAbnormalRuleListItem::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool K8sApiAbnormalRuleListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

