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

#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy::CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy() :
    m_modelServiceIdHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelServiceId") && !value["ModelServiceId"].IsNull())
    {
        if (!value["ModelServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy.ModelServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelServiceId = string(value["ModelServiceId"].GetString());
        m_modelServiceIdHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


string CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy::GetModelServiceId() const
{
    return m_modelServiceId;
}

void CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy::SetModelServiceId(const string& _modelServiceId)
{
    m_modelServiceId = _modelServiceId;
    m_modelServiceIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy::ModelServiceIdHasBeenSet() const
{
    return m_modelServiceIdHasBeenSet;
}

int64_t CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy::GetWeight() const
{
    return m_weight;
}

void CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

