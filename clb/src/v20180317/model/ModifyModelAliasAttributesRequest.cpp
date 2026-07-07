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

#include <tencentcloud/clb/v20180317/model/ModifyModelAliasAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyModelAliasAttributesRequest::ModifyModelAliasAttributesRequest() :
    m_coefficientHasBeenSet(false),
    m_modelAliasNamesHasBeenSet(false),
    m_serviceProviderIdsHasBeenSet(false)
{
}

string ModifyModelAliasAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_coefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coefficient";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coefficient.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_modelAliasNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAliasNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modelAliasNames.begin(); itr != m_modelAliasNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serviceProviderIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceProviderIds.begin(); itr != m_serviceProviderIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Coefficient ModifyModelAliasAttributesRequest::GetCoefficient() const
{
    return m_coefficient;
}

void ModifyModelAliasAttributesRequest::SetCoefficient(const Coefficient& _coefficient)
{
    m_coefficient = _coefficient;
    m_coefficientHasBeenSet = true;
}

bool ModifyModelAliasAttributesRequest::CoefficientHasBeenSet() const
{
    return m_coefficientHasBeenSet;
}

vector<string> ModifyModelAliasAttributesRequest::GetModelAliasNames() const
{
    return m_modelAliasNames;
}

void ModifyModelAliasAttributesRequest::SetModelAliasNames(const vector<string>& _modelAliasNames)
{
    m_modelAliasNames = _modelAliasNames;
    m_modelAliasNamesHasBeenSet = true;
}

bool ModifyModelAliasAttributesRequest::ModelAliasNamesHasBeenSet() const
{
    return m_modelAliasNamesHasBeenSet;
}

vector<string> ModifyModelAliasAttributesRequest::GetServiceProviderIds() const
{
    return m_serviceProviderIds;
}

void ModifyModelAliasAttributesRequest::SetServiceProviderIds(const vector<string>& _serviceProviderIds)
{
    m_serviceProviderIds = _serviceProviderIds;
    m_serviceProviderIdsHasBeenSet = true;
}

bool ModifyModelAliasAttributesRequest::ServiceProviderIdsHasBeenSet() const
{
    return m_serviceProviderIdsHasBeenSet;
}


