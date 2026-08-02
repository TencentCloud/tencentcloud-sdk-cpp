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

#include <tencentcloud/clb/v20180317/model/ServiceProvider.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ServiceProvider::ServiceProvider() :
    m_accessTypeHasBeenSet(false),
    m_inputModalitiesHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_serviceProviderIdHasBeenSet(false),
    m_serviceProviderNameHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_associationStatusHasBeenSet(false)
{
}

CoreInternalOutcome ServiceProvider::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProvider.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("InputModalities") && !value["InputModalities"].IsNull())
    {
        if (!value["InputModalities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceProvider.InputModalities` is not array type"));

        const rapidjson::Value &tmpValue = value["InputModalities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inputModalities.push_back((*itr).GetString());
        }
        m_inputModalitiesHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProvider.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProvider.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("ServiceProviderId") && !value["ServiceProviderId"].IsNull())
    {
        if (!value["ServiceProviderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProvider.ServiceProviderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceProviderId = string(value["ServiceProviderId"].GetString());
        m_serviceProviderIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceProviderName") && !value["ServiceProviderName"].IsNull())
    {
        if (!value["ServiceProviderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProvider.ServiceProviderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceProviderName = string(value["ServiceProviderName"].GetString());
        m_serviceProviderNameHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProvider.Order` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetUint64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProvider.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("AssociationStatus") && !value["AssociationStatus"].IsNull())
    {
        if (!value["AssociationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProvider.AssociationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associationStatus = string(value["AssociationStatus"].GetString());
        m_associationStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceProvider::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
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

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceProviderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceProviderId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceProviderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceProviderName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_associationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associationStatus.c_str(), allocator).Move(), allocator);
    }

}


string ServiceProvider::GetAccessType() const
{
    return m_accessType;
}

void ServiceProvider::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool ServiceProvider::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

vector<string> ServiceProvider::GetInputModalities() const
{
    return m_inputModalities;
}

void ServiceProvider::SetInputModalities(const vector<string>& _inputModalities)
{
    m_inputModalities = _inputModalities;
    m_inputModalitiesHasBeenSet = true;
}

bool ServiceProvider::InputModalitiesHasBeenSet() const
{
    return m_inputModalitiesHasBeenSet;
}

string ServiceProvider::GetProtocol() const
{
    return m_protocol;
}

void ServiceProvider::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ServiceProvider::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string ServiceProvider::GetProvider() const
{
    return m_provider;
}

void ServiceProvider::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool ServiceProvider::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string ServiceProvider::GetServiceProviderId() const
{
    return m_serviceProviderId;
}

void ServiceProvider::SetServiceProviderId(const string& _serviceProviderId)
{
    m_serviceProviderId = _serviceProviderId;
    m_serviceProviderIdHasBeenSet = true;
}

bool ServiceProvider::ServiceProviderIdHasBeenSet() const
{
    return m_serviceProviderIdHasBeenSet;
}

string ServiceProvider::GetServiceProviderName() const
{
    return m_serviceProviderName;
}

void ServiceProvider::SetServiceProviderName(const string& _serviceProviderName)
{
    m_serviceProviderName = _serviceProviderName;
    m_serviceProviderNameHasBeenSet = true;
}

bool ServiceProvider::ServiceProviderNameHasBeenSet() const
{
    return m_serviceProviderNameHasBeenSet;
}

uint64_t ServiceProvider::GetOrder() const
{
    return m_order;
}

void ServiceProvider::SetOrder(const uint64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool ServiceProvider::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

uint64_t ServiceProvider::GetWeight() const
{
    return m_weight;
}

void ServiceProvider::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool ServiceProvider::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string ServiceProvider::GetAssociationStatus() const
{
    return m_associationStatus;
}

void ServiceProvider::SetAssociationStatus(const string& _associationStatus)
{
    m_associationStatus = _associationStatus;
    m_associationStatusHasBeenSet = true;
}

bool ServiceProvider::AssociationStatusHasBeenSet() const
{
    return m_associationStatusHasBeenSet;
}

