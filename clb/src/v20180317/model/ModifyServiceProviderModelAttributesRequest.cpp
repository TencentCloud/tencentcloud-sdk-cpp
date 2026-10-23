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

#include <tencentcloud/clb/v20180317/model/ModifyServiceProviderModelAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyServiceProviderModelAttributesRequest::ModifyServiceProviderModelAttributesRequest() :
    m_serviceProviderIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_inputModalitiesHasBeenSet(false),
    m_newModelNameHasBeenSet(false),
    m_newModelAliasHasBeenSet(false)
{
}

string ModifyServiceProviderModelAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceProviderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceProviderId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_inputModalitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputModalities";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inputModalities.begin(); itr != m_inputModalities.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_newModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newModelName.c_str(), allocator).Move(), allocator);
    }

    if (m_newModelAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewModelAlias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newModelAlias.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyServiceProviderModelAttributesRequest::GetServiceProviderId() const
{
    return m_serviceProviderId;
}

void ModifyServiceProviderModelAttributesRequest::SetServiceProviderId(const string& _serviceProviderId)
{
    m_serviceProviderId = _serviceProviderId;
    m_serviceProviderIdHasBeenSet = true;
}

bool ModifyServiceProviderModelAttributesRequest::ServiceProviderIdHasBeenSet() const
{
    return m_serviceProviderIdHasBeenSet;
}

string ModifyServiceProviderModelAttributesRequest::GetModelName() const
{
    return m_modelName;
}

void ModifyServiceProviderModelAttributesRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModifyServiceProviderModelAttributesRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

vector<string> ModifyServiceProviderModelAttributesRequest::GetInputModalities() const
{
    return m_inputModalities;
}

void ModifyServiceProviderModelAttributesRequest::SetInputModalities(const vector<string>& _inputModalities)
{
    m_inputModalities = _inputModalities;
    m_inputModalitiesHasBeenSet = true;
}

bool ModifyServiceProviderModelAttributesRequest::InputModalitiesHasBeenSet() const
{
    return m_inputModalitiesHasBeenSet;
}

string ModifyServiceProviderModelAttributesRequest::GetNewModelName() const
{
    return m_newModelName;
}

void ModifyServiceProviderModelAttributesRequest::SetNewModelName(const string& _newModelName)
{
    m_newModelName = _newModelName;
    m_newModelNameHasBeenSet = true;
}

bool ModifyServiceProviderModelAttributesRequest::NewModelNameHasBeenSet() const
{
    return m_newModelNameHasBeenSet;
}

string ModifyServiceProviderModelAttributesRequest::GetNewModelAlias() const
{
    return m_newModelAlias;
}

void ModifyServiceProviderModelAttributesRequest::SetNewModelAlias(const string& _newModelAlias)
{
    m_newModelAlias = _newModelAlias;
    m_newModelAliasHasBeenSet = true;
}

bool ModifyServiceProviderModelAttributesRequest::NewModelAliasHasBeenSet() const
{
    return m_newModelAliasHasBeenSet;
}


