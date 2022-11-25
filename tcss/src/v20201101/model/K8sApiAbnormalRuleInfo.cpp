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

#include <tencentcloud/tcss/v20201101/model/K8sApiAbnormalRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

K8sApiAbnormalRuleInfo::K8sApiAbnormalRuleInfo() :
    m_ruleNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleInfoListHasBeenSet(false),
    m_effectClusterIDSetHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_effectAllClusterHasBeenSet(false),
    m_ruleIDHasBeenSet(false)
{
}

CoreInternalOutcome K8sApiAbnormalRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleInfo.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RuleInfoList") && !value["RuleInfoList"].IsNull())
    {
        if (!value["RuleInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleInfo.RuleInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            K8sApiAbnormalRuleScopeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleInfoList.push_back(item);
        }
        m_ruleInfoListHasBeenSet = true;
    }

    if (value.HasMember("EffectClusterIDSet") && !value["EffectClusterIDSet"].IsNull())
    {
        if (!value["EffectClusterIDSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleInfo.EffectClusterIDSet` is not array type"));

        const rapidjson::Value &tmpValue = value["EffectClusterIDSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_effectClusterIDSet.push_back((*itr).GetString());
        }
        m_effectClusterIDSetHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleInfo.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("EffectAllCluster") && !value["EffectAllCluster"].IsNull())
    {
        if (!value["EffectAllCluster"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleInfo.EffectAllCluster` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_effectAllCluster = value["EffectAllCluster"].GetBool();
        m_effectAllClusterHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalRuleInfo.RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(value["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void K8sApiAbnormalRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleInfoList.begin(); itr != m_ruleInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_effectClusterIDSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectClusterIDSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_effectClusterIDSet.begin(); itr != m_effectClusterIDSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_effectAllClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectAllCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectAllCluster, allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
    }

}


string K8sApiAbnormalRuleInfo::GetRuleName() const
{
    return m_ruleName;
}

void K8sApiAbnormalRuleInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool K8sApiAbnormalRuleInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

bool K8sApiAbnormalRuleInfo::GetStatus() const
{
    return m_status;
}

void K8sApiAbnormalRuleInfo::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool K8sApiAbnormalRuleInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<K8sApiAbnormalRuleScopeInfo> K8sApiAbnormalRuleInfo::GetRuleInfoList() const
{
    return m_ruleInfoList;
}

void K8sApiAbnormalRuleInfo::SetRuleInfoList(const vector<K8sApiAbnormalRuleScopeInfo>& _ruleInfoList)
{
    m_ruleInfoList = _ruleInfoList;
    m_ruleInfoListHasBeenSet = true;
}

bool K8sApiAbnormalRuleInfo::RuleInfoListHasBeenSet() const
{
    return m_ruleInfoListHasBeenSet;
}

vector<string> K8sApiAbnormalRuleInfo::GetEffectClusterIDSet() const
{
    return m_effectClusterIDSet;
}

void K8sApiAbnormalRuleInfo::SetEffectClusterIDSet(const vector<string>& _effectClusterIDSet)
{
    m_effectClusterIDSet = _effectClusterIDSet;
    m_effectClusterIDSetHasBeenSet = true;
}

bool K8sApiAbnormalRuleInfo::EffectClusterIDSetHasBeenSet() const
{
    return m_effectClusterIDSetHasBeenSet;
}

string K8sApiAbnormalRuleInfo::GetRuleType() const
{
    return m_ruleType;
}

void K8sApiAbnormalRuleInfo::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool K8sApiAbnormalRuleInfo::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

bool K8sApiAbnormalRuleInfo::GetEffectAllCluster() const
{
    return m_effectAllCluster;
}

void K8sApiAbnormalRuleInfo::SetEffectAllCluster(const bool& _effectAllCluster)
{
    m_effectAllCluster = _effectAllCluster;
    m_effectAllClusterHasBeenSet = true;
}

bool K8sApiAbnormalRuleInfo::EffectAllClusterHasBeenSet() const
{
    return m_effectAllClusterHasBeenSet;
}

string K8sApiAbnormalRuleInfo::GetRuleID() const
{
    return m_ruleID;
}

void K8sApiAbnormalRuleInfo::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool K8sApiAbnormalRuleInfo::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

