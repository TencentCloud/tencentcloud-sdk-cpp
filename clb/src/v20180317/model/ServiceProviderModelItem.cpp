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

#include <tencentcloud/clb/v20180317/model/ServiceProviderModelItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ServiceProviderModelItem::ServiceProviderModelItem() :
    m_associatedModelRoutersHasBeenSet(false),
    m_inputModalitiesHasBeenSet(false),
    m_modelAliasHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_probedInputModalitiesHasBeenSet(false)
{
}

CoreInternalOutcome ServiceProviderModelItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssociatedModelRouters") && !value["AssociatedModelRouters"].IsNull())
    {
        if (!value["AssociatedModelRouters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceProviderModelItem.AssociatedModelRouters` is not array type"));

        const rapidjson::Value &tmpValue = value["AssociatedModelRouters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssociatedModelRouterItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_associatedModelRouters.push_back(item);
        }
        m_associatedModelRoutersHasBeenSet = true;
    }

    if (value.HasMember("InputModalities") && !value["InputModalities"].IsNull())
    {
        if (!value["InputModalities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceProviderModelItem.InputModalities` is not array type"));

        const rapidjson::Value &tmpValue = value["InputModalities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inputModalities.push_back((*itr).GetString());
        }
        m_inputModalitiesHasBeenSet = true;
    }

    if (value.HasMember("ModelAlias") && !value["ModelAlias"].IsNull())
    {
        if (!value["ModelAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProviderModelItem.ModelAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelAlias = string(value["ModelAlias"].GetString());
        m_modelAliasHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProviderModelItem.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ProbedInputModalities") && !value["ProbedInputModalities"].IsNull())
    {
        if (!value["ProbedInputModalities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceProviderModelItem.ProbedInputModalities` is not array type"));

        const rapidjson::Value &tmpValue = value["ProbedInputModalities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_probedInputModalities.push_back((*itr).GetString());
        }
        m_probedInputModalitiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceProviderModelItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_associatedModelRoutersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedModelRouters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_associatedModelRouters.begin(); itr != m_associatedModelRouters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_inputModalitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputModalities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inputModalities.begin(); itr != m_inputModalities.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_probedInputModalitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbedInputModalities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_probedInputModalities.begin(); itr != m_probedInputModalities.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<AssociatedModelRouterItem> ServiceProviderModelItem::GetAssociatedModelRouters() const
{
    return m_associatedModelRouters;
}

void ServiceProviderModelItem::SetAssociatedModelRouters(const vector<AssociatedModelRouterItem>& _associatedModelRouters)
{
    m_associatedModelRouters = _associatedModelRouters;
    m_associatedModelRoutersHasBeenSet = true;
}

bool ServiceProviderModelItem::AssociatedModelRoutersHasBeenSet() const
{
    return m_associatedModelRoutersHasBeenSet;
}

vector<string> ServiceProviderModelItem::GetInputModalities() const
{
    return m_inputModalities;
}

void ServiceProviderModelItem::SetInputModalities(const vector<string>& _inputModalities)
{
    m_inputModalities = _inputModalities;
    m_inputModalitiesHasBeenSet = true;
}

bool ServiceProviderModelItem::InputModalitiesHasBeenSet() const
{
    return m_inputModalitiesHasBeenSet;
}

string ServiceProviderModelItem::GetModelAlias() const
{
    return m_modelAlias;
}

void ServiceProviderModelItem::SetModelAlias(const string& _modelAlias)
{
    m_modelAlias = _modelAlias;
    m_modelAliasHasBeenSet = true;
}

bool ServiceProviderModelItem::ModelAliasHasBeenSet() const
{
    return m_modelAliasHasBeenSet;
}

string ServiceProviderModelItem::GetModelId() const
{
    return m_modelId;
}

void ServiceProviderModelItem::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ServiceProviderModelItem::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

vector<string> ServiceProviderModelItem::GetProbedInputModalities() const
{
    return m_probedInputModalities;
}

void ServiceProviderModelItem::SetProbedInputModalities(const vector<string>& _probedInputModalities)
{
    m_probedInputModalities = _probedInputModalities;
    m_probedInputModalitiesHasBeenSet = true;
}

bool ServiceProviderModelItem::ProbedInputModalitiesHasBeenSet() const
{
    return m_probedInputModalitiesHasBeenSet;
}

