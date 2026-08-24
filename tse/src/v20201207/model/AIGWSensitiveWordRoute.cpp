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

#include <tencentcloud/tse/v20201207/model/AIGWSensitiveWordRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWSensitiveWordRoute::AIGWSensitiveWordRoute() :
    m_enabledHasBeenSet(false),
    m_modelServiceRefsHasBeenSet(false),
    m_modelServiceNamesHasBeenSet(false),
    m_selectedTypesHasBeenSet(false),
    m_weightedConfigHasBeenSet(false),
    m_modelNameConfigHasBeenSet(false)
{
}

CoreInternalOutcome AIGWSensitiveWordRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWSensitiveWordRoute.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("ModelServiceRefs") && !value["ModelServiceRefs"].IsNull())
    {
        if (!value["ModelServiceRefs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWSensitiveWordRoute.ModelServiceRefs` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelServiceRefs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_modelServiceRefs.push_back((*itr).GetString());
        }
        m_modelServiceRefsHasBeenSet = true;
    }

    if (value.HasMember("ModelServiceNames") && !value["ModelServiceNames"].IsNull())
    {
        if (!value["ModelServiceNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWSensitiveWordRoute.ModelServiceNames` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelServiceNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_modelServiceNames.push_back((*itr).GetString());
        }
        m_modelServiceNamesHasBeenSet = true;
    }

    if (value.HasMember("SelectedTypes") && !value["SelectedTypes"].IsNull())
    {
        if (!value["SelectedTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWSensitiveWordRoute.SelectedTypes` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AIGWSensitiveWordRoute.WeightedConfig` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AIGWSensitiveWordRoute.ModelNameConfig` is not array type"));

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


    return CoreInternalOutcome(true);
}

void AIGWSensitiveWordRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_modelServiceRefsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceRefs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modelServiceRefs.begin(); itr != m_modelServiceRefs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelServiceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modelServiceNames.begin(); itr != m_modelServiceNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

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

}


bool AIGWSensitiveWordRoute::GetEnabled() const
{
    return m_enabled;
}

void AIGWSensitiveWordRoute::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool AIGWSensitiveWordRoute::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<string> AIGWSensitiveWordRoute::GetModelServiceRefs() const
{
    return m_modelServiceRefs;
}

void AIGWSensitiveWordRoute::SetModelServiceRefs(const vector<string>& _modelServiceRefs)
{
    m_modelServiceRefs = _modelServiceRefs;
    m_modelServiceRefsHasBeenSet = true;
}

bool AIGWSensitiveWordRoute::ModelServiceRefsHasBeenSet() const
{
    return m_modelServiceRefsHasBeenSet;
}

vector<string> AIGWSensitiveWordRoute::GetModelServiceNames() const
{
    return m_modelServiceNames;
}

void AIGWSensitiveWordRoute::SetModelServiceNames(const vector<string>& _modelServiceNames)
{
    m_modelServiceNames = _modelServiceNames;
    m_modelServiceNamesHasBeenSet = true;
}

bool AIGWSensitiveWordRoute::ModelServiceNamesHasBeenSet() const
{
    return m_modelServiceNamesHasBeenSet;
}

vector<string> AIGWSensitiveWordRoute::GetSelectedTypes() const
{
    return m_selectedTypes;
}

void AIGWSensitiveWordRoute::SetSelectedTypes(const vector<string>& _selectedTypes)
{
    m_selectedTypes = _selectedTypes;
    m_selectedTypesHasBeenSet = true;
}

bool AIGWSensitiveWordRoute::SelectedTypesHasBeenSet() const
{
    return m_selectedTypesHasBeenSet;
}

vector<CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy> AIGWSensitiveWordRoute::GetWeightedConfig() const
{
    return m_weightedConfig;
}

void AIGWSensitiveWordRoute::SetWeightedConfig(const vector<CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy>& _weightedConfig)
{
    m_weightedConfig = _weightedConfig;
    m_weightedConfigHasBeenSet = true;
}

bool AIGWSensitiveWordRoute::WeightedConfigHasBeenSet() const
{
    return m_weightedConfigHasBeenSet;
}

vector<CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy> AIGWSensitiveWordRoute::GetModelNameConfig() const
{
    return m_modelNameConfig;
}

void AIGWSensitiveWordRoute::SetModelNameConfig(const vector<CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy>& _modelNameConfig)
{
    m_modelNameConfig = _modelNameConfig;
    m_modelNameConfigHasBeenSet = true;
}

bool AIGWSensitiveWordRoute::ModelNameConfigHasBeenSet() const
{
    return m_modelNameConfigHasBeenSet;
}

