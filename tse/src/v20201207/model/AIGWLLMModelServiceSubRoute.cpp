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

#include <tencentcloud/tse/v20201207/model/AIGWLLMModelServiceSubRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWLLMModelServiceSubRoute::AIGWLLMModelServiceSubRoute() :
    m_selectedTypesHasBeenSet(false),
    m_weightedConfigHasBeenSet(false),
    m_latencyPriorityConfigHasBeenSet(false),
    m_modelServiceConfigHasBeenSet(false)
{
}

CoreInternalOutcome AIGWLLMModelServiceSubRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SelectedTypes") && !value["SelectedTypes"].IsNull())
    {
        if (!value["SelectedTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWLLMModelServiceSubRoute.SelectedTypes` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AIGWLLMModelServiceSubRoute.WeightedConfig` is not array type"));

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

    if (value.HasMember("LatencyPriorityConfig") && !value["LatencyPriorityConfig"].IsNull())
    {
        if (!value["LatencyPriorityConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMModelServiceSubRoute.LatencyPriorityConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_latencyPriorityConfig.Deserialize(value["LatencyPriorityConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_latencyPriorityConfigHasBeenSet = true;
    }

    if (value.HasMember("ModelServiceConfig") && !value["ModelServiceConfig"].IsNull())
    {
        if (!value["ModelServiceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLLMModelServiceSubRoute.ModelServiceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelServiceConfig.Deserialize(value["ModelServiceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelServiceConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWLLMModelServiceSubRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_latencyPriorityConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatencyPriorityConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_latencyPriorityConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modelServiceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelServiceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<string> AIGWLLMModelServiceSubRoute::GetSelectedTypes() const
{
    return m_selectedTypes;
}

void AIGWLLMModelServiceSubRoute::SetSelectedTypes(const vector<string>& _selectedTypes)
{
    m_selectedTypes = _selectedTypes;
    m_selectedTypesHasBeenSet = true;
}

bool AIGWLLMModelServiceSubRoute::SelectedTypesHasBeenSet() const
{
    return m_selectedTypesHasBeenSet;
}

vector<CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy> AIGWLLMModelServiceSubRoute::GetWeightedConfig() const
{
    return m_weightedConfig;
}

void AIGWLLMModelServiceSubRoute::SetWeightedConfig(const vector<CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy>& _weightedConfig)
{
    m_weightedConfig = _weightedConfig;
    m_weightedConfigHasBeenSet = true;
}

bool AIGWLLMModelServiceSubRoute::WeightedConfigHasBeenSet() const
{
    return m_weightedConfigHasBeenSet;
}

AIGWLatencyPriorityConfig AIGWLLMModelServiceSubRoute::GetLatencyPriorityConfig() const
{
    return m_latencyPriorityConfig;
}

void AIGWLLMModelServiceSubRoute::SetLatencyPriorityConfig(const AIGWLatencyPriorityConfig& _latencyPriorityConfig)
{
    m_latencyPriorityConfig = _latencyPriorityConfig;
    m_latencyPriorityConfigHasBeenSet = true;
}

bool AIGWLLMModelServiceSubRoute::LatencyPriorityConfigHasBeenSet() const
{
    return m_latencyPriorityConfigHasBeenSet;
}

AIGWRouteModelServiceConfig AIGWLLMModelServiceSubRoute::GetModelServiceConfig() const
{
    return m_modelServiceConfig;
}

void AIGWLLMModelServiceSubRoute::SetModelServiceConfig(const AIGWRouteModelServiceConfig& _modelServiceConfig)
{
    m_modelServiceConfig = _modelServiceConfig;
    m_modelServiceConfigHasBeenSet = true;
}

bool AIGWLLMModelServiceSubRoute::ModelServiceConfigHasBeenSet() const
{
    return m_modelServiceConfigHasBeenSet;
}

