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

#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CloudNativeAPIGatewayLLMModelServiceRoute::CloudNativeAPIGatewayLLMModelServiceRoute() :
    m_selectedTypesHasBeenSet(false),
    m_weightedConfigHasBeenSet(false),
    m_modelNameConfigHasBeenSet(false),
    m_intentRouteConfigHasBeenSet(false),
    m_latencyPriorityConfigHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayLLMModelServiceRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SelectedTypes") && !value["SelectedTypes"].IsNull())
    {
        if (!value["SelectedTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelServiceRoute.SelectedTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["SelectedTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_selectedTypes.push_back((*itr).GetString());
        }
        m_selectedTypesHasBeenSet = true;
    }

    if (value.HasMember("WeightedConfig") && !value["WeightedConfig"].IsNull())
    {
        if (!value["WeightedConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelServiceRoute.WeightedConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["WeightedConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_weightedConfig.push_back(item);
        }
        m_weightedConfigHasBeenSet = true;
    }

    if (value.HasMember("ModelNameConfig") && !value["ModelNameConfig"].IsNull())
    {
        if (!value["ModelNameConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelServiceRoute.ModelNameConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelNameConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modelNameConfig.push_back(item);
        }
        m_modelNameConfigHasBeenSet = true;
    }

    if (value.HasMember("IntentRouteConfig") && !value["IntentRouteConfig"].IsNull())
    {
        if (!value["IntentRouteConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelServiceRoute.IntentRouteConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_intentRouteConfig.Deserialize(value["IntentRouteConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intentRouteConfigHasBeenSet = true;
    }

    if (value.HasMember("LatencyPriorityConfig") && !value["LatencyPriorityConfig"].IsNull())
    {
        if (!value["LatencyPriorityConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelServiceRoute.LatencyPriorityConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_latencyPriorityConfig.Deserialize(value["LatencyPriorityConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_latencyPriorityConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayLLMModelServiceRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_selectedTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_selectedTypes.begin(); itr != m_selectedTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_weightedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightedConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_weightedConfig.begin(); itr != m_weightedConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelNameConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelNameConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modelNameConfig.begin(); itr != m_modelNameConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_intentRouteConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentRouteConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intentRouteConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_latencyPriorityConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatencyPriorityConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_latencyPriorityConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<string> CloudNativeAPIGatewayLLMModelServiceRoute::GetSelectedTypes() const
{
    return m_selectedTypes;
}

void CloudNativeAPIGatewayLLMModelServiceRoute::SetSelectedTypes(const vector<string>& _selectedTypes)
{
    m_selectedTypes = _selectedTypes;
    m_selectedTypesHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelServiceRoute::SelectedTypesHasBeenSet() const
{
    return m_selectedTypesHasBeenSet;
}

vector<CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy> CloudNativeAPIGatewayLLMModelServiceRoute::GetWeightedConfig() const
{
    return m_weightedConfig;
}

void CloudNativeAPIGatewayLLMModelServiceRoute::SetWeightedConfig(const vector<CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy>& _weightedConfig)
{
    m_weightedConfig = _weightedConfig;
    m_weightedConfigHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelServiceRoute::WeightedConfigHasBeenSet() const
{
    return m_weightedConfigHasBeenSet;
}

vector<CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy> CloudNativeAPIGatewayLLMModelServiceRoute::GetModelNameConfig() const
{
    return m_modelNameConfig;
}

void CloudNativeAPIGatewayLLMModelServiceRoute::SetModelNameConfig(const vector<CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy>& _modelNameConfig)
{
    m_modelNameConfig = _modelNameConfig;
    m_modelNameConfigHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelServiceRoute::ModelNameConfigHasBeenSet() const
{
    return m_modelNameConfigHasBeenSet;
}

AIGWIntentRoute CloudNativeAPIGatewayLLMModelServiceRoute::GetIntentRouteConfig() const
{
    return m_intentRouteConfig;
}

void CloudNativeAPIGatewayLLMModelServiceRoute::SetIntentRouteConfig(const AIGWIntentRoute& _intentRouteConfig)
{
    m_intentRouteConfig = _intentRouteConfig;
    m_intentRouteConfigHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelServiceRoute::IntentRouteConfigHasBeenSet() const
{
    return m_intentRouteConfigHasBeenSet;
}

AIGWLatencyPriorityConfig CloudNativeAPIGatewayLLMModelServiceRoute::GetLatencyPriorityConfig() const
{
    return m_latencyPriorityConfig;
}

void CloudNativeAPIGatewayLLMModelServiceRoute::SetLatencyPriorityConfig(const AIGWLatencyPriorityConfig& _latencyPriorityConfig)
{
    m_latencyPriorityConfig = _latencyPriorityConfig;
    m_latencyPriorityConfigHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelServiceRoute::LatencyPriorityConfigHasBeenSet() const
{
    return m_latencyPriorityConfigHasBeenSet;
}

