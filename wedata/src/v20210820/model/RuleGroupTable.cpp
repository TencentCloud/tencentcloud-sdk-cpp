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

#include <tencentcloud/wedata/v20210820/model/RuleGroupTable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleGroupTable::RuleGroupTable() :
    m_tableInfoHasBeenSet(false),
    m_ruleGroupsHasBeenSet(false),
    m_subscriptionsHasBeenSet(false)
{
}

CoreInternalOutcome RuleGroupTable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableInfo") && !value["TableInfo"].IsNull())
    {
        if (!value["TableInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupTable.TableInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tableInfo.Deserialize(value["TableInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tableInfoHasBeenSet = true;
    }

    if (value.HasMember("RuleGroups") && !value["RuleGroups"].IsNull())
    {
        if (!value["RuleGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleGroupTable.RuleGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleGroupSchedulerInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleGroups.push_back(item);
        }
        m_ruleGroupsHasBeenSet = true;
    }

    if (value.HasMember("Subscriptions") && !value["Subscriptions"].IsNull())
    {
        if (!value["Subscriptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleGroupTable.Subscriptions` is not array type"));

        const rapidjson::Value &tmpValue = value["Subscriptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleGroupSubscribe item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subscriptions.push_back(item);
        }
        m_subscriptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleGroupTable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tableInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ruleGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleGroups.begin(); itr != m_ruleGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subscriptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subscriptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subscriptions.begin(); itr != m_subscriptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


RuleGroupTableInnerInfo RuleGroupTable::GetTableInfo() const
{
    return m_tableInfo;
}

void RuleGroupTable::SetTableInfo(const RuleGroupTableInnerInfo& _tableInfo)
{
    m_tableInfo = _tableInfo;
    m_tableInfoHasBeenSet = true;
}

bool RuleGroupTable::TableInfoHasBeenSet() const
{
    return m_tableInfoHasBeenSet;
}

vector<RuleGroupSchedulerInfo> RuleGroupTable::GetRuleGroups() const
{
    return m_ruleGroups;
}

void RuleGroupTable::SetRuleGroups(const vector<RuleGroupSchedulerInfo>& _ruleGroups)
{
    m_ruleGroups = _ruleGroups;
    m_ruleGroupsHasBeenSet = true;
}

bool RuleGroupTable::RuleGroupsHasBeenSet() const
{
    return m_ruleGroupsHasBeenSet;
}

vector<RuleGroupSubscribe> RuleGroupTable::GetSubscriptions() const
{
    return m_subscriptions;
}

void RuleGroupTable::SetSubscriptions(const vector<RuleGroupSubscribe>& _subscriptions)
{
    m_subscriptions = _subscriptions;
    m_subscriptionsHasBeenSet = true;
}

bool RuleGroupTable::SubscriptionsHasBeenSet() const
{
    return m_subscriptionsHasBeenSet;
}

