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

#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayCanaryRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CloudNativeAPIGatewayCanaryRule::CloudNativeAPIGatewayCanaryRule() :
    m_priorityHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_conditionListHasBeenSet(false),
    m_balancedServiceListHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayCanaryRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayCanaryRule.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayCanaryRule.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("ConditionList") && !value["ConditionList"].IsNull())
    {
        if (!value["ConditionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayCanaryRule.ConditionList` is not array type"));

        const rapidjson::Value &tmpValue = value["ConditionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudNativeAPIGatewayCanaryRuleCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conditionList.push_back(item);
        }
        m_conditionListHasBeenSet = true;
    }

    if (value.HasMember("BalancedServiceList") && !value["BalancedServiceList"].IsNull())
    {
        if (!value["BalancedServiceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayCanaryRule.BalancedServiceList` is not array type"));

        const rapidjson::Value &tmpValue = value["BalancedServiceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudNativeAPIGatewayBalancedService item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_balancedServiceList.push_back(item);
        }
        m_balancedServiceListHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayCanaryRule.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayCanaryRule.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayCanaryRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_conditionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditionList.begin(); itr != m_conditionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_balancedServiceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BalancedServiceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_balancedServiceList.begin(); itr != m_balancedServiceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

}


int64_t CloudNativeAPIGatewayCanaryRule::GetPriority() const
{
    return m_priority;
}

void CloudNativeAPIGatewayCanaryRule::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CloudNativeAPIGatewayCanaryRule::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

bool CloudNativeAPIGatewayCanaryRule::GetEnabled() const
{
    return m_enabled;
}

void CloudNativeAPIGatewayCanaryRule::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CloudNativeAPIGatewayCanaryRule::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<CloudNativeAPIGatewayCanaryRuleCondition> CloudNativeAPIGatewayCanaryRule::GetConditionList() const
{
    return m_conditionList;
}

void CloudNativeAPIGatewayCanaryRule::SetConditionList(const vector<CloudNativeAPIGatewayCanaryRuleCondition>& _conditionList)
{
    m_conditionList = _conditionList;
    m_conditionListHasBeenSet = true;
}

bool CloudNativeAPIGatewayCanaryRule::ConditionListHasBeenSet() const
{
    return m_conditionListHasBeenSet;
}

vector<CloudNativeAPIGatewayBalancedService> CloudNativeAPIGatewayCanaryRule::GetBalancedServiceList() const
{
    return m_balancedServiceList;
}

void CloudNativeAPIGatewayCanaryRule::SetBalancedServiceList(const vector<CloudNativeAPIGatewayBalancedService>& _balancedServiceList)
{
    m_balancedServiceList = _balancedServiceList;
    m_balancedServiceListHasBeenSet = true;
}

bool CloudNativeAPIGatewayCanaryRule::BalancedServiceListHasBeenSet() const
{
    return m_balancedServiceListHasBeenSet;
}

string CloudNativeAPIGatewayCanaryRule::GetServiceId() const
{
    return m_serviceId;
}

void CloudNativeAPIGatewayCanaryRule::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayCanaryRule::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CloudNativeAPIGatewayCanaryRule::GetServiceName() const
{
    return m_serviceName;
}

void CloudNativeAPIGatewayCanaryRule::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CloudNativeAPIGatewayCanaryRule::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

