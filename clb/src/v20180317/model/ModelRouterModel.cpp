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

#include <tencentcloud/clb/v20180317/model/ModelRouterModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelRouterModel::ModelRouterModel() :
    m_modelNameHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_serviceProviderIdHasBeenSet(false)
{
}

CoreInternalOutcome ModelRouterModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterModel.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterModel.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterModel.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ServiceProviderId") && !value["ServiceProviderId"].IsNull())
    {
        if (!value["ServiceProviderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterModel.ServiceProviderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceProviderId = string(value["ServiceProviderId"].GetString());
        m_serviceProviderIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelRouterModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceProviderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceProviderId.c_str(), allocator).Move(), allocator);
    }

}


string ModelRouterModel::GetModelName() const
{
    return m_modelName;
}

void ModelRouterModel::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModelRouterModel::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ModelRouterModel::GetProvider() const
{
    return m_provider;
}

void ModelRouterModel::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool ModelRouterModel::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string ModelRouterModel::GetType() const
{
    return m_type;
}

void ModelRouterModel::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModelRouterModel::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModelRouterModel::GetServiceProviderId() const
{
    return m_serviceProviderId;
}

void ModelRouterModel::SetServiceProviderId(const string& _serviceProviderId)
{
    m_serviceProviderId = _serviceProviderId;
    m_serviceProviderIdHasBeenSet = true;
}

bool ModelRouterModel::ServiceProviderIdHasBeenSet() const
{
    return m_serviceProviderIdHasBeenSet;
}

