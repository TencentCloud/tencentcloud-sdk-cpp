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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxLLMAuditRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxLLMAuditRuleInfo::TrafficSandboxLLMAuditRuleInfo() :
    m_iDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_belongAssetTypeHasBeenSet(false),
    m_systemRuleRefsHasBeenSet(false),
    m_effectScopeHasBeenSet(false),
    m_inactiveAssetsHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_ruleActionHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxLLMAuditRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditRuleInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditRuleInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditRuleInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditRuleInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BelongAssetType") && !value["BelongAssetType"].IsNull())
    {
        if (!value["BelongAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditRuleInfo.BelongAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_belongAssetType = string(value["BelongAssetType"].GetString());
        m_belongAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("SystemRuleRefs") && !value["SystemRuleRefs"].IsNull())
    {
        if (!value["SystemRuleRefs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditRuleInfo.SystemRuleRefs` is not array type"));

        const rapidjson::Value &tmpValue = value["SystemRuleRefs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrafficSandboxLLMAuditRuleRef item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_systemRuleRefs.push_back(item);
        }
        m_systemRuleRefsHasBeenSet = true;
    }

    if (value.HasMember("EffectScope") && !value["EffectScope"].IsNull())
    {
        if (!value["EffectScope"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditRuleInfo.EffectScope` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_effectScope.Deserialize(value["EffectScope"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_effectScopeHasBeenSet = true;
    }

    if (value.HasMember("InactiveAssets") && !value["InactiveAssets"].IsNull())
    {
        if (!value["InactiveAssets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditRuleInfo.InactiveAssets` is not array type"));

        const rapidjson::Value &tmpValue = value["InactiveAssets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrafficSandboxInactiveAsset item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inactiveAssets.push_back(item);
        }
        m_inactiveAssetsHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditRuleInfo.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditRuleInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxLLMAuditRuleInfo.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxLLMAuditRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_belongAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_belongAssetType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemRuleRefsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemRuleRefs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_systemRuleRefs.begin(); itr != m_systemRuleRefs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_effectScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_effectScope.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inactiveAssetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InactiveAssets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inactiveAssets.begin(); itr != m_inactiveAssets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

}


int64_t TrafficSandboxLLMAuditRuleInfo::GetID() const
{
    return m_iD;
}

void TrafficSandboxLLMAuditRuleInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool TrafficSandboxLLMAuditRuleInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string TrafficSandboxLLMAuditRuleInfo::GetRuleName() const
{
    return m_ruleName;
}

void TrafficSandboxLLMAuditRuleInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool TrafficSandboxLLMAuditRuleInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string TrafficSandboxLLMAuditRuleInfo::GetLevel() const
{
    return m_level;
}

void TrafficSandboxLLMAuditRuleInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool TrafficSandboxLLMAuditRuleInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string TrafficSandboxLLMAuditRuleInfo::GetStatus() const
{
    return m_status;
}

void TrafficSandboxLLMAuditRuleInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TrafficSandboxLLMAuditRuleInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TrafficSandboxLLMAuditRuleInfo::GetBelongAssetType() const
{
    return m_belongAssetType;
}

void TrafficSandboxLLMAuditRuleInfo::SetBelongAssetType(const string& _belongAssetType)
{
    m_belongAssetType = _belongAssetType;
    m_belongAssetTypeHasBeenSet = true;
}

bool TrafficSandboxLLMAuditRuleInfo::BelongAssetTypeHasBeenSet() const
{
    return m_belongAssetTypeHasBeenSet;
}

vector<TrafficSandboxLLMAuditRuleRef> TrafficSandboxLLMAuditRuleInfo::GetSystemRuleRefs() const
{
    return m_systemRuleRefs;
}

void TrafficSandboxLLMAuditRuleInfo::SetSystemRuleRefs(const vector<TrafficSandboxLLMAuditRuleRef>& _systemRuleRefs)
{
    m_systemRuleRefs = _systemRuleRefs;
    m_systemRuleRefsHasBeenSet = true;
}

bool TrafficSandboxLLMAuditRuleInfo::SystemRuleRefsHasBeenSet() const
{
    return m_systemRuleRefsHasBeenSet;
}

TrafficSandboxEffectScope TrafficSandboxLLMAuditRuleInfo::GetEffectScope() const
{
    return m_effectScope;
}

void TrafficSandboxLLMAuditRuleInfo::SetEffectScope(const TrafficSandboxEffectScope& _effectScope)
{
    m_effectScope = _effectScope;
    m_effectScopeHasBeenSet = true;
}

bool TrafficSandboxLLMAuditRuleInfo::EffectScopeHasBeenSet() const
{
    return m_effectScopeHasBeenSet;
}

vector<TrafficSandboxInactiveAsset> TrafficSandboxLLMAuditRuleInfo::GetInactiveAssets() const
{
    return m_inactiveAssets;
}

void TrafficSandboxLLMAuditRuleInfo::SetInactiveAssets(const vector<TrafficSandboxInactiveAsset>& _inactiveAssets)
{
    m_inactiveAssets = _inactiveAssets;
    m_inactiveAssetsHasBeenSet = true;
}

bool TrafficSandboxLLMAuditRuleInfo::InactiveAssetsHasBeenSet() const
{
    return m_inactiveAssetsHasBeenSet;
}

string TrafficSandboxLLMAuditRuleInfo::GetInsertTime() const
{
    return m_insertTime;
}

void TrafficSandboxLLMAuditRuleInfo::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool TrafficSandboxLLMAuditRuleInfo::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string TrafficSandboxLLMAuditRuleInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void TrafficSandboxLLMAuditRuleInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TrafficSandboxLLMAuditRuleInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TrafficSandboxLLMAuditRuleInfo::GetRuleAction() const
{
    return m_ruleAction;
}

void TrafficSandboxLLMAuditRuleInfo::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool TrafficSandboxLLMAuditRuleInfo::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

