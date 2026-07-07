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

#include <tencentcloud/clb/v20180317/model/ServiceProviderItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ServiceProviderItem::ServiceProviderItem() :
    m_serviceProviderIdHasBeenSet(false),
    m_serviceProviderNameHasBeenSet(false),
    m_modelProviderHasBeenSet(false),
    m_inputModalitiesHasBeenSet(false)
{
}

CoreInternalOutcome ServiceProviderItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceProviderId") && !value["ServiceProviderId"].IsNull())
    {
        if (!value["ServiceProviderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProviderItem.ServiceProviderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceProviderId = string(value["ServiceProviderId"].GetString());
        m_serviceProviderIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceProviderName") && !value["ServiceProviderName"].IsNull())
    {
        if (!value["ServiceProviderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProviderItem.ServiceProviderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceProviderName = string(value["ServiceProviderName"].GetString());
        m_serviceProviderNameHasBeenSet = true;
    }

    if (value.HasMember("ModelProvider") && !value["ModelProvider"].IsNull())
    {
        if (!value["ModelProvider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProviderItem.ModelProvider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelProvider = string(value["ModelProvider"].GetString());
        m_modelProviderHasBeenSet = true;
    }

    if (value.HasMember("InputModalities") && !value["InputModalities"].IsNull())
    {
        if (!value["InputModalities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceProviderItem.InputModalities` is not array type"));

        const rapidjson::Value &tmpValue = value["InputModalities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inputModalities.push_back((*itr).GetString());
        }
        m_inputModalitiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceProviderItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_modelProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelProvider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelProvider.c_str(), allocator).Move(), allocator);
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

}


string ServiceProviderItem::GetServiceProviderId() const
{
    return m_serviceProviderId;
}

void ServiceProviderItem::SetServiceProviderId(const string& _serviceProviderId)
{
    m_serviceProviderId = _serviceProviderId;
    m_serviceProviderIdHasBeenSet = true;
}

bool ServiceProviderItem::ServiceProviderIdHasBeenSet() const
{
    return m_serviceProviderIdHasBeenSet;
}

string ServiceProviderItem::GetServiceProviderName() const
{
    return m_serviceProviderName;
}

void ServiceProviderItem::SetServiceProviderName(const string& _serviceProviderName)
{
    m_serviceProviderName = _serviceProviderName;
    m_serviceProviderNameHasBeenSet = true;
}

bool ServiceProviderItem::ServiceProviderNameHasBeenSet() const
{
    return m_serviceProviderNameHasBeenSet;
}

string ServiceProviderItem::GetModelProvider() const
{
    return m_modelProvider;
}

void ServiceProviderItem::SetModelProvider(const string& _modelProvider)
{
    m_modelProvider = _modelProvider;
    m_modelProviderHasBeenSet = true;
}

bool ServiceProviderItem::ModelProviderHasBeenSet() const
{
    return m_modelProviderHasBeenSet;
}

vector<string> ServiceProviderItem::GetInputModalities() const
{
    return m_inputModalities;
}

void ServiceProviderItem::SetInputModalities(const vector<string>& _inputModalities)
{
    m_inputModalities = _inputModalities;
    m_inputModalitiesHasBeenSet = true;
}

bool ServiceProviderItem::InputModalitiesHasBeenSet() const
{
    return m_inputModalitiesHasBeenSet;
}

