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

#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategyCronScalerConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CloudNativeAPIGatewayStrategyCronScalerConfig::CloudNativeAPIGatewayStrategyCronScalerConfig() :
    m_enabledHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_strategyIdHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayStrategyCronScalerConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyCronScalerConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyCronScalerConfig.Params` is not array type"));

        const rapidjson::Value &tmpValue = value["Params"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudNativeAPIGatewayStrategyCronScalerConfigParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_params.push_back(item);
        }
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyCronScalerConfig.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyCronScalerConfig.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyCronScalerConfig.StrategyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = string(value["StrategyId"].GetString());
        m_strategyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayStrategyCronScalerConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

}


bool CloudNativeAPIGatewayStrategyCronScalerConfig::GetEnabled() const
{
    return m_enabled;
}

void CloudNativeAPIGatewayStrategyCronScalerConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyCronScalerConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<CloudNativeAPIGatewayStrategyCronScalerConfigParam> CloudNativeAPIGatewayStrategyCronScalerConfig::GetParams() const
{
    return m_params;
}

void CloudNativeAPIGatewayStrategyCronScalerConfig::SetParams(const vector<CloudNativeAPIGatewayStrategyCronScalerConfigParam>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyCronScalerConfig::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string CloudNativeAPIGatewayStrategyCronScalerConfig::GetCreateTime() const
{
    return m_createTime;
}

void CloudNativeAPIGatewayStrategyCronScalerConfig::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyCronScalerConfig::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudNativeAPIGatewayStrategyCronScalerConfig::GetModifyTime() const
{
    return m_modifyTime;
}

void CloudNativeAPIGatewayStrategyCronScalerConfig::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyCronScalerConfig::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string CloudNativeAPIGatewayStrategyCronScalerConfig::GetStrategyId() const
{
    return m_strategyId;
}

void CloudNativeAPIGatewayStrategyCronScalerConfig::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyCronScalerConfig::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

