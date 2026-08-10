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

#include <tencentcloud/apis/v20240801/model/TaskComplexityRouteDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

TaskComplexityRouteDTO::TaskComplexityRouteDTO() :
    m_complexityBiasHasBeenSet(false),
    m_simpleTargetModelsHasBeenSet(false),
    m_complexTargetModelsHasBeenSet(false)
{
}

CoreInternalOutcome TaskComplexityRouteDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComplexityBias") && !value["ComplexityBias"].IsNull())
    {
        if (!value["ComplexityBias"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskComplexityRouteDTO.ComplexityBias` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_complexityBias = value["ComplexityBias"].GetDouble();
        m_complexityBiasHasBeenSet = true;
    }

    if (value.HasMember("SimpleTargetModels") && !value["SimpleTargetModels"].IsNull())
    {
        if (!value["SimpleTargetModels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskComplexityRouteDTO.SimpleTargetModels` is not array type"));

        const rapidjson::Value &tmpValue = value["SimpleTargetModels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetModelDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_simpleTargetModels.push_back(item);
        }
        m_simpleTargetModelsHasBeenSet = true;
    }

    if (value.HasMember("ComplexTargetModels") && !value["ComplexTargetModels"].IsNull())
    {
        if (!value["ComplexTargetModels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskComplexityRouteDTO.ComplexTargetModels` is not array type"));

        const rapidjson::Value &tmpValue = value["ComplexTargetModels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetModelDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_complexTargetModels.push_back(item);
        }
        m_complexTargetModelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskComplexityRouteDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_complexityBiasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplexityBias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complexityBias, allocator);
    }

    if (m_simpleTargetModelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimpleTargetModels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_simpleTargetModels.begin(); itr != m_simpleTargetModels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_complexTargetModelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplexTargetModels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_complexTargetModels.begin(); itr != m_complexTargetModels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double TaskComplexityRouteDTO::GetComplexityBias() const
{
    return m_complexityBias;
}

void TaskComplexityRouteDTO::SetComplexityBias(const double& _complexityBias)
{
    m_complexityBias = _complexityBias;
    m_complexityBiasHasBeenSet = true;
}

bool TaskComplexityRouteDTO::ComplexityBiasHasBeenSet() const
{
    return m_complexityBiasHasBeenSet;
}

vector<TargetModelDTO> TaskComplexityRouteDTO::GetSimpleTargetModels() const
{
    return m_simpleTargetModels;
}

void TaskComplexityRouteDTO::SetSimpleTargetModels(const vector<TargetModelDTO>& _simpleTargetModels)
{
    m_simpleTargetModels = _simpleTargetModels;
    m_simpleTargetModelsHasBeenSet = true;
}

bool TaskComplexityRouteDTO::SimpleTargetModelsHasBeenSet() const
{
    return m_simpleTargetModelsHasBeenSet;
}

vector<TargetModelDTO> TaskComplexityRouteDTO::GetComplexTargetModels() const
{
    return m_complexTargetModels;
}

void TaskComplexityRouteDTO::SetComplexTargetModels(const vector<TargetModelDTO>& _complexTargetModels)
{
    m_complexTargetModels = _complexTargetModels;
    m_complexTargetModelsHasBeenSet = true;
}

bool TaskComplexityRouteDTO::ComplexTargetModelsHasBeenSet() const
{
    return m_complexTargetModelsHasBeenSet;
}

