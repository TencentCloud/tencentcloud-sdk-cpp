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

#include <tencentcloud/clb/v20180317/model/ServiceProviderCoefficient.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ServiceProviderCoefficient::ServiceProviderCoefficient() :
    m_coefficientHasBeenSet(false),
    m_serviceProviderIdHasBeenSet(false),
    m_serviceProviderNameHasBeenSet(false)
{
}

CoreInternalOutcome ServiceProviderCoefficient::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Coefficient") && !value["Coefficient"].IsNull())
    {
        if (!value["Coefficient"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProviderCoefficient.Coefficient` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coefficient.Deserialize(value["Coefficient"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coefficientHasBeenSet = true;
    }

    if (value.HasMember("ServiceProviderId") && !value["ServiceProviderId"].IsNull())
    {
        if (!value["ServiceProviderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProviderCoefficient.ServiceProviderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceProviderId = string(value["ServiceProviderId"].GetString());
        m_serviceProviderIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceProviderName") && !value["ServiceProviderName"].IsNull())
    {
        if (!value["ServiceProviderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProviderCoefficient.ServiceProviderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceProviderName = string(value["ServiceProviderName"].GetString());
        m_serviceProviderNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceProviderCoefficient::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_coefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coefficient.ToJsonObject(value[key.c_str()], allocator);
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

}


Coefficient ServiceProviderCoefficient::GetCoefficient() const
{
    return m_coefficient;
}

void ServiceProviderCoefficient::SetCoefficient(const Coefficient& _coefficient)
{
    m_coefficient = _coefficient;
    m_coefficientHasBeenSet = true;
}

bool ServiceProviderCoefficient::CoefficientHasBeenSet() const
{
    return m_coefficientHasBeenSet;
}

string ServiceProviderCoefficient::GetServiceProviderId() const
{
    return m_serviceProviderId;
}

void ServiceProviderCoefficient::SetServiceProviderId(const string& _serviceProviderId)
{
    m_serviceProviderId = _serviceProviderId;
    m_serviceProviderIdHasBeenSet = true;
}

bool ServiceProviderCoefficient::ServiceProviderIdHasBeenSet() const
{
    return m_serviceProviderIdHasBeenSet;
}

string ServiceProviderCoefficient::GetServiceProviderName() const
{
    return m_serviceProviderName;
}

void ServiceProviderCoefficient::SetServiceProviderName(const string& _serviceProviderName)
{
    m_serviceProviderName = _serviceProviderName;
    m_serviceProviderNameHasBeenSet = true;
}

bool ServiceProviderCoefficient::ServiceProviderNameHasBeenSet() const
{
    return m_serviceProviderNameHasBeenSet;
}

