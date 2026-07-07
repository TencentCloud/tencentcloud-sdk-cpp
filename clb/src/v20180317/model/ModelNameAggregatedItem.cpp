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

#include <tencentcloud/clb/v20180317/model/ModelNameAggregatedItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelNameAggregatedItem::ModelNameAggregatedItem() :
    m_modelNameHasBeenSet(false),
    m_serviceProvidersHasBeenSet(false),
    m_inputModalitiesUnionHasBeenSet(false)
{
}

CoreInternalOutcome ModelNameAggregatedItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelNameAggregatedItem.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceProviders") && !value["ServiceProviders"].IsNull())
    {
        if (!value["ServiceProviders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelNameAggregatedItem.ServiceProviders` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceProviders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceProviderItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceProviders.push_back(item);
        }
        m_serviceProvidersHasBeenSet = true;
    }

    if (value.HasMember("InputModalitiesUnion") && !value["InputModalitiesUnion"].IsNull())
    {
        if (!value["InputModalitiesUnion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelNameAggregatedItem.InputModalitiesUnion` is not array type"));

        const rapidjson::Value &tmpValue = value["InputModalitiesUnion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inputModalitiesUnion.push_back((*itr).GetString());
        }
        m_inputModalitiesUnionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelNameAggregatedItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceProvidersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceProviders.begin(); itr != m_serviceProviders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_inputModalitiesUnionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputModalitiesUnion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inputModalitiesUnion.begin(); itr != m_inputModalitiesUnion.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ModelNameAggregatedItem::GetModelName() const
{
    return m_modelName;
}

void ModelNameAggregatedItem::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModelNameAggregatedItem::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

vector<ServiceProviderItem> ModelNameAggregatedItem::GetServiceProviders() const
{
    return m_serviceProviders;
}

void ModelNameAggregatedItem::SetServiceProviders(const vector<ServiceProviderItem>& _serviceProviders)
{
    m_serviceProviders = _serviceProviders;
    m_serviceProvidersHasBeenSet = true;
}

bool ModelNameAggregatedItem::ServiceProvidersHasBeenSet() const
{
    return m_serviceProvidersHasBeenSet;
}

vector<string> ModelNameAggregatedItem::GetInputModalitiesUnion() const
{
    return m_inputModalitiesUnion;
}

void ModelNameAggregatedItem::SetInputModalitiesUnion(const vector<string>& _inputModalitiesUnion)
{
    m_inputModalitiesUnion = _inputModalitiesUnion;
    m_inputModalitiesUnionHasBeenSet = true;
}

bool ModelNameAggregatedItem::InputModalitiesUnionHasBeenSet() const
{
    return m_inputModalitiesUnionHasBeenSet;
}

