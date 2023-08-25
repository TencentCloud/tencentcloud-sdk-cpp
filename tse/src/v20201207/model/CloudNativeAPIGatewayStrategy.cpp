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

#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CloudNativeAPIGatewayStrategy::CloudNativeAPIGatewayStrategy() :
    m_strategyIdHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_configHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_cronConfigHasBeenSet(false),
    m_maxReplicasHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategy.StrategyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = string(value["StrategyId"].GetString());
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategy.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategy.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategy.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategy.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("CronConfig") && !value["CronConfig"].IsNull())
    {
        if (!value["CronConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategy.CronConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cronConfig.Deserialize(value["CronConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cronConfigHasBeenSet = true;
    }

    if (value.HasMember("MaxReplicas") && !value["MaxReplicas"].IsNull())
    {
        if (!value["MaxReplicas"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategy.MaxReplicas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplicas = value["MaxReplicas"].GetUint64();
        m_maxReplicasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_cronConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cronConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplicas, allocator);
    }

}


string CloudNativeAPIGatewayStrategy::GetStrategyId() const
{
    return m_strategyId;
}

void CloudNativeAPIGatewayStrategy::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategy::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string CloudNativeAPIGatewayStrategy::GetStrategyName() const
{
    return m_strategyName;
}

void CloudNativeAPIGatewayStrategy::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategy::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

string CloudNativeAPIGatewayStrategy::GetCreateTime() const
{
    return m_createTime;
}

void CloudNativeAPIGatewayStrategy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudNativeAPIGatewayStrategy::GetModifyTime() const
{
    return m_modifyTime;
}

void CloudNativeAPIGatewayStrategy::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategy::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string CloudNativeAPIGatewayStrategy::GetDescription() const
{
    return m_description;
}

void CloudNativeAPIGatewayStrategy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

CloudNativeAPIGatewayStrategyAutoScalerConfig CloudNativeAPIGatewayStrategy::GetConfig() const
{
    return m_config;
}

void CloudNativeAPIGatewayStrategy::SetConfig(const CloudNativeAPIGatewayStrategyAutoScalerConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategy::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string CloudNativeAPIGatewayStrategy::GetGatewayId() const
{
    return m_gatewayId;
}

void CloudNativeAPIGatewayStrategy::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategy::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

CloudNativeAPIGatewayStrategyCronScalerConfig CloudNativeAPIGatewayStrategy::GetCronConfig() const
{
    return m_cronConfig;
}

void CloudNativeAPIGatewayStrategy::SetCronConfig(const CloudNativeAPIGatewayStrategyCronScalerConfig& _cronConfig)
{
    m_cronConfig = _cronConfig;
    m_cronConfigHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategy::CronConfigHasBeenSet() const
{
    return m_cronConfigHasBeenSet;
}

uint64_t CloudNativeAPIGatewayStrategy::GetMaxReplicas() const
{
    return m_maxReplicas;
}

void CloudNativeAPIGatewayStrategy::SetMaxReplicas(const uint64_t& _maxReplicas)
{
    m_maxReplicas = _maxReplicas;
    m_maxReplicasHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategy::MaxReplicasHasBeenSet() const
{
    return m_maxReplicasHasBeenSet;
}

