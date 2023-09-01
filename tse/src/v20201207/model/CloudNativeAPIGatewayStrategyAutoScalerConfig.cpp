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

#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategyAutoScalerConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CloudNativeAPIGatewayStrategyAutoScalerConfig::CloudNativeAPIGatewayStrategyAutoScalerConfig() :
    m_maxReplicasHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_autoScalerIdHasBeenSet(false),
    m_behaviorHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayStrategyAutoScalerConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxReplicas") && !value["MaxReplicas"].IsNull())
    {
        if (!value["MaxReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyAutoScalerConfig.MaxReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplicas = value["MaxReplicas"].GetInt64();
        m_maxReplicasHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyAutoScalerConfig.Metrics` is not array type"));

        const rapidjson::Value &tmpValue = value["Metrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudNativeAPIGatewayStrategyAutoScalerConfigMetric item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metrics.push_back(item);
        }
        m_metricsHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyAutoScalerConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyAutoScalerConfig.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyAutoScalerConfig.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyAutoScalerConfig.StrategyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = string(value["StrategyId"].GetString());
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("AutoScalerId") && !value["AutoScalerId"].IsNull())
    {
        if (!value["AutoScalerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyAutoScalerConfig.AutoScalerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalerId = string(value["AutoScalerId"].GetString());
        m_autoScalerIdHasBeenSet = true;
    }

    if (value.HasMember("Behavior") && !value["Behavior"].IsNull())
    {
        if (!value["Behavior"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyAutoScalerConfig.Behavior` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_behavior.Deserialize(value["Behavior"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_behaviorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayStrategyAutoScalerConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplicas, allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metrics.begin(); itr != m_metrics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalerId.c_str(), allocator).Move(), allocator);
    }

    if (m_behaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Behavior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_behavior.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t CloudNativeAPIGatewayStrategyAutoScalerConfig::GetMaxReplicas() const
{
    return m_maxReplicas;
}

void CloudNativeAPIGatewayStrategyAutoScalerConfig::SetMaxReplicas(const int64_t& _maxReplicas)
{
    m_maxReplicas = _maxReplicas;
    m_maxReplicasHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyAutoScalerConfig::MaxReplicasHasBeenSet() const
{
    return m_maxReplicasHasBeenSet;
}

vector<CloudNativeAPIGatewayStrategyAutoScalerConfigMetric> CloudNativeAPIGatewayStrategyAutoScalerConfig::GetMetrics() const
{
    return m_metrics;
}

void CloudNativeAPIGatewayStrategyAutoScalerConfig::SetMetrics(const vector<CloudNativeAPIGatewayStrategyAutoScalerConfigMetric>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyAutoScalerConfig::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

bool CloudNativeAPIGatewayStrategyAutoScalerConfig::GetEnabled() const
{
    return m_enabled;
}

void CloudNativeAPIGatewayStrategyAutoScalerConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyAutoScalerConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string CloudNativeAPIGatewayStrategyAutoScalerConfig::GetCreateTime() const
{
    return m_createTime;
}

void CloudNativeAPIGatewayStrategyAutoScalerConfig::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyAutoScalerConfig::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudNativeAPIGatewayStrategyAutoScalerConfig::GetModifyTime() const
{
    return m_modifyTime;
}

void CloudNativeAPIGatewayStrategyAutoScalerConfig::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyAutoScalerConfig::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string CloudNativeAPIGatewayStrategyAutoScalerConfig::GetStrategyId() const
{
    return m_strategyId;
}

void CloudNativeAPIGatewayStrategyAutoScalerConfig::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyAutoScalerConfig::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string CloudNativeAPIGatewayStrategyAutoScalerConfig::GetAutoScalerId() const
{
    return m_autoScalerId;
}

void CloudNativeAPIGatewayStrategyAutoScalerConfig::SetAutoScalerId(const string& _autoScalerId)
{
    m_autoScalerId = _autoScalerId;
    m_autoScalerIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyAutoScalerConfig::AutoScalerIdHasBeenSet() const
{
    return m_autoScalerIdHasBeenSet;
}

AutoScalerBehavior CloudNativeAPIGatewayStrategyAutoScalerConfig::GetBehavior() const
{
    return m_behavior;
}

void CloudNativeAPIGatewayStrategyAutoScalerConfig::SetBehavior(const AutoScalerBehavior& _behavior)
{
    m_behavior = _behavior;
    m_behaviorHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyAutoScalerConfig::BehaviorHasBeenSet() const
{
    return m_behaviorHasBeenSet;
}

