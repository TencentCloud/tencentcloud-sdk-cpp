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

#include <tencentcloud/tse/v20201207/model/ModifyAutoScalerResourceStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ModifyAutoScalerResourceStrategyRequest::ModifyAutoScalerResourceStrategyRequest() :
    m_gatewayIdHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_configHasBeenSet(false),
    m_cronScalerConfigHasBeenSet(false),
    m_maxReplicasHasBeenSet(false),
    m_cronConfigHasBeenSet(false)
{
}

string ModifyAutoScalerResourceStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cronScalerConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronScalerConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cronScalerConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_maxReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxReplicas, allocator);
    }

    if (m_cronConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cronConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAutoScalerResourceStrategyRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyAutoScalerResourceStrategyRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyAutoScalerResourceStrategyRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyAutoScalerResourceStrategyRequest::GetStrategyId() const
{
    return m_strategyId;
}

void ModifyAutoScalerResourceStrategyRequest::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool ModifyAutoScalerResourceStrategyRequest::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string ModifyAutoScalerResourceStrategyRequest::GetStrategyName() const
{
    return m_strategyName;
}

void ModifyAutoScalerResourceStrategyRequest::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool ModifyAutoScalerResourceStrategyRequest::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

string ModifyAutoScalerResourceStrategyRequest::GetDescription() const
{
    return m_description;
}

void ModifyAutoScalerResourceStrategyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyAutoScalerResourceStrategyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

CloudNativeAPIGatewayStrategyAutoScalerConfig ModifyAutoScalerResourceStrategyRequest::GetConfig() const
{
    return m_config;
}

void ModifyAutoScalerResourceStrategyRequest::SetConfig(const CloudNativeAPIGatewayStrategyAutoScalerConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ModifyAutoScalerResourceStrategyRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

CloudNativeAPIGatewayStrategyCronScalerConfig ModifyAutoScalerResourceStrategyRequest::GetCronScalerConfig() const
{
    return m_cronScalerConfig;
}

void ModifyAutoScalerResourceStrategyRequest::SetCronScalerConfig(const CloudNativeAPIGatewayStrategyCronScalerConfig& _cronScalerConfig)
{
    m_cronScalerConfig = _cronScalerConfig;
    m_cronScalerConfigHasBeenSet = true;
}

bool ModifyAutoScalerResourceStrategyRequest::CronScalerConfigHasBeenSet() const
{
    return m_cronScalerConfigHasBeenSet;
}

int64_t ModifyAutoScalerResourceStrategyRequest::GetMaxReplicas() const
{
    return m_maxReplicas;
}

void ModifyAutoScalerResourceStrategyRequest::SetMaxReplicas(const int64_t& _maxReplicas)
{
    m_maxReplicas = _maxReplicas;
    m_maxReplicasHasBeenSet = true;
}

bool ModifyAutoScalerResourceStrategyRequest::MaxReplicasHasBeenSet() const
{
    return m_maxReplicasHasBeenSet;
}

CloudNativeAPIGatewayStrategyCronScalerConfig ModifyAutoScalerResourceStrategyRequest::GetCronConfig() const
{
    return m_cronConfig;
}

void ModifyAutoScalerResourceStrategyRequest::SetCronConfig(const CloudNativeAPIGatewayStrategyCronScalerConfig& _cronConfig)
{
    m_cronConfig = _cronConfig;
    m_cronConfigHasBeenSet = true;
}

bool ModifyAutoScalerResourceStrategyRequest::CronConfigHasBeenSet() const
{
    return m_cronConfigHasBeenSet;
}


