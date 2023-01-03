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

#include <tencentcloud/cynosdb/v20190107/model/InstanceAuditRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

InstanceAuditRule::InstanceAuditRule() :
    m_instanceIdHasBeenSet(false),
    m_auditRuleHasBeenSet(false),
    m_auditRuleFiltersHasBeenSet(false)
{
}

CoreInternalOutcome InstanceAuditRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditRule.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AuditRule") && !value["AuditRule"].IsNull())
    {
        if (!value["AuditRule"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAuditRule.AuditRule` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_auditRule = value["AuditRule"].GetBool();
        m_auditRuleHasBeenSet = true;
    }

    if (value.HasMember("AuditRuleFilters") && !value["AuditRuleFilters"].IsNull())
    {
        if (!value["AuditRuleFilters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceAuditRule.AuditRuleFilters` is not array type"));

        const rapidjson::Value &tmpValue = value["AuditRuleFilters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuditRuleFilters item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_auditRuleFilters.push_back(item);
        }
        m_auditRuleFiltersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceAuditRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_auditRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditRule, allocator);
    }

    if (m_auditRuleFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditRuleFilters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_auditRuleFilters.begin(); itr != m_auditRuleFilters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InstanceAuditRule::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceAuditRule::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceAuditRule::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool InstanceAuditRule::GetAuditRule() const
{
    return m_auditRule;
}

void InstanceAuditRule::SetAuditRule(const bool& _auditRule)
{
    m_auditRule = _auditRule;
    m_auditRuleHasBeenSet = true;
}

bool InstanceAuditRule::AuditRuleHasBeenSet() const
{
    return m_auditRuleHasBeenSet;
}

vector<AuditRuleFilters> InstanceAuditRule::GetAuditRuleFilters() const
{
    return m_auditRuleFilters;
}

void InstanceAuditRule::SetAuditRuleFilters(const vector<AuditRuleFilters>& _auditRuleFilters)
{
    m_auditRuleFilters = _auditRuleFilters;
    m_auditRuleFiltersHasBeenSet = true;
}

bool InstanceAuditRule::AuditRuleFiltersHasBeenSet() const
{
    return m_auditRuleFiltersHasBeenSet;
}

