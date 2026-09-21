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
    m_modelAliasNamesHasBeenSet(false),
    m_coefficientHasBeenSet(false),
    m_serviceProviderIdsHasBeenSet(false),
    m_capabilityHasBeenSet(false),
    m_coefficientTiersHasBeenSet(false),
    m_coefficientScheduleHasBeenSet(false)
{
}

string ModifyModelAliasAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_coefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coefficient";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coefficient.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_capabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capability";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_capability.c_str(), allocator).Move(), allocator);
    }

    if (m_coefficientTiersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoefficientTiers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coefficientTiers.begin(); itr != m_coefficientTiers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_coefficientScheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoefficientSchedule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coefficientSchedule.begin(); itr != m_coefficientSchedule.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

string ModifyModelAliasAttributesRequest::GetCapability() const
{
    return m_capability;
}

void ModifyModelAliasAttributesRequest::SetCapability(const string& _capability)
{
    m_capability = _capability;
    m_capabilityHasBeenSet = true;
}

bool ModifyModelAliasAttributesRequest::CapabilityHasBeenSet() const
{
    return m_capabilityHasBeenSet;
}

vector<CoefficientTier> ModifyModelAliasAttributesRequest::GetCoefficientTiers() const
{
    return m_coefficientTiers;
}

void ModifyModelAliasAttributesRequest::SetCoefficientTiers(const vector<CoefficientTier>& _coefficientTiers)
{
    m_coefficientTiers = _coefficientTiers;
    m_coefficientTiersHasBeenSet = true;
}

bool ModifyModelAliasAttributesRequest::CoefficientTiersHasBeenSet() const
{
    return m_coefficientTiersHasBeenSet;
}

vector<CoefficientScheduleRule> ModifyModelAliasAttributesRequest::GetCoefficientSchedule() const
{
    return m_coefficientSchedule;
}

void ModifyModelAliasAttributesRequest::SetCoefficientSchedule(const vector<CoefficientScheduleRule>& _coefficientSchedule)
{
    m_coefficientSchedule = _coefficientSchedule;
    m_coefficientScheduleHasBeenSet = true;
}

bool ModifyModelAliasAttributesRequest::CoefficientScheduleHasBeenSet() const
{
    return m_coefficientScheduleHasBeenSet;
}


